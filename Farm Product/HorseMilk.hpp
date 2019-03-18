/**
 * @file HorseMilk.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class HorseMilk
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : HorseMilk.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header HorseMilk.cpp */

#ifndef HORSEMILK_HPP
#define HORSEMILK_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class HorseMilk : public FarmProduct
{
	public:
		//ctor
		HorseMilk();
		
		//dtor
		~HorseMilk();
	
	private:
		static int n_horsemilk;
};

#endif
