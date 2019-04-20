/**
 * Mixer.java
 * <p>
 * File berisi interface Mixer
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
 * Class for rendering object to Mixer
 * </p>
 */
public class Mixer extends Facility
{
	/**
	 * Mixer constructor
	 * @param y
	 * @param x
	 * @return Character
	 */
	public Mixer(int y, int x){
		setY(y);
		setX(x);
	}

	/**
	 * Render Well to map
	 * @return Character
	 */
	public Character render(){
		return 'M';
	}
}
