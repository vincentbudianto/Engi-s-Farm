/**
 * Product.java
 * <p>
 * File berisi definisi class Product
 * </p>
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
 * Product abstract class
 * </p>
 */
public abstract class Product
{
	protected String name;
	protected int price;
	public int prio;

	/**
	 * Product constructor
	 */
	public Product()
	{
		this.price = 0;
		this.name = "product stub";
		this.prio = 0;
	}

	/**
	 * Product constructor
	 * @param name
	 * @param price
	 */
	public Product(String name, int price)
	{
		this.price = price;
		this.name = name;
	}
	
	/**
	 * Get the object name
	 * @return String
	 */
	public String getName()
	{
		return this.name;
	}

	/**
	 * Get the object price
	 * @return int 
	 */
	public int getPrice()
	{
		return this.price;
	}

	/**
	 * Set the object name
	 * @param name
	 */
	public void setName(String name)
	{
		this.name = name;
	}
}
