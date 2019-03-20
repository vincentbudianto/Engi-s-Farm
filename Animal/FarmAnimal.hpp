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
class FarmAnimal
{
	public:
		/**
		 * @brief Destroy the Farm Animal object
		 * 
		 */
		virtual ~FarmAnimal();
		
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
		virtual boolean getHungry() const;

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
		 * @brief method for the animal to eat
		 * 
		 */
		virtual void eat() = 0;

		/**
		 * @brief method for the animal to move
		 * 
		 */
		virtual void move() = 0;

		/**
		 * @brief method for the animal to voice
		 * 
		 */
		virtual void sound() = 0;

		/**
		 * @brief method to render the animal to map
		 * 
		 * @return char 
		 */
		virtual char render() = 0;
	
	protected:
		string name;
		boolean hungry;
		int umur, x, y;
};

#endif
