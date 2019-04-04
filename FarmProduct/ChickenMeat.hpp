/**
 * @file ChickenMeat.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class ChickenMeat
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : ChickenMeat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenMeat.cpp */

#ifndef CHICKENMEAT_HPP
#define CHICKENMEAT_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class ChickenMeat : public Product
{
	public:
		/**
		 * @brief Construct a new Chicken Meat object
		 * 
		 */
		ChickenMeat();
		
		/**
		 * @brief Destroy the Chicken Meat object
		 * 
		 */
		~ChickenMeat();
	
	private:
		/**
		 * @brief Counter for ChickenMeat in player's inventory
		 * 
		 */
		static int n_chickenmeat;
};

#endif
