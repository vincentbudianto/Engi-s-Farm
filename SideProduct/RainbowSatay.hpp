/**
 * @file RainbowSatay.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class RainbowSatay
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : RainbowSatay.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header RainbowSatay.cpp */

#ifndef RAINBOWSATAY_HPP
#define RAINBOWSATAY_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class RainbowSatay : public Product
{
	public:
		/**
		 * @brief Construct a new Rainbow Satay object
		 * 
		 */
		RainbowSatay();
		
		/**
		 * @brief Destroy the Rainbow Satay object
		 * 
		 */
		~RainbowSatay();
	
	private:
		/**
		 * @brief Counter for RainbowSatay in player's inventory
		 * 
		 */
		static int n_rainbowsatay;
};

#endif
