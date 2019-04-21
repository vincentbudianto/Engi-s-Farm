/**
 * Player.java
 * <p>
 * File berisi definisi class Player
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package resource;

import farmproduct.*;
import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.concurrent.LinkedBlockingQueue;

import javax.lang.model.util.ElementScanner6;

/**
 * <p>
 * Class for productComparator
 * </p>
 */
class productComparator implements Comparator<Product>
{
	/**
	 * compare() method overriding
	 * @param a
	 * @param b
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
 * <p>
 * Class for player
 * </p>
 */
public class Player extends Product implements Renderable 
{
	private String name;
	private Queue<Product> inventory;
	private int bagSize, money, surroundingY, surroundingX, water, x, y;
	
	/**
	 * Player constructor
	 */
	public Player(String name)
	{
		this.name = name;
		this.bagSize = 10;
		this.money = 500;
		this.water = 10;
		this.y = 1;
		this.x = 3;
		this.inventory = new LinkedList<>();
		this.surroundingY = 0;
		this.surroundingX = 0;
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
	 * Get the Product from Inventory
	 * @return Product 
	 */
	public Queue<Product> getInventory()
	{
		return this.inventory;
	}

	/**
	 * Get the object money
	 * @return int 
	 */
	public Integer getMoney()
	{
		return this.money;
	}

	/**
	 * Get the object water amount
	 * @return int 
	 */
	public Integer getWater()
	{
		return this.water;
	}

	/**
	 * Get the object x position
	 * @return int 
	 */
	public int getX()
	{
		return this.x;
	}

	/**
	 * Get the object y position
	 * @return int 
	 */
	public int getY()
	{
		return this.y;
	}

	/**
	 * Get the object surrounding x
	 * @return int 
	 */
	public int getSurroundingX()
	{
		return this.surroundingX;
	}

	/**
	 * Get the object surrounding y
	 * @return int 
	 */
	public int getSurroundingY()
	{
		return this.surroundingY;
	}

	/**
	 * Method for the player to move
	 * @param direction
	 * @param map
	 */
	public void move(String direction, Character[][] map)
	{
		int row = map.length;
		int col = map[0].length;
		
		if (direction.equals("down"))
		{
			if (this.y + 1 < row)
			{
				if(stepable(map[this.y+1][this.x]))
				{
					this.y++;
				}
			}
		}
		else if (direction.equals("right"))
		{
			if(this.x + 1 < col)
			{
				if(stepable(map[this.y][this.x+1]))
				{
					this.x++;
				}
			}
		}
		else if (direction.equals("up"))
		{
			if (this.y - 1 >= 0)
			{
				if(stepable(map[this.y-1][this.x]))
				{
					this.y--;
				}
			}
		}
		else if (direction.equals("left"))
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
	 * Method for the player to check valid move
	 * @param next
	 * @return boolean
	 */
	public boolean stepable(char next)
	{
		return ((next == 'o') || (next == '*') || (next == 'x') || (next == '@') || (next == '-') || (next == '#'));
	}

	/**
	 * Method for the player to check the Animals
	 * @param animal
	 * @return boolean
	 */
	public boolean isAnimal(char animal)
	{
		return ((animal == 'c') || (animal == 'C') || (animal == 'd') || (animal == 'D') || (animal == 'q') || (animal == 'Q') || (animal == 'g') || (animal == 'G') || (animal == 'h') || (animal == 'H') || (animal == 's') || (animal == 'S'));
	}

	/**
	 * Method for the player to check the Facility
	 * @param facility
	 * @return boolean
	 */
	public boolean isFacility(char facility)
	{
		return ((facility == 'M') || (facility == 'T') || (facility == 'W'));
	}

	/**
	 * Method for the player to see Surrounding Animals
	 * @param map
	 */
	public void seeAnimal(Character[][] map)
	{
		int row = map.length;
		int col = map[0].length;
		char temp, animal;
		
		temp = '.';
		animal = temp;

		this.surroundingY = getY();
		this.surroundingX = getX();

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
	}

	/**
	 * Method for the player to see to Surrounding Facility
	 * @param map
	 * @return char
	 */
	public char seeFacility(Character[][] map)
	{
		int row = map.length;
		int col = map[0].length;
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
	 * Method for the player to talk to FarmAnimal
	 * @param map
	 */
	public void talk(Character[][] map)
	{
		seeAnimal(map);
	}

	/**
	 * Method for the player to kill FarmAnimal
	 * @param animal
	 * @return String
	 */
	public String kill(Character animal)
	{
		String message = "No Message";

		if (this.inventory.size() < 10)
		{
			if ((animal == 'c') || (animal == 'C'))
			{
				this.inventory.add(new farmproduct.ChickenMeat());
				message = "Get Chicken Meat";
			}
			else if ((animal == 'd') || (animal == 'D'))
			{
				this.inventory.add(new farmproduct.DuckMeat());
				message = "Get Duck Meat";
			}
			else if ((animal == 'q') || (animal == 'Q'))
			{
				this.inventory.add(new farmproduct.Beef());
				message = "Get Beef";
			}
			else if ((animal == 'g') || (animal == 'G'))
			{
				this.inventory.add(new farmproduct.GoatMeat());
				message = "Get Goat Meat";
			}
			else if ((animal == 'h') || (animal == 'H'))
			{
				message = "Horse is Killed, you don't get anything";
			}
			else if ((animal == 's') || (animal == 'S'))
			{
				this.inventory.add(new farmproduct.Mutton());
				message = "Get Mutton";
			}
		}
		else
		{
			message = "Inventory is full";
		}

		System.out.println(message);

		return message;
	}

	/**
	 * Method for the player to interact with FarmAnimal
	 * @param animal
	 * @param interactivity
	 * @return String
	 */
	public String interact(Character animal, boolean interactivity)
	{
		String message = "No Message";

		if (this.inventory.size() < 10 && interactivity)
		{
			if ((animal == 'c') || (animal == 'C'))
			{
				this.inventory.add(new farmproduct.ChickenEgg());
				message = "Get Chicken Egg";
			}
			else if ((animal == 'd') || (animal == 'D'))
			{
				this.inventory.add(new farmproduct.DuckEgg());
				message = "Get Duck Egg";
			}
			else if ((animal == 'q') || (animal == 'Q'))
			{
				this.inventory.add(new farmproduct.CowMilk());
				message = "Get Cow Milk";
			}
			else if ((animal == 'g') || (animal == 'G'))
			{
				this.inventory.add(new farmproduct.GoatMilk());
				message = "Get Goat Milk";
			}
			else if ((animal == 'h') || (animal == 'H'))
			{
				this.inventory.add(new farmproduct.HorseMilk());
				message = "Get Horse Milk";
			}
			else if ((animal == 's') || (animal == 'S'))
			{
				message = "Interacting with sheep, you don't get anything";
			}
		}
		else if(interactivity == false)
		{
			message = "Can't interact with animal";
		}
		else
		{
			message = "Inventory is full";
		}

		return message;
	}

	/**
	 * Method for the player to grow grass
	 * @return boolean
	 */
	public boolean grow()
	{
		boolean result = false;
		
		if (this.water >= 5)
		{
			this.water -= 5;
			result = true;
		}
	    else
        {
			System.out.println("Not enough water");
		}

		return result;
	}
	
	/**
	 * Method for the player to mix item
	 * @return String
	 */
	public String mix()
	{
		String message = " ";

		if ((this.inventory.size() >= 2) && (this.inventory.size() < 10))
		{
			Boolean recipe[], success;
			String ing1, ing2;

			recipe = new Boolean[10];
			success = false;
			ing1 = this.inventory.poll().getName();
			ing2 = this.inventory.poll().getName();
			
			recipe[0] = (ing1.equals("Cow Milk") && ing2.equals("Goat Milk")) || (ing1.equals("Goat Milk") && ing2.equals("Cow Milk"));
			recipe[1] = (ing1.equals("Beef") && ing2.equals("Chicken Meat")) || (ing1.equals("Chicken Meat") && ing2.equals("Beef"));
			recipe[2] = (ing1.equals("Beef") && ing2.equals("Chicken Egg")) || (ing1.equals("Chicken Egg") && ing2.equals("Beef"));
			recipe[3] = (ing1.equals("Beef") && ing2.equals("Duck Egg")) || (ing1.equals("Duck Egg") && ing2.equals("Beef"));
			recipe[4] = ing1.equals("Goat Meat") && ing2.equals("Goat Meat");
			recipe[5] = (ing1.equals("Cow Milk") && ing2.equals("Horse Milk")) || (ing1.equals("Horse Milk") && ing2.equals("Cow Milk"));
			recipe[6] = ing1.equals("Mutton") && ing2.equals("Mutton");
			recipe[7] = (ing1.equals("Goat Meat") && ing2.equals("Mutton")) || (ing1.equals("Mutton") && ing2.equals("Goat Meat"));
			recipe[8] = (ing1.equals("Goat Milk") && ing2.equals("Horse Milk")) || (ing1.equals("Horse Milk") && ing2.equals("Goat Milk"));
			recipe[9] = (ing1.equals("Beef") && ing2.equals("Cow Milk")) || (ing1.equals("Cow Milk") && ing2.equals("Beef"));

			if(recipe[0])
			{
				this.inventory.add(new sideproduct.AbbayeCheese());
				message = "Abbaye Cheese";
				success = true;
			}
			else if (recipe[1])
			{
				this.inventory.add(new sideproduct.BandalSatay());
				message = "Get Bandal Satay";
				success = true;
			}
			else if (recipe[2])
			{
				this.inventory.add(new sideproduct.BeefChickenRoll());
				message = "Get Beef Chicken Roll";
				success = true;
			}
			else if (recipe[3])
			{
				this.inventory.add(new sideproduct.BeefDuckRoll());
				message = "Get Beef Duck Roll";
				success = true;
			}
			else if (recipe[4])
			{
				this.inventory.add(new sideproduct.GoatSatay());
				message = "Get Goat Satay";
				success = true;
			}
			else if (recipe[5])
			{
				this.inventory.add(new sideproduct.JuustolipaCheese());
				message = "Get Juustolipa Cheese";
				success = true;
			}
			else if (recipe[6])
			{
				this.inventory.add(new sideproduct.MuttonSatay());
				message = "Get Mutton Satay";
				success = true;
			}
			else if (recipe[7])
			{
				this.inventory.add(new sideproduct.RainbowSatay());
				message = "Get Rainbow Satay";
				success = true;
			}
			else if (recipe[8])
			{
				this.inventory.add(new sideproduct.SonnetCheese());
				message = "Get Sonnet Cheese";
				success = true;
			}
			else if (recipe[9])
			{
				this.inventory.add(new sideproduct.SweetMeatball());
				message = "Get Sweet Meatball";
				success = true;
			}

			if(success)
			{
				message = "Mixing successful";
			}
			else
			{
				this.inventory.add(new sideproduct.Failure());
				message = "Mixing failed, two ingridients trashed";
			}
		}
		else
		{
			message = "No ingridient to mix";
		}

		return message;
	}
	
	/**
	 * Method to render the player to map
	 * @return char 
	 */
	public char render()
	{
		return ('P');
	}

	/**
	 * Method to fill water
	 * @return String 
	 */
	public String fillWater()
	{	
		String message;

		if (this.water + 10 <= 50)
		{
			message = "Filling..";
			this.water += 10;
		}
		else
		{
			message = "Water bag at full capacity!";
		}

		return message;
	}

	/**
	 * Method to deal with truck
	 * @param valid
	 * @return String
	 */
	public String dealTruck(boolean valid)
	{
		int i, profit;
		profit = 0;

		String message = " ";

		if (this.inventory.size() != 0)
		{
			if (valid)
			{
				while (this.inventory.size() > 0)
				{
					profit += this.inventory.poll().getPrice();
				}

				this.money += profit;
				message = "Selling Success : Get " + profit + " of money";
			}
			else
			{
				message = "Truck isn't back from factory yet";
			}
		}
		else
		{
			message = "No item to sell";
		}

		return message;
	}

	/**
	 * Method to jump
	 * @param x
	 * @param y
	 */
	public void jump(int x,int y)
	{
		this.x = x;
		this.y = y;
	}
}
