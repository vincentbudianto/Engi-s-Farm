/**
 * Well.java
 * <p>
 * File berisi interface Well
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package facility;

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * <p>
 * Class for rendering object to Well
 * </p>
 */
public class Well extends Facility
{
	/**
	 * Well constructor
	 * @param y
	 * @param x
	 */
	public Well(int y, int x){
		setY(y);
		setX(x);
	}

	/**
	 * Render Well to map
	 * @return Character
	 */
	public Character render(){
		return 'W';
	}
}
