/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : EggProducingFarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header MeatProducingFarmAnimal.cpp */

#ifndef EGGPRODUCINGFARMANIMAL_HPP
#define EGGPRODUCINGFARMANIMAL_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class EggProducingFarmAnimal
{
	public:
		
		virtual void getEgg() = 0;
};

#endif
