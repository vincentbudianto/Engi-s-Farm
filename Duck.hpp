/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Duck.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Duck.cpp */

#ifndef DUCK_HPP
#define DUCK_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Duck : public IProducing, public KProducing
{
	public:
		//ctor
		Duck(string);
		
		//dtor
		~Duck();
		
		//selektor
		string getName() const;
		void setName(string);

		string interactProduct();	//duck egg
		string killProduct();	//duck meat
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_duck;
};

#endif
