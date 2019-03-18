/**
 * @file DuckMeat.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class DuckMeat
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : DuckMeat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenMeat.cpp */

#ifndef DUCKMEAT_HPP
#define DUCKMEAT_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class DuckMeat : public FarmProduct
{
	public:
		//ctor
		DuckMeat();
		
		//dtor
		~DuckMeat();
	
	private:
		static int n_duckmeat;
};

#endif
