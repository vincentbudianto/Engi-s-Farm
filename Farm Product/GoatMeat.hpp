/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : GoatMeat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header GoatMeat.cpp */

#ifndef GOATMEAT_HPP
#define GOATMEAT_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class GoatMeat : public FarmProduct
{
	public:
		//ctor
		GoatMeat();
		
		//dtor
		~GoatMeat();
	
	private:
		static int n_goatmeat;
};

#endif
