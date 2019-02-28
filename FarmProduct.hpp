/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : FarmProduct.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FarmProduct.cpp */

#ifndef FARMPRODUCT_HPP
#define FARMPRODUCT_HPP

#include <iostream>
#include <string.h>
using namespace std;

class FarmProduct
{
	public:
		//dtor
		virtual ~FarmProduct();
		
		//selektor
		virtual int getName();
		virtual int getPrice();
		virtual void setName(string);
	
	protected:
		string name;
		int price;
};

#endif
