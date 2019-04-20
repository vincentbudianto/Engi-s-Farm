/**
 * Horse.java
 * <p>
 * File berisi class Horse
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package animal;

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * <p>
 * Class for rendering object to Horse
 * </p>
 */
public class Horse implements IProducing
{
	private static int n_horse;
	private int id;
	private String voice;
	private boolean hunger, starvation, interactivity, produceMeat;
	private int x, y, tick;

	/**
	 * Horse constructor
	 * @param y
	 * @param x
	 */
	public Horse(int y, int x){
		this.id = ++n_horse;
		this.voice = "Whiii";
		this.hunger = false;
		this.y = y;
		this.x = x;
		this.tick = 0;
		this.starvation = false;
		this.interactivity = true;
		this.produceMeat = false;
	}

	/**
	 * Get the object id
	 * @return int
	 */
	public int getId(){
		return id;
	}

	/**
	 * Get the object hunger status
	 * @return boolean
	 */
	public boolean getHunger(){
		return hunger;
	}

	/**
	 * Get the object interactivity
	 * @return boolean
	 */
	public boolean getInteractivity(){
		return interactivity;
	}

	/**
	 * Get the object starve status
	 * @return boolean
	 */
	public boolean getStarvation(){
		return starvation;
	}

	/**
	 * Get the object kill status
	 * @return boolean
	 */
	public boolean isMeatProducing(){
		return produceMeat;
	}

	/**
	 * Get the object x position
	 * @return int
	 */
	public int getX(){
		return this.x;
	}

	/**
	 * Get the object y position
	 * @return int
	 */
	public int getY(){
		return this.y;
	}

	/**
	 * Eat function
	 */
	public void eat(){
		hunger = false;
		interactivity = true;
		tick = 0;
	}

	/**
	 * Move function
	 * @param map
	 */
	public void move(Character[][] map){
		int row = map.length;
		int col = map[0].length;
	    char next = '.';

	    Random random = new Random();
	    int turn = random.nextInt(5);

	    if (turn == 1)
	    {
	        if(this.y + 1 < row)
	            next = map[this.y+1][this.x];
	        if (next == '-' || next == '#')
	        {
	            this.y++;
	        }
	    }
	    else if (turn == 2)
	    {
	        if(this.x + 1 < col)
	            next = map[this.y][this.x+1];
	        if (next == '-' || next == '#')
	        {
	            this.x++;
	        }
	    }
	    else if (turn == 3)
	    {
	        if(this.y - 1 >= 0)
	            next = map[this.y-1][this.x];
	        if (next == '-' || next == '#')
	        {
	            this.y--;
	        }
	    }
	    else if (turn == 4)
	    {
	        if(this.x - 1 >= 0)
	            next = map[this.y][this.x-1];
	        if (next == '-' || next == '#')
	        {
	            this.x--;
	        }
	    }

	    boolean validTile = map[this.y][this.x] != '-' && map[this.y][this.x] != '#';
	    validTile = validTile && map[this.y][this.x] != 'x' && map[this.y][this.x] != '@';

	    if(validTile)
	    	move(map);

	    if(tick == 5)
	        hunger = true;
	    else if(tick >= 25 && hunger)
	        starvation = true;

	    tick++;
	}

	/**
	 * Get the object sound
	 * @return String
	 */
	public String sound(){
		return new String("Horse " + getId() + ": " + voice);
	}

	/**
	 * Get the object symbol
	 * @return char
	 */
	public char render(){
		return (hunger)? 'h' : 'H';
	}

	/**
	 * Interact function
	 */
	public void interact(){
		interactivity = false;
	}

	/**
	 * Kill function
	 * @return String
	 */
	public String kill(){
		return "Horse is killed, you don't get anything";
	}
}
