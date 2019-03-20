/**
 * @file SonnetCheese.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class SonnetCheese
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : SonnetCheese.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header SonnetCheese.cpp */

#ifndef SONNETCHEESE_HPP
#define SONNETCHEESE_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for SideProduct
 * 
 */
class SonnetCheese : public SideProduct
{
	public:
		/**
		 * @brief Construct a new Sonnet Cheese object
		 * 
		 */
		SonnetCheese();
		
		/**
		 * @brief Destroy the Sonnet Cheese object
		 * 
		 */
		~SonnetCheese();
	
	private:
		/**
		 * @brief Counter for SonnetCheese in player's inventory
		 * 
		 */
		static int n_sonnetcheese;
};

#endif
