/**
 * @file Sheep.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Sheep
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Sheep.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Sheep.cpp */

#ifndef SHEEP_HPP
#define SHEEP_HPP

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
class Sheep: public IProducing, public KProducing, public Renderable
{
	public:
/**
		 * @brief Construct a new Sheep object
		 * 
		 */
		Sheep(int,int,int);
		
		/**
		 * @brief Destroy the Sheep object
		 * 
		 */
		~Sheep();

		/**
		 * @brief Get the Hungry object
		 * 
		 * @return boolean 
		 */
		bool getHungry() const;

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
		 * @brief Function to get interactivity
		 * 
		 */
		bool getInteractivity();

		/**
		 * @brief Function to set interactivity
		 * 
		 */
		void setInteractivity(bool);

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
		static int n_sheep;
		int id;
		char* voice;
		bool hungry, starving, interactivity;
		int umur, x, y, tick;
};

#endif
