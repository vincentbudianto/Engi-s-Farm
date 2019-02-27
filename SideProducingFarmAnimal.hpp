/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : SideProducingFarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header MeatProducingFarmAnimal.cpp */

#ifndef SIDEPRODUCINGFARMANIMAL_HPP
#define SIDEPRODUCINGFARMANIMAL_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class SideProducingFarmAnimal
{
	public:
		
		virtual void getSide() = 0;
};

#endif
