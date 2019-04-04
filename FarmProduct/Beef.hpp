/**
 * @file Beef.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Beef
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Beef.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Beef.cpp */

#ifndef BEEF_HPP
#define BEEF_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class Beef : public Product
{
	public:
		/**
		 * @brief Construct a new Beef object
		 * 
		 */
		Beef();
		
		/**
		 * @brief Destroy the Beef object
		 * 
		 */
		~Beef();
	
		/**
		 * @brief Counter for Beef in player's inventory
		 * 
		 */
		static int n_beef;
};

#endif
