/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Horse.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Horse.cpp */

#ifndef HORSE_HPP
#define HORSE_HPP

#include "FarmAnimal.hpp"
#include "MilkProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Horse : public MilkProducingFarmAnimal
{
	public:
		//ctor
		Horse(string);

		//selektor
		string getName() const;
		void setName(string);

		string getMilk();	//horse milk
		void sound();
		void print();
};

#endif
