/**
 * @file Product.java
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Product
 * @version 1.0
 * @date 2019-04-21
 */

import java.io.*;
import java.lang.*;
import java.util.*;

/**
 * @brief Product parent class
 * 
 */
public class Product
{
	protected String name;
	protected int price;
	public int prio;

	/**
	 * @brief Create the Farm Product object
	 * 
	 */
	public Product()
	{
		this.price = 0;
		this.name = "product stub";
		this.prio = 0;
	}

	/**
	 * @brief Create the Product object
	 * 
	 */
	public Product(String name, int price, int prio)
	{
		this.price = price;
		this.name = name;
		this.prio = prio;
	}
	
	/**
	 * @brief Get the Name object
	 * 
	 * @return String
	 */
	public String getName()
	{
		return this.name;
	}

	/**
	 * @brief Get the Price object
	 * 
	 * @return int 
	 */
	public int getPrice()
	{
		return this.price;
	}

	/**
	 * @brief Set the Name object
	 * 
	 */
	public void setName(String name)
	{
		this.name = name;
	}
}