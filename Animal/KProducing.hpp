/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : KProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header KProducing.cpp */

#ifndef KPRODUCING_HPP
#define KPRODUCING_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class KProducing: public FarmAnimal
{
	public:
		virtual void killProduct() = 0;
};

#endif
