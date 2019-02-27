/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Duck.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Duck.cpp */

#ifndef DUCK_HPP
#define DUCK_HPP

#include "FarmAnimal.hpp"
#include "EggProducingFarmAnimal.hpp"
#include "MeatProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Duck : public EggProducingFarmAnimal, public MeatProducingFarmAnimal
{
	public:
		//ctor
		Duck(string);

		//selektor
		string getName() const;
		void setName(string);

		string getEgg();	//duck egg
		string getMeat();	//duck meat
		void sound();
		void print();
};

#endif
