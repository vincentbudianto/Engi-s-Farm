/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : MeatProducingFarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header MeatProducingFarmAnimal.cpp */

#ifndef MEATPRODUCINGFARMANIMAL_HPP
#define MEATPRODUCINGFARMANIMAL_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class MeatProducingFarmAnimal
{
	public:
		
		virtual void getMeat() = 0;
};

#endif
