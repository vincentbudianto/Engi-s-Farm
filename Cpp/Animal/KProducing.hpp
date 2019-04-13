/**
 * @file KProducing.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class KProducing
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : KProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header KProducing.cpp */

#ifndef KPRODUCING_HPP
#define KPRODUCING_HPP

#include "../Renderable.hpp"
#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief FarmAnimal child class
 * 
 */
class KProducing: public FarmAnimal
{
	public:
		/**
		 * @brief function to get FarmProduct from kill command
		 * 
		 */
		virtual void killProduct();
};

#endif
