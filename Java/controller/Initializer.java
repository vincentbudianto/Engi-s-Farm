/**
 * Initializer.java
 * <p>
 * File berisi initiator data untuk Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import animal.*;
import facility.*;
import farmproduct.*;
import land.*;
import resource.*;
import sideproduct.*;
import java.util.*;

import javax.swing.JOptionPane;

/**
 * <p>
 * Class for initializing resources
 * </p>
 */
public class Initializer {

	/**
	 * Inisialisasi map
	 */
	public void initCell(Cell[][] cell, resource.Map map){
		for(int i = 0; i < map.DATA.length; i++){
			for(int j = 0; j < map.DATA[i].length; j++)
				cell[i][j] = new land.Grassland();
		}
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++)
				cell[i][j] = new land.Coop();
		}
		for(int i = 0; i < 7; i++){
			for(int j = 4; j < 9; j++)
				cell[i][j] = new land.Barn();
		}
		for(int i = 0; i < map.DATA.length; i++){
			for(int j = 0; j < map.DATA[i].length; j++)
				map.DATA[i][j] = cell[i][j].render();
		}
		map.setDataVector(map.DATA, map.TABLE_HEADER);
	}

	/**
	 * Inisialisasi player
	 */
	public void initPlayer(Player player, resource.Map map){
		int i = player.getY();
		int j = player.getX();
		map.DATA[i][j] = player.render();
		map.setDataVector(map.DATA, map.TABLE_HEADER);
	}

	public void initAnimal(ArrayList<FarmAnimal> animal, resource.Map map){
		animal.add(new Chicken(1,1));
		animal.add(new Chicken(1,2));
		animal.add(new Chicken(2,1));
		animal.add(new Cow(5,3));
		animal.add(new Cow(5,4));
		animal.add(new Cow(6,3));
		animal.add(new Duck(3,2));
		animal.add(new Duck(3,1));
		animal.add(new Goat(1,5));
		animal.add(new Goat(2,5));
		animal.add(new Horse(8,5));
		animal.add(new Sheep(8,7));
		animal.add(new Sheep(8,8));
		for(int i = 0; i < animal.size(); i++){
			int y = animal.get(i).getY();
			int x = animal.get(i).getX();
			map.DATA[y][x] = animal.get(i).render();
		}
		map.setDataVector(map.DATA, map.TABLE_HEADER);
	};

	/**
	 * Inisialisasi inventory
	 */
	public void initInventory(Player player, Inventory inventory){
		int i = 0;
        for (Product product : player.getInventory()) {
            System.out.println(product.getName());
			inventory.DATA[i++][0] = product.getName();
        }
		inventory.setDataVector(inventory.DATA, inventory.TABLE_HEADER);
	}

	/**
	 * Inisialisasi resource
	 */
	public void initResource(Player player, ArrayList<FarmAnimal> animal, Resource resource){
		resource.DATA[0][1] = player.getMoney().toString();
		resource.DATA[1][1] = player.getWater().toString();
		Integer count = animal.size();
		resource.DATA[2][1] = count.toString();
		resource.setDataVector(resource.DATA, resource.TABLE_HEADER);
	}

	/**
	 * Inisialisasi facility
	 */
	public void initFacility(ArrayList<Facility> facility, resource.Map map){
		facility.add(new Truck(3,10));
		facility.add(new Well(4,10));
		facility.add(new Mixer(5,10));
		
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

		map.setDataVector(map.DATA, map.TABLE_HEADER);
	}
}
