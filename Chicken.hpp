/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Chicken.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Chicken.cpp */

#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "FarmAnimal.hpp"
#include "EggProducingFarmAnimal.hpp"
#include "MeatProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Chicken : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
	public:
		//ctor
		Chicken(string);

		//selektor
		string getName() const;
		void setName(string);

		string getEgg();	//chicken egg
		string getMeat();	//chicken meat
		void sound();
		void print();
};

#endif
