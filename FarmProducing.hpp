/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : FarmProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FarmProducing.cpp */

#ifndef FARMPRODUCING_HPP
#define FARMPRODUCING_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class IProducing: public FarmAnimal
{
	public:
		virtual void interactProduct() = 0;
};

class KProducing: public FarmAnimal
{
	public:
		virtual void killProduct() = 0;
};

#endif
