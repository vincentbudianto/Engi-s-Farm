/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : GoatMilk.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header GoatMilk.cpp */

#ifndef GOATMILK_HPP
#define GOATMILK_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class GoatMilk : public FarmProduct
{
	public:
		//ctor
		GoatMilk();
		
		//dtor
		~GoatMilk();
	
	private:
		static int n_goatmilk;
};

#endif
