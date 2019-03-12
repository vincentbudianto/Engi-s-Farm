/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : ChickenEgg.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header ChickenEgg.cpp */

#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class ChickenEgg : public FarmProduct
{
	public:
		//ctor
		ChickenEgg();
		
		//dtor
		~ChickenEgg();
	
	private:
		static int n_chickenegg;
};

#endif
