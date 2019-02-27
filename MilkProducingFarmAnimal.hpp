/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : MilkProducingFarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header MilkProducingFarmAnimal.cpp */

#ifndef MILKPRODUCINGFARMANIMAL_HPP
#define MILKPRODUCINGFARMANIMAL_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class MilkProducingFarmAnimal
{
	public:
		
		virtual void getMilk() = 0;
};

#endif
