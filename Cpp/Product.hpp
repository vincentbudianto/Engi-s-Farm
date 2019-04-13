/**
 * @file Product.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Product
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Product.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Product.cpp */

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Product parent class
 * 
 */
class Product
{
	public:
		/**
		 * @brief Create the Farm Product object
		 * 
		 */
		Product();

		/**
		 * @brief Create the Product object
		 * 
		 */
		Product(int, char*);
		
		/**
		 * @brief Get the Name object
		 * 
		 * @return char* 
		 */
		virtual char* getName();

		/**
		 * @brief Get the Price object
		 * 
		 * @return int 
		 */
		virtual int getPrice();
 
		/**
		 * @brief Set the Name object
		 * 
		 */
		virtual void setName(char*);
	
	protected:
		char* name;
		int price;
};

#endif
