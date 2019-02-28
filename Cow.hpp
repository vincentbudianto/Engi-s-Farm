/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Cow.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Cow.cpp */

#ifndef COW_HPP
#define COW_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Cow : public IProducing, public KProducing
{
	public:
		//ctor
		Cow(string);
		
		//dtor
		~Cow();
		
		//selektor
		string getName() const;
		void setName(string);

		string interactProduct();	//cow milk
		string killProduct();	//beef
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_cow;
};

#endif
