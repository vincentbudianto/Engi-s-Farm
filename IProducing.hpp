/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : IProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header IProducing.cpp */

#ifndef IPRODUCING_HPP
#define IPRODUCING_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class IProducing
{
	public:
		virtual void interactProduct() = 0;
};

#endif
