/**
 * KProducing.java
 * <p>
 * File berisi interface KProducing
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
 * Interface for rendering object to KProducing
 * </p>
 */
interface KProducing extends FarmAnimal
{
	/**
	 * Kill function
	 * @return String
	 */
	String kill();
}
