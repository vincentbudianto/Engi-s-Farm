/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Sheep.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Sheep.cpp */

#ifndef SHEEP_HPP
#define SHEEP_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Sheep : public IProducing, public KProducing
{
	public:
		//ctor
		Sheep(string);
		
		//dtor
		~Sheep();
		
		//selektor
		string getName() const;
		void setName(string);

		string interactProduct();	//yarn
		string killProduct();	//mutton
		void eat();
		void move();
		void sound();
		void print();

	private:
		static int n_sheep;
};

#endif
