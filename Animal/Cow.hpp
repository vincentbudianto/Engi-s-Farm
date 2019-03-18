/**
 * @file Cow.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Cow
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
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

class Cow: public IProducing, public KProducing
{
	public:
		//ctor
		Cow(string);
		
		//dtor
		~Cow();
		
		string interactProduct();	//cow milk
		string killProduct();		//beef
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_cow;
};

#endif
