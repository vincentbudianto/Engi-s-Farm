/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : DuckEgg.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenEgg.cpp */

#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class DuckEgg : public FarmProduct
{
	public:
		//ctor
		DuckEgg();
		
		//dtor
		~DuckEgg();
	
	private:
		static int n_duckegg;
};

#endif
