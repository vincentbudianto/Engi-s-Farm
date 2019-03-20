/**
 * @file MuttonSatay.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class MuttonSatay
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : MuttonSatay.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header MuttonSatay.cpp */

#ifndef MUTTONSATAY_HPP
#define MUTTONSATAY_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for SideProduct
 * 
 */
class MuttonSatay : public SideProduct
{
	public:
		/**
		 * @brief Construct a new Mutton Satay object
		 * 
		 */
		MuttonSatay();
		
		/**
		 * @brief Destroy the Mutton Satay object
		 * 
		 */
		~MuttonSatay();
	
	private:
		/**
		 * @brief Counter for MuttonSatay in player's inventory
		 * 
		 */
		static int n_muttonsatay;
};

#endif
