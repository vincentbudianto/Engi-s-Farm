/**
 * FarmAnimal.java
 * <p>
 * File berisi interface FarmAnimal
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * <p>
 * Interface for rendering object to FarmAnimal
 * </p>
 */
interface FarmAnimal extends Renderable
{
	/**
	 * Get the object id
	 * @return int
	 */
	int getId();

	/**
	 * Get the object hunger status
	 * @return boolean
	 */
	boolean getHunger();

	/**
	 * Get the object interactivity
	 * @return boolean
	 */
	boolean getInteractivity();

	/**
	 * Get the object starve status
	 * @return boolean
	 */
	boolean getStarvation();

	/**
	 * Get the object kill status
	 * @return boolean
	 */
	boolean isMeatProducing();

	/**
	 * Get the object x position
	 * @return int
	 */
	int getX();

	/**
	 * Get the object y position
	 * @return int
	 */
	int getY();

	/**
	 * Eat function
	 */
	void eat();

	/**
	 * Move function
	 * @param map
	 */
	void move(Character[][] map);

	/**
	 * Get the object sound
	 * @return String
	 */
	String sound();

	/**
	 * Interact function
	 */
	void interact();

	/**
	 * Kill function
	 * @return String
	 */
	String kill();
}
