/**
 * Cell.java
 * <p>
 * File berisi interface Cell
 * <\p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package resource;

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * <p>
 * Class for rendering object to cell
 * </p>
 */
public interface Cell extends Renderable
{
	/**
	 * Method to render object character to map
	 * @return char 
	 */
	Character render();
	
	/**
	 * Set the Grass Status object
	 */
	void setGrassStatus(boolean grassStatus);

	/**
	 * Get the grass status
	 * @return boolean
	 */
	boolean isGrass();
}
