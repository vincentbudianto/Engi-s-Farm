/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Goat.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Goat.cpp */

#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Goat : public IProducing, public KProducing
{
	public:
		//ctor
		Goat(string);
		
		//dtor
		~Goat();

		string interactProduct();	//goat milk
		string killProduct();	//goat meat
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_goat;
};

#endif
