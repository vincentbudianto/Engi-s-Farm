/**
 * @file FarmProduct.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class FarmProduct
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : FarmProduct.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FarmProduct.cpp */

#ifndef FARMPRODUCT_HPP
#define FARMPRODUCT_HPP

#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief FarmProduct parent class
 * 
 */
class FarmProduct
{
	public:
		/**
		 * @brief Destroy the Farm Product object
		 * 
		 */
		virtual ~FarmProduct();
		
		/**
		 * @brief Get the Name object
		 * 
		 * @return int 
		 */
		virtual int getName();

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
		virtual void setName(string);
	
	protected:
		string name;
		int price;
};

#endif
