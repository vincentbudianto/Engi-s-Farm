/**
 * @file Horse.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Horse
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Horse.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Horse.cpp */

#ifndef HORSE_HPP
#define HORSE_HPP

#include "../Renderable.hpp"
#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmAnimal
 * 
 */
class Horse: public IProducing, public Renderable
{
	public:
		/**
		 * @brief Construct a new Horse object
		 * 
		 */
		Horse(string);
		
		/**
		 * @brief Destroy the Horse object
		 * 
		 */
		~Horse();
		
		/**
		 * @brief function to get HorseMilk
		 * 
		 * @return string 
		 */
		string interactProduct();

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
		 * @brief Counter for Horse
		 * 
		 */
		static int n_horse;
};

#endif
