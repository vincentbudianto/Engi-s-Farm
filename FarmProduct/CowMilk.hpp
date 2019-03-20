/**
 * @file CowMilk.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class CowMilk
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : CowMilk.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header CowMilk.cpp */

#ifndef COWMILK_HPP
#define COWMILK_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmProduct
 * 
 */
class CowMilk : public FarmProduct
{
	public:
		/**
		 * @brief Construct a new Cow Milk object
		 * 
		 */
		CowMilk();
		
		/**
		 * @brief Destroy the Cow Milk object
		 * 
		 */
		~CowMilk();
	
	private:
		/**
		 * @brief Counter for CowMilk in player's inventory
		 * 
		 */
		static int n_cowmilk;
};

#endif
