/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : SideProduct.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header SideProduct.cpp */

#ifndef SIDEPRODUCT_HPP
#define SIDEPRODUCT_HPP

#include <iostream>
#include <string.h>
using namespace std;

class SideProduct:
{
	public:
		//dtor
		virtual ~SideProduct();
		
		//selektor
		virtual int getName();
		virtual int getPrice();
		virtual void setName(string);
	
	protected:
		string name;
		int price;
};

#endif
