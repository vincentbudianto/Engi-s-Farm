/**
 * @file Mutton.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Mutton
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Mutton.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Mutton.cpp */

#ifndef MUTTON_HPP
#define MUTTON_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for FarmProduct
 * 
 */
class Mutton : public FarmProduct
{
	public:
		/**
		 * @brief Construct a new Mutton object
		 * 
		 */
		Mutton();
		
		/**
		 * @brief Destroy the Mutton object
		 * 
		 */
		~Mutton();
	
	private:
		/**
		 * @brief Counter for Mutton in player's inventory
		 * 
		 */
		static int n_mutton;
};

#endif
