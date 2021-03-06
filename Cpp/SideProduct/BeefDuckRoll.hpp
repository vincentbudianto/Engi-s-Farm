/**
 * @file BeefDuckRoll.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class BeefDuckRoll
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : BeefDuckRoll.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header BeefDuckRoll.cpp */

#ifndef BEEFDUCKROLL_HPP
#define BEEFDUCKROLL_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class BeefDuckRoll : public Product
{
	public:
		/**
		 * @brief Construct a new Beef Duck Roll object
		 * 
		 */
		BeefDuckRoll();
		
		/**
		 * @brief Destroy the Beef Duck Roll object
		 * 
		 */
		~BeefDuckRoll();
	
	private:
		/**
		 * @brief Counter for BeefDuckRoll in player's inventory
		 * 
		 */
		static int n_beefduckroll;
};

#endif
