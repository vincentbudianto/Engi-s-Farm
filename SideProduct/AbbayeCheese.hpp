/**
 * @file AbbayeCheese.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class AbbayeCheese
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : AbbayeCheese.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header AbbayeCheese.cpp */

#ifndef ABBAYECHEESE_HPP
#define ABBAYECHEESE_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for SideProduct
 * 
 */
class AbbayeCheese : public SideProduct
{
	public:
		/**
		 * @brief Construct a new Abbaye Cheese object
		 * 
		 */
		AbbayeCheese();
		
		/**
		 * @brief Destroy the Abbaye Cheese object
		 * 
		 */
		~AbbayeCheese();
	
	private:
		/**
		 * @brief Counter for AbbayeCheese in player's inventory
		 * 
		 */
		static int n_abbayecheese;
};

#endif
