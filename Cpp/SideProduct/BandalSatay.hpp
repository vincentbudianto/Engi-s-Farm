/**
 * @file BandalSatay.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class BandalSatay
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : BandalSatay.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header BandalSatay.cpp */

#ifndef BANDALSATAY_HPP
#define BANDALSATAY_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class BandalSatay : public Product
{
	public:
		/**
		 * @brief Construct a new Bandal Satay object
		 * 
		 */
		BandalSatay();
		
		/**
		 * @brief Destroy the Bandal Satay object
		 * 
		 */
		~BandalSatay();
	
	private:
		/**
		 * @brief Counter for BandalSatay in player's inventory
		 * 
		 */
		static int n_bandalsatay;
};

#endif
