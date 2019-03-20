/**
 * @file DuckEgg.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class DuckEgg
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : DuckEgg.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenEgg.cpp */

#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmProduct
 * 
 */
class DuckEgg : public FarmProduct
{
	public:
		/**
		 * @brief Construct a new Duck Egg object
		 * 
		 */
		DuckEgg();
		
		/**
		 * @brief Destroy the Duck Egg object
		 * 
		 */
		~DuckEgg();
	
	private:
		/**
		 * @brief Counter for DuckEgg in player's inventory
		 * 
		 */
		static int n_duckegg;
};

#endif
