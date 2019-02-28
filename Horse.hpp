/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Horse.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Horse.cpp */

#ifndef HORSE_HPP
#define HORSE_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Horse : public IProducing
{
	public:
		//ctor
		Horse(string);
		
		//dtor
		~Horse();
		
		//selektor
		string getName() const;
		void setName(string);

		string interactProduct();	//horse milk
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_horse;
};

#endif
