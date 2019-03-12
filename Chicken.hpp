/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Chicken.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Chicken.cpp */

#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "FarmAnimal.hpp"
#include "IProducing.hpp"
#include "KProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Chicken: public IProducing, public KProducing
{
	public:
		//ctor
		Chicken(string);
		
		//dtor
		~Chicken();
		
		string interactProduct();	//chicken egg
		string killProduct();		//chicken meat
		void eat();
		void move();
		void sound();
		void print();

	private:
		static int n_chicken;
};

#endif
