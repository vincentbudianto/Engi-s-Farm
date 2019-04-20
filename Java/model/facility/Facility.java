/**
 * Facility.java
 * <p>
 * File berisi interface Facility
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
 * Class for rendering object to Facility
 * </p>
 */
abstract class Facility
{
	private int x, y;
	
	/**
	 * Render Facility to map
	 * @return Character
	 */
	abstract Character render();

	/**
	 * Get the y position
	 * @return int
	 */
	public int getY(){
		return this.y;
	}

	/**
	 * Get the x position
	 * @return int
	 */
	public int getX(){
		return this.x;
	}

	/**
	 * Set the y position
	 * @param y
	 */
	public void setY(int y){
		this.y = y;
	}

	/**
	 * Set the x position
	 * @param x
	 */
	public void setX(int x){
		this.x = x;
	}
}
