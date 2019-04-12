/**
 * @file Player.java
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Player
 * @version 1.0
 * @date 2019-04-21
 */

import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.concurrent.LinkedBlockingQueue;

import javax.lang.model.util.ElementScanner6;

import Facility.*;		//package belum dibuat
import FarmProduct.*;	//package belum dibuat
import SideProduct.*;	//package belum dibuat

/**
 * @brief Class for productComparator
 * 
 */
class productComparator implements Comparator<Product>
{
	/**
	 * @brief compare() method overriding
	 * 
	 * @return int
	 */
	public int compare(Product a, Product b)
	{
		if (a.prio < b.prio)
		{
			return 1;
		}
		else if (a.prio > b.prio)
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}

/**
 * @brief Class for player
 * 
 */
public class Player extends Product implements Renderable 
{
	private String name;
	private PriorityQueue<Product> inventory;
	private int bagSize, money, surroundingY, surroundingX, water, x, y;
	
	/**
	 * @brief Construct a new Player object
	 * 
	 */
	public Player(String name)
	{
		this.name = name;
		this.bagSize = 10;
		this.money = 500;
		this.water = 10;
		this.x = 3;
		this.y = 1;
		this.inventory = new PriorityQueue<Product>(10, new productComparator());
		this.surroundingY = 0;
		this.surroundingX = 0;
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
	 * @brief Get the Product from Inventory
	 * 
	 * @return Product 
	 */
	public Product getInventory()
	{
		if (this.inventory.size() != 0)
		{
			return this.inventory.poll();
		}
	}

	/**
	 * @brief Get the Money object
	 * 
	 * @return int 
	 */
	public int getMoney()
	{
		return this.money;
	}

	/**
	 * @brief Get the Water object
	 * 
	 * @return int 
	 */
	public int getWater()
	{
		return this.water;
	}

	/**
	 * @brief Get the X object
	 * 
	 * @return int 
	 */
	public int getX()
	{
		return this.x;
	}

	/**
	 * @brief Get the Y object
	 * 
	 * @return int 
	 */
	public int getY()
	{
		return this.y;
	}
	
	/**
	 * @brief Get the X object
	 * 
	 * @return int 
	 */
	public int getSurroundingX()
	{
		return this.surroundingX;
	}

	/**
	 * @brief Get the Y object
	 * 
	 * @return int 
	 */
	public int getSurroundingY()
	{
		return this.surroundingY;
	}

	/**
	 * @brief Method for the player to move
	 * 
	 */
	public void move(String direction, char[][] map, int row, int col)
	{
		if (direction.compare("down") == 0)
		{
			if (this.y + 1 < row)
			{
				if(stepable(map[this.y+1][this.x]))
				{
					this.y++;
				}
			}
		}
		else if (direction.compare("right") == 0)
		{
			if(this.x + 1 < col)
			{
				if(stepable(map[this.y][this.x+1]))
				{
					this.x++;
				}
			}
		}
		else if (direction.compare("up") == 0)
		{
			if (this.y - 1 >= 0)
			{
				if(stepable(map[this.y-1][this.x]))
				{
					this.y--;
				}
			}
		}
		else if (direction.compare("left") == 0)
		{
			if(this.x - 1 >= 0)
			{
				if(stepable(map[this.y][this.x-1]))
				{
					this.x--;
				}
			}
		}
	}

	/**
	 * @brief Method for the player to check valid move
	 * 
	 * @return boolean
	 */
	public boolean stepable(char next)
	{
		return ((next == 'o') || (next == '*') || (next == 'x') || (next == '@') || (next == '-') || (next == '#'));
	}

	/**
	 * @brief Method for the player to check the Animals
	 * 
	 * @return boolean
	 */
	public boolean isAnimal(char animal)
	{
		return ((animal == 'c') || (animal == 'C') || (animal == 'd') || (animal == 'D') || (animal == 'q') || (animal == 'Q') || (animal == 'g') || (animal == 'G') || (animal == 'h') || (animal == 'H') || (animal == 's') || (animal == 'S'));
	}

	/**
	 * @brief Method for the player to check the Facility
	 * 
	 * @return boolean
	 */
	public boolean isFacility(char facility)
	{
		return ((facility == 'M') || (facility == 'T') || (facility == 'W'));
	}

	/**
	 * @brief Method for the player to see to Surrounding Animals
	 * 
	 */
	public char seeAnimal(char[][] map, int row, int col)
	{
		char temp, animal;
		
		temp = '.';
		animal = temp;

		if (x + 1 < col)
		{
			temp = map[getY()][getX()+1];

			if (isAnimal(temp))
			{
				animal = temp;
				this.surroundingY = getY();
				this.surroundingX = getX() + 1;
			}
		}

		if (x - 1 >= 0)
		{
			temp = map[getY()][getX()-1];
			
			if (isAnimal(temp))
			{
				animal = temp;
				this.surroundingY = getY();
				this.surroundingX = getX() - 1;
			}
		}

		if (y + 1 < row)
		{
			temp = map[getY()+1][getX()];
			
			if (isAnimal(temp))
			{
				animal = temp;
				this.surroundingY = getY() + 1;
				this.surroundingX = getX();
			}
		}

		if (y - 1 >= 0)
		{
			temp = map[getY()-1][getX()];

			if (isAnimal(temp))
			{
				animal = temp;
				this.surroundingY = getY() - 1;
				this.surroundingX = getX();
			}
		}

		return animal;
	}

	/**
	 * @brief Method for the player to see to Surrounding Facility
	 * 
	 */
	public char seeFacility(char[][] map, int row, int col)
	{
		char temp, facility;

		temp = '.';
		facility = temp;

		if (x + 1 < col)
		{
			temp = map[getY()][getX()+1];
			
			if (isFacility(temp))
			{
				facility = temp;
			}
		}

		if (x - 1 >= 0)
		{
			temp = map[getY()][getX()-1];
			
			if (isFacility(temp))
			{
				facility = temp;
			}
		}

		if (y + 1 < row){
			temp = map[getY()+1][getX()];

			if (isFacility(temp))
			{
				facility = temp;
			}
		}

		if (y - 1 >= 0)
		{
			temp = map[getY()-1][getX()];
			
			if (isFacility(temp))
			{
				facility = temp;
			}
		}

		return facility;
	}
	
	/**
	 * @brief Method for the player to talk to FarmAnimal
	 * 
	 */
	public char talk(char[][] map, int row, int col)
	{
		return seeAnimal(map, row, col);
	}

	/**
	 * @brief Method for the player to kill FarmAnimal
	 * 
	 */
	public void kill(char animal)
	{
		if (this.inventory.size() < 10)
		{
			if ((animal == 'c') || (animal == 'C'))
			{
				this.inventory.add(new ChickenMeat());
				System.out.println("Get Chicken Meat");
			}
			else if ((animal == 'd') || (animal == 'D'))
			{
				this.inventory.add(new DuckMeat());
				System.out.println("Get Duck Meat");
			}
			else if ((animal == 'q') || (animal == 'Q'))
			{
				this.inventory.add(new Beef());
				System.out.println("Get Beef");
			}
			else if ((animal == 'g') || (animal == 'G'))
			{
				this.inventory.add(new GoatMeat());
				System.out.println("Get Goat Meat");
			}
			else if ((animal == 'h') || (animal == 'H'))
			{
				System.out.println("Horse is Killed, you don't get anything");
			}
			else if ((animal == 's') || (animal == 'S'))
			{
				this.inventory.add(new Mutton());
				System.out.println("Get Mutton");
			}
		}
		else
		{
			System.out.println("Tas Penuh");
		}
	}

	/**
	 * @brief Method for the player to interact with FarmAnimal
	 * 
	 */
	public void interact(char animal)
	{
		if (this.inventory.size() < 10)
		{
			if ((animal == 'c') || (animal == 'C'))
			{
				this.inventory.add(new ChickenEgg());
				System.out.println("Get Chicken Egg");
			}
			else if ((animal == 'd') || (animal == 'D'))
			{
				this.inventory.add(new DuckEgg());
				System.out.println("Get Duck Egg");
			}
			else if ((animal == 'q') || (animal == 'Q'))
			{
				this.inventory.add(new CowMilk());
				System.out.println("Get Cow Milk");
			}
			else if ((animal == 'g') || (animal == 'G'))
			{
				this.inventory.add(new GoatMilk());
				System.out.println("Get Goat Milk");
			}
			else if ((animal == 'h') || (animal == 'H'))
			{
				this.inventory.add(new HorseMilk());
				System.out.println("Get Horse Milk");
			}
			else if ((animal == 's') || (animal == 'S'))
			{
				System.out.println("Interacting with sheep, you don't get anything");
			}
		}
		else
		{
			System.out.println("Tas Penuh");
		}
	}

	/**
	 * @brief Method for the player to grow grass
	 * 
	 */
	public void grow()
	{
		if (this.water >= 5)
		{
			this.water -= 5;
		}
	    else
        {
			System.out.println("Not enough water");
		}
	}

	/**
	 * @brief Method for the player to interact with mixer
	 * 
	 */
	public void mix()
	{
		if ((this.inventory.size() >= 2) && (this.inventory.size() < 10))
		{
			Boolean recipe[], success;
			String ing1, ing2;

			System.out.println("Mixing..");
			recipe = new Boolean(10);
			success = false;
			ing1 = this.inventory.poll().getName();
			ing2 = this.inventory.poll().getName();
			
			recipe[0] = (ing1.equals("Beef") && ing2.equals("Chicken Egg")) || (ing1.equals("Chicken Egg") && ing2.equals("Beef"));
			recipe[1] = (ing1.equals("Beef") && ing2.equals("Chicken Meat")) || (ing1.equals("Chicken Meat") && ing2.equals("Beef"));
			recipe[2] = (ing1.equals("Cow Milk") && ing2.equals("Chicken Egg")) || (ing1.equals("Chicken Egg") && ing2.equals("Cow Milk"));

			if(recipe[0])
			{
				this.inventory.add(new BeefChickenRoll());
				success = true;
			}
			else if (recipe[1])
			{
				this.inventory.add(new BandalSatay());
				success = true;
			}
			else if (recipe[2])
			{
				this.inventory.add(new AbbayeCheese());
				success = true;
			}

			if(success)
			{
				System.out.println("Mixing successful");
			}
			else
			{
				System.out.println("Mixing failed, two ingridients trashed");
			}
		}
		else
		{
			System.out.println("No ingridient to mix");
		}
	}

	/**
	 * @brief Method to render the player to map
	 * 
	 * @return char 
	 */
	public char render()
	{
		return ('P');
	}

	/**
	 * @brief Method to fill water
	 * 
	 */
	public void setWater()
	{
		if (this.water < 50)
		{
			System.out.println("Filling..");
			this.water += 10;
		}
		else
		{
			System.out.println("Kapasitas wadah air penuh!");
		}
	}

	/**
	 * @brief Method to deal with truck
	 * 
	 */
	public void dealTruck(Truck[] cellTruck)
	{
		int i, profit, valid;

		profit = 0;
		valid = cellTruck.transact();

		if (this.inventory.size() != 0)
		{
			if (valid)
			{
				System.out.println("Selling...");
				
				while (!this.inventory.isEmpty())
				{
					profit += this.inventory.poll().getPrice();
				}

				System.out.println("Get " + profit + " of money");
				this.money += profit;
			}
			else
			{
				System.out.println("Truck isn't back from factory yet");
			}
		}
		else
		{
			System.out.println("No item to sell");
		}
	}
	
	/**
	 * @brief Method to jump
	 * 
	 */
	public void jump(int x,int y)
	{
		this.x = x;
		this.y = y;
	}
}
