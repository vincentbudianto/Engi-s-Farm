/**
 * @file GoatMeat.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class GoatMeat
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : GoatMeat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header GoatMeat.cpp */

#ifndef GOATMEAT_HPP
#define GOATMEAT_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class GoatMeat : public Product
{
	public:
		/**
		 * @brief Construct a new Goat Meat object
		 * 
		 */
		GoatMeat();
		
		/**
		 * @brief Destroy the Goat Meat object
		 * 
		 */
		~GoatMeat();
	
	private:
		/**
		 * @brief Counter for GoatMeat in player's inventory
		 * 
		 */
		static int n_goatmeat;
};

#endif
