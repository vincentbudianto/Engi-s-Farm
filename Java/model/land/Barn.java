/**
 * Barn.java
 * <p>
 * File berisi class Barn
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package land;

import resource.*;
import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * <p>
 * Class for rendering object to Barn
 * </p>
 */
public class Barn implements resource.Cell
{
	private boolean grassStatus;

	/**
	 * Barn constructor
	 */
	public Barn(){
		Random random = new Random();
		int n = random.nextInt(4);
		grassStatus = (n == 0);
	}
	
	/**
	 * Get the Grass Status object
	 * @return boolean
	 */
	public boolean isGrass(){
		return grassStatus;
	}

	/**
	 * Set the object grassStatus
	 * @param grassStatus
	 */
	public void setGrassStatus(boolean grassStatus){
		this.grassStatus = grassStatus;
	}

	/**
	 * Render barn to map
	 * @return Character
	 */
	public Character render(){
		if(!isGrass())
			return 'x';
		else
			return'@';
	}
}
