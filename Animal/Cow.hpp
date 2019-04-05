/**
 * @file Cow.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Cow
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Cow.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Cow.cpp */

#ifndef COW_HPP
#define COW_HPP

#include "../Renderable.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmAnimal
 * 
 */
class Cow: public IProducing, public KProducing, public Renderable
{
	public:
		/**
		 * @brief Construct a new Cow object
		 * 
		 */
		Cow(int,int,int);
		
		/**
		 * @brief Destroy the Cow object
		 * 
		 */
		~Cow();

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
		 * @brief Function to get Beef
		 * 
		 * @return char* 
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
		void move(char**,int,int);

		/**
		 * @brief Method to get starvation status
		 * 
		 */
		bool getStarvation();
		
		/**
		 * @brief Method for the animal to voice
		 * 
		 */
		void sound();

		/**
		 * @brief Method to render the animal to map
		 * 
		 * @return char 
		 */
		char render();

    private:
		/**
		 * @brief Counter for Cow
		 * 
		 */
		static int n_cow;
		int id;
		char* voice;
		bool hungry, starving, intractivity;
		int umur, x, y, tick;
};

#endif
