/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Mutton.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Mutton.cpp */

#ifndef MUTTON_HPP
#define MUTTON_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Mutton : public FarmProduct
{
	public:
		//ctor
		Mutton();
		
		//dtor
		~Mutton();
	
	private:
		static int n_mutton;
};

#endif
