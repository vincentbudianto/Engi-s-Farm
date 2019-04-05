/**
 * @file FarmAnimal.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class FarmAnimal
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : FarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FarmAnimal.cpp */

#ifndef FARMANIMAL_HPP
#define FARMANIMAL_HPP

#include "../Renderable.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief FarmAnimal parent class
 * 
 */
class FarmAnimal: public Renderable
{
	public:
		/**
		 * @brief Destroy the Farm Animal object
		 * 
		 */
		virtual ~FarmAnimal();

		/**
		 * @brief method for the animal to eat
		 * 
		 */
		virtual void eat();

		/**
		 * @brief method for the animal to move
		 * 
		 */
		virtual void move();

		/**
		 * @brief method for the animal to voice
		 * 
		 */
		virtual void sound();

		/**
		 * @brief method to render the animal to map
		 * 
		 * @return char 
		 */
		virtual char render();
};

#endif
