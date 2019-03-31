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

#include "Renderable.hpp"
#include "Cell.hpp"
#include "Facility/Mixer.hpp"
#include "SideProduct/SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Class for player
 * 
 */
class Player: public Renderable
{
	public:
		/**
		 * @brief Construct a new Player object
		 * 
		 */
		Player(string);
		
		/**
		 * @brief Destroy the Player object
		 * 
		 */
		~Player();
		
		/**
		 * @brief Get the Name object
		 * 
		 * @return string 
		 */
		string getName();

		/**
		 * @brief Get the Inventory object from index i
		 * 
		 * @param i 
		 * @return string 
		 */
		string getInventory(int i);

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
		 * @brief Method for the player to move
		 * 
		 */
		void move();
		
		/**
		 * @brief Method for the player to talk to FarmAnimal
		 * 
		 */
		void talk();

		/**
		 * @brief Method for the player to kill FarmAnimal
		 * 
		 */
		void kill();

		/**
		 * @brief Method for the player to interact with FarmAnimal
		 * 
		 */
		void interact();

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
		void Player::setWater();

		/**
		 * @brief Method to deal with truck
		 * 
		 */
		void Player::dealTruck(int valid);

		/**
		 * @brief Method to create SideProduct
		 * 
		 * @return SideProduct 
		 */
		SideProduct Player::mixStuffs(FarmProduct*);
	
	private:
		string name;
		string* inventory;
		int money, water, x, y;
};

#endif
