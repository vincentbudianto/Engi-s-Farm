/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Sheep.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Sheep.cpp */

#ifndef SHEEP_HPP
#define SHEEP_HPP

#include "FarmAnimal.hpp"
#include "SideProducingFarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Sheep : public SideProducingFarmAnimal
{
	public:
		//ctor
		Sheep(string);

		//selektor
		string getName() const;
		void setName(string);

		string getSide();	//yarn
		void sound();
		void print();
};

#endif
