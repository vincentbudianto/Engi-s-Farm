/**
 * @file ChickenEgg.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class ChickenEgg
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : ChickenEgg.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenEgg.cpp */

#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class ChickenEgg : public Product
{
	public:
		/**
		 * @brief Construct a new Chicken Egg object
		 * 
		 */
		ChickenEgg();
		
		/**
		 * @brief Destroy the Chicken Egg object
		 * 
		 */
		~ChickenEgg();
	
	private:
		/**
		 * @brief Counter for ChickenEgg in player's inventory
		 * 
		 */
		static int n_chickenegg;
};

#endif
