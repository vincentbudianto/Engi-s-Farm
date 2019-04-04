/**
 * @file Duck.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Duck
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Duck.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Duck.cpp */

#ifndef DUCK_HPP
#define DUCK_HPP

#include "../Renderable.hpp"
#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmAnimal
 * 
 */
class Duck: public IProducing, public KProducing, public Renderable
{
	public:
		/**
		 * @brief Construct a new Duck object
		 * 
		 */
		Duck(string);
		
		/**
		 * @brief Destroy the Duck object
		 * 
		 */
		~Duck();

		/**
		 * @brief Get the Name object
		 * 
		 * @return string 
		 */
		virtual string getName() const;

		/**
		 * @brief Get the Hungry object
		 * 
		 * @return boolean 
		 */
		virtual bool getHungry() const;

		/**
		 * @brief Set the Name object
		 * 
		 */
		virtual void setName(string);

		/**
		 * @brief Get the X object
		 * 
		 * @return int 
		 */
		virtual int getX();

		/**
		 * @brief Get the Y object
		 * 
		 * @return int 
		 */
		virtual int getY();

		/**
		 * @brief Function to get DuckEgg
		 * 
		 */
		void interactProduct();

		/**
		 * @brief Function to get DuckMeat
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
		void move();

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
		 * @brief Counter for Duck
		 * 
		 */
		static int n_duck;
		string name, voice;
		bool hungry;
		int umur, x, y;
};

#endif
