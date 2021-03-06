/**
 * @file Player.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Player
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Player.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Player.cpp */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Cell.hpp"
#include "Product.hpp"
#include "Facility/Truck.hpp"
#include "Facility/Mixer.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Class for player
 * 
 */
class Player: public Cell
{
	public:
		/**
		 * @brief Construct a new Player object
		 * 
		 */
		Player(char *);
		
		/**
		 * @brief Destroy the Player object
		 * 
		 */
		~Player();
		
		/**
		 * @brief Get the Name object
		 * 
		 * @return char* 
		 */
		char* getName();

		/**
		 * @brief Get the Inventory object from index i
		 * 
		 * @param i 
		 * @return Product 
		 */
		Product* getInventory(int i);

		/**
		 * @brief Get the Inventory's effective length
		 * 
		 * @return int 
		 */
		int getInventoryEff();

		/**
		 * @brief Get the Money object
		 * 
		 * @return int 
		 */
		int getMoney();

		/**
		 * @brief Get the Water object
		 * 
		 * @return int 
		 */
		int getWater();

		/**
		 * @brief Get the X object
		 * 
		 * @return int 
		 */
		int getX();

		/**
		 * @brief Get the Y object
		 * 
		 * @return int 
		 */
		int getY();
		
		/**
		 * @brief Get the X object
		 * 
		 * @return int 
		 */
		int getSurroundingX();

		/**
		 * @brief Get the Y object
		 * 
		 * @return int 
		 */
		int getSurroundingY();

		/**
		 * @brief Method for the player to move
		 * 
		 */
		void move(string,char**,int,int);

		/**
		 * @brief Method for the player to check valid move
		 * 
		 * @return int
		 */
		int stepable(char);

		/**
		 * @brief Method for the player to check the Animals
		 * 
		 */
		int isAnimal(char animal);

		/**
		 * @brief Method for the player to check the Facility
		 * 
		 */
		int isFacility(char facility);

		/**
		 * @brief Method for the player to see to Surrounding Animals
		 * 
		 */
		char seeAnimal(char** map, int row, int col);

		/**
		 * @brief Method for the player to see to Surrounding Facility
		 * 
		 */
		char seeFacility(char** map, int row, int col);
		
		/**
		 * @brief Method for the player to talk to FarmAnimal
		 * 
		 */
		char talk(char** map, int row, int col);

		/**
		 * @brief Method for the player to kill FarmAnimal
		 * 
		 */
		void kill(char);

		/**
		 * @brief Method for the player to interact with FarmAnimal
		 * 
		 */
		void interact(char);

		/**
		 * @brief Method for the player to grow grass
		 * 
		 */
		void grow();

		/**
		 * @brief Method for the player to interact with mixer
		 * 
		 */
		void mix();

		/**
		 * @brief Method to render the player to map
		 * 
		 * @return char 
		 */
		char render();

		/**
		 * @brief Method to fill water
		 * 
		 */
		void setWater();

		/**
		 * @brief Method to deal with truck
		 * 
		 */
		void dealTruck(Truck* cellTruck);
		
		/**
		 * @brief Method to jump
		 * 
		 */
		void jump(int,int);

	private:
		char* name;
		Product** inventory;
		int inventoryEff;
		int money, water, x, y;
		int surroundingY;
		int surroundingX;
};

#endif
