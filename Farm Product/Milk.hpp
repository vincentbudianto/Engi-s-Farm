/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Milk.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Milk.cpp */

#ifndef Milk_HPP
#define Milk_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Milk : public FarmProduct
{
	public:
		//ctor
		Milk(string);
		
		//dtor
		~Milk();
		
		//selektor
		string getName() const;
		void setName(string);
};

#endif
