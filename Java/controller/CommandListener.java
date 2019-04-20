/**
 * CommandListener.java
 * <p>
 * File berisi command action untuk setiap object hidup di Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import java.util.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;
import javax.swing.JTextField;

/**
 * <p>
 * Class for command action
 * </p>
 */
public class CommandListener implements ActionListener {

	private Map map;
	private Player player;
	private Cell[][] cell;
	private ArrayList<FarmAnimal> animal;
	private Inventory inventory;
	private Resource resource;
	private ArrayList<Facility> facility;

	/**
	 * Class for command action
	 * @param map
	 * @param player
	 * @param cell
	 * @param animal
	 * @param inventory
	 * @param resource
	 * @param facility
	 */
	public CommandListener(Map map, Player player, Cell[][] cell, ArrayList<FarmAnimal> animal, Inventory inventory, Resource resource, ArrayList<Facility> facility) {
		super();
		this.map = map;
		this.player = player;
		this.cell = cell;
		this.animal = animal;
		this.inventory = inventory;
		this.resource = resource;
		this.facility = facility;
	}
	
	/**
	 * Pop up message function
	 * @param message
	 */
	public void popUp(String message){
		JOptionPane.showMessageDialog(null,
				message, "Message",
				JOptionPane.PLAIN_MESSAGE);
	}

	/**
	 * Move function for player
	 * @param button
	 */
	public void playerMove(String button){
		if(button.equals("▲"))
			player.move("up", map.DATA);
		else if(button.equals("▼"))
			player.move("down", map.DATA);
		else if(button.equals("◄"))
			player.move("left", map.DATA);
		else if(button.equals("►"))
			player.move("right", map.DATA);

		int i = player.getY();
		int j = player.getX();
		map.DATA[i][j] = player.render();
	}

	/**
	 * Talk function for player
	 */
	public void playerTalk(){
		player.talk(map.DATA);
		int surroundingY = player.getSurroundingY();
		int surroundingX = player.getSurroundingX();
		boolean exist = false;
		for(int idx = 0; idx < animal.size(); idx++){
			if(animal.get(idx).getY() == surroundingY && animal.get(idx).getX() == surroundingX){
				popUp(animal.get(idx).sound());
				exist = true;
				break;
			}
		}
		if(!exist)
			popUp("No Animal");
	}

	/**
	 * Interact function for player
	 */
	public void playerInteract(){
		boolean exist = false;
		player.seeAnimal(map.DATA);
		int surroundingY = player.getSurroundingY();
		int surroundingX = player.getSurroundingX();
		for(int idx = 0; idx < animal.size(); idx++){
			if(animal.get(idx).getY() == surroundingY && animal.get(idx).getX() == surroundingX){
				popUp(player.interact(animal.get(idx).render(), animal.get(idx).getInteractivity()));
				animal.get(idx).interact();
				exist = true;
				break;
			}
		}

		if(!exist){
			exist = false;
			char symbol = player.seeFacility(map.DATA);
			if(symbol == 'T'){
				popUp(player.dealTruck(((Truck) facility.get(0)).transact()));
				for(int i = 0; i < inventory.DATA.length; i++)
					inventory.DATA[i][0] = " ";
				exist = true;
			}else if(symbol == 'W'){
				popUp(player.fillWater());
				exist = true;
			}else if(symbol == 'M'){
				popUp(player.mix());
				for(int i = 0; i < inventory.DATA.length; i++)
					inventory.DATA[i][0] = " ";
				exist = true;
			}
			if(!exist)
				popUp("No Animal && No Facility");
		}

		int i = 0;
        for (Product product : player.getInventory()) {
            System.out.println(product.getName());
			inventory.DATA[i][0] = product.getName();
			i++;
        }

        resource.DATA[0][1] = player.getMoney().toString();
        resource.DATA[1][1] = player.getWater().toString();

		inventory.setDataVector(inventory.DATA, inventory.TABLE_HEADER);
		resource.setDataVector(resource.DATA, resource.TABLE_HEADER);
	}

	/**
	 * Kill function for player
	 */
	public void playerKill(){
		player.seeAnimal(map.DATA);
		int surroundingY = player.getSurroundingY();
		int surroundingX = player.getSurroundingX();
		boolean exist = false;
		for(int idx = 0; idx < animal.size(); idx++){
			if(animal.get(idx).getY() == surroundingY && animal.get(idx).getX() == surroundingX){
				if(animal.get(idx).isMeatProducing())
					popUp(player.kill(animal.get(idx).render()));
				else
					popUp(animal.get(idx).kill());
				animal.remove(idx);
				exist = true;
				break;
			}
		}
		if(!exist)
			popUp("No Animal");

		int i = 0;
        for (Product product : player.getInventory()) {
            System.out.println(product.getName());
			inventory.DATA[i++][0] = product.getName();
        }

		inventory.setDataVector(inventory.DATA, inventory.TABLE_HEADER);
	}

	/**
	 * Grow function for player
	 */
	public void playerGrow(){
		if(player.grow()){
			cell[player.getY()][player.getX()].setGrassStatus(true);
			resource.DATA[1][1] = player.getWater().toString();
			popUp("Plant is growing..");
		}
		else
			popUp("Water is not enough");

		resource.setDataVector(resource.DATA, resource.TABLE_HEADER);
	}

	/**
	 * Map rendering function
	 */
	public void assignMap(){
		for(int i = 0; i < map.DATA.length; i++){
			for(int j = 0; j < map.DATA[0].length; j++)
				map.DATA[i][j] = cell[i][j].render();
		}

		map.DATA[player.getY()][player.getX()] = player.render();

		for(int i = 0; i < animal.size(); i++){
			int y = animal.get(i).getY();
			int x = animal.get(i).getX();
			map.DATA[y][x] = animal.get(i).render();
		}

		int y,x;
		Truck truck = (Truck) facility.get(0);
		y = truck.getY();
		x = truck.getX();
		map.DATA[y][x] = truck.render();


		Well well = (Well) facility.get(1);
		y = well.getY();
		x = well.getX();
		map.DATA[y][x] = well.render();

		Mixer mixer = (Mixer) facility.get(2);
		y = mixer.getY();
		x = mixer.getX();
		map.DATA[y][x] = mixer.render();
	}

	/**
	 * Move function for animal
	 */
	public void moveAnimal(){
		for(int i = 0; i < animal.size(); i++){
			animal.get(i).move(map.DATA);
			int y = animal.get(i).getY();
			int x = animal.get(i).getX();
			map.DATA[y][x] = animal.get(i).render();
			if(cell[y][x].isGrass() && animal.get(i).getHunger()){
				animal.get(i).eat();
				cell[y][x].setGrassStatus(false);
			}else if(animal.get(i).getStarvation())
				animal.remove(i);
		}
	}

	/**
	 * Check number of animal
	 */
	public void checkAnimal(){
		Integer count = animal.size();
		resource.DATA[2][1] = count.toString();
		resource.setDataVector(resource.DATA, resource.TABLE_HEADER);
		if(animal.size() <= 0)
			popUp("Unfortunately, all animals are dead. Restart your game to play again");
	}

	@Override
	/**
	 * Command executioner per turn
	 * @param e
	 */
	public void actionPerformed(ActionEvent e) {
		String button = e.getActionCommand();

		assignMap();

		if(button.equals("▲") || button.equals("▼") || button.equals("◄") || button.equals("►"))
			playerMove(button);
		else if(button.equals("T"))
			playerTalk();
		else if(button.equals("I"))
			playerInteract();
		else if(button.equals("K"))
			playerKill();
		else if(button.equals("G"))
			playerGrow();

		moveAnimal();

		assignMap();

		checkAnimal();

		map.setDataVector(map.DATA, map.TABLE_HEADER);
	}

}
