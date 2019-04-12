/**
 * @file Cell.java
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi interface Cell
 * @version 1.0
 * @date 2019-04-21
 */

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * @brief Class for rendering object to cell
 * 
 */
interface Cell
{
	/**
	 * @brief 
	 * 
	 * @return char Method to render object character to map
	 */
	char render();
	
	/**
	 * @brief Set the Grass Status object
	 * 
	 */
	void setGrassStatus(int gs);

	/**
	 * @brief return the grass status
	 * 
	 * @return int
	 */
	int isGrass();
}