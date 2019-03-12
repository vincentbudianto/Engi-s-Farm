/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
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

class Horse: public IProducing
{
	public:
		//ctor
		Horse(string);
		
		//dtor
		~Horse();

		string interactProduct();	//horse milk
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_horse;
};

#endif
