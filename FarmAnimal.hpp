/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : FarmAnimal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header FarmAnimal.cpp */

#ifndef FARMANIMAL_HPP
#define FARMANIMAL_HPP

#include <iostream>
#include <string.h>
using namespace std;

class FarmAnimal
{
	public:
		//dtor
		virtual ~FarmAnimal();
		
		//selektor
		virtual string getName() const;
		virtual boolean getHungry() const;
		virtual void setName(string);

		virtual void eat() = 0;
		virtual void move() = 0;
		virtual void sound() = 0;
		virtual void print() = 0;
	
	protected:
		string name;
		boolean hungry;
};

#endif
