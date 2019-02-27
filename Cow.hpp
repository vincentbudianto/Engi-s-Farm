/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Cow.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Cow.cpp */

#ifndef COW_HPP
#define COW_HPP

#include "FarmAnimal.hpp"
#include "MilkProducingFarmAnimal.hpp"
#include "MeatProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Cow : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal
{
	public:
		//ctor
		Cow(string);

		//selektor
		string getName() const;
		void setName(string);

		string getMilk();	//cow milk
		string getMeat();	//beef
		void sound();
		void print();
};

#endif
