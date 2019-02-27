/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Goat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Goat.cpp */

#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"
#include "MilkProducingFarmAnimal.hpp"
#include "MeatProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Goat : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
	public:
		//ctor
		Goat(string);

		//selektor
		string getName() const;
		void setName(string);

		string getMilk();	//goat milk
		string getMeat();	//goat meat
		void sound();
		void print();
};

#endif
