/**
 * @file GoatMilk.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class GoatMilk
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : GoatMilk.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header GoatMilk.cpp */

#ifndef GOATMILK_HPP
#define GOATMILK_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmProduct
 * 
 */
class GoatMilk : public FarmProduct
{
	public:
		/**
		 * @brief Construct a new Goat Milk object
		 * 
		 */
		GoatMilk();
		
		/**
		 * @brief Destroy the Goat Milk object
		 * 
		 */
		~GoatMilk();
	
	private:
		/**
		 * @brief Counter for GoatMilk in player's inventory
		 * 
		 */
		static int n_goatmilk;
};

#endif
