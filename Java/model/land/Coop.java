/**
 * Coop.java
 * <p>
 * File berisi class Coop
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
 * Class for rendering object to Coop
 * </p>
 */
public class Coop implements resource.Cell
{
	private boolean grassStatus;

	/**
	 * Coop constructor
	 */
	public Coop(){
		Random random = new Random();
		int n = random.nextInt(3);
		grassStatus = (n == 0);
	}
	
	/**
	 * Get the object grassStatus
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
	 * Render coop to map
	 * @return Character
	 */
	public Character render(){
		if(!isGrass())
			return 'o';
		else
			return'*';
	}
}
