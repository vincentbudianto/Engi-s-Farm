/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
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

class Sheep: public IProducing, public KProducing
{
	public:
		//ctor
		Sheep(string);
		
		//dtor
		~Sheep();

		string killProduct();	//mutton
		void eat();
		void move();
		void sound();
		void print();

	private:
		static int n_sheep;
};

#endif
