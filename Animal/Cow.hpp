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
class Cow: public IProducing, public KProducing, public Renderable
{
	public:
		/**
		 * @brief Construct a new Cow object
		 * 
		 */
		Cow(string);
		
		/**
		 * @brief Destroy the Cow object
		 * 
		 */
		~Cow();
		
		/**
		 * @brief Function to get CowMilk
		 * 
		 * @return string 
		 */
		string interactProduct();

		/**
		 * @brief Function to get Beef
		 * 
		 * @return string 
		 */
		string killProduct();

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
		 * @brief Counter for Cow
		 * 
		 */
		static int n_cow;
};

#endif
