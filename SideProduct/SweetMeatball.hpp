/**
 * @file SweetMeatball.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class SweetMeatball
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : SweetMeatball.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header SweetMeatball.cpp */

#ifndef SWEETMEATBALL_HPP
#define SWEETMEATBALL_HPP

#include "../Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class SweetMeatball : public Product
{
	public:
		/**
		 * @brief Construct a new Sweet Meatball object
		 * 
		 */
		SweetMeatball();
		
		/**
		 * @brief Destroy the Sweet Meatball object
		 * 
		 */
		~SweetMeatball();
	
	private:
		/**
		 * @brief Counter for SweetMeatBall in player's inventory
		 * 
		 */
		static int n_sweetmeatball;
};

#endif
