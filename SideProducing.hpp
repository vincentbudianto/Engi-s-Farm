/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : SideProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header SideProducing.cpp */

#ifndef SIDEPRODUCING_HPP
#define SIDEPRODUCING_HPP

#include "FarmProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class SideProducing: public FarmProduct
{
	public:
		//ctor
		SideProducing(string);
		
		//selektor
		int getName();
		int getPrice();
		void setName(string);
};

#endif
