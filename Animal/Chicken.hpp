/**
 * @file Chicken.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Chicken
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Chicken.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Chicken.cpp */

#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmAnimal
 * 
 */
class Chicken: public IProducing, public KProducing
{
	public:
		/**
		 * @brief Construct a new Chicken object
		 * 
		 */
		Chicken(int,int,int);
		
		/**
		 * @brief Destroy the Chicken object
		 * 
		 */
		~Chicken();

		/**
		 * @brief Get the Name object
		 * 
		 * @return char* 
		 */
		int getId() const;

		/**
		 * @brief Get the Hungry object
		 * 
		 * @return boolean 
		 */
		bool getHungry() const;

		/**
		 * @brief Set the Name object
		 * 
		 */
		void setId(int);

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
		 * @brief Function to get intractivity
		 * 
		 */
		bool getInteractivity();

		/**
		 * @brief Function to set intractivity
		 * 
		 */
		void setInteractivity(bool);

		/**
		 * @brief Function to get ChickenMeat
		 * 
		 */
		void killProduct();

		/**
		 * @brief Method for the animal to eat
		 * 
		 */
		void eat();

		/**
		 * @brief Method for the animal to move
		 * 
		 */
		void move(char** map, int row, int col);

		/**
		 * @brief Method for the animal to voice
		 * 
		 */
		void sound();

		/**
		 * @brief Method to get starvation status
		 * 
		 */
		bool getStarvation();

		/**
		 * @brief Method to render the animal to map
		 * 
		 * @return char 
		 */
		char render();

	private:
		/**
		 * @brief Counter for Chicken
		 * 
		 */
		static int n_chicken;
		int id;
		char* voice;
		bool hungry, starving, intractivity;
		int umur, x, y, tick;
};

#endif
