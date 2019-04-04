/**
 * @file FailedSideProduct.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class FailedSideProduct
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : FailedSideProduct.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FailedSideProduct.cpp */

#ifndef FAILEDSIDEPRODUCT_HPP
#define FAILEDSIDEPRODUCT_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for Product
 * 
 */
class FailedSideProduct : public Product
{
	public:
		/**
		 * @brief Construct a new Failed Side Product object
		 * 
		 */
		FailedSideProduct();
		
		/**
		 * @brief Destroy the Failed Side Product object
		 * 
		 */
		~FailedSideProduct();
	
	private:
		/**
		 * @brief Counter for FailedSideProduct in player's inventory
		 * 
		 */
		static int n_failedsideproduct;
};

#endif
