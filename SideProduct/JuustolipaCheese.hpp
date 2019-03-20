/**
 * @file JuustolipaCheese.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class JuustolipaCheese
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : JuustolipaCheese.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header JuustolipaCheese.cpp */

#ifndef JUUSTOLIPACHEESE_HPP
#define JUUSTOLIPACHEESE_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Real class for SideProduct
 * 
 */
class JuustolipaCheese : public SideProduct
{
	public:
		/**
		 * @brief Construct a new Juustolipa Cheese object
		 * 
		 */
		JuustolipaCheese();
		
		/**
		 * @brief Destroy the Juustolipa Cheese object
		 * 
		 */
		~JuustolipaCheese();
	
	private:
		/**
		 * @brief Counter for JuustolipaCheese
		 * 
		 */
		static int n_juustolipacheese;
};

#endif
