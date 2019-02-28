/* NIM/Nama  : 13517137/Vincent Budianto
 * Nama file : Animal.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Animal.cpp */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "FarmAnimal.hpp"
#include "FarmProducing.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class Chicken : public IProducing, public KProducing
{
	public:
		//ctor
		Chicken(string);
		
		//dtor
		~Chicken();
		
		string interactProduct();	//chicken egg
		string killProduct();	//chicken meat
		void eat();
		void move();
		void sound();
		void print();

	private:
		static int n_chicken;
};

class Cow : public IProducing, public KProducing
{
	public:
		//ctor
		Cow(string);
		
		//dtor
		~Cow();
		
		string interactProduct();	//cow milk
		string killProduct();	//beef
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_cow;
};

class Duck : public IProducing, public KProducing
{
	public:
		//ctor
		Duck(string);
		
		//dtor
		~Duck();
		
		string interactProduct();	//duck egg
		string killProduct();	//duck meat
		void eat();
		void move();
		void sound();
		void print();
		
	private:
		static int n_duck;
};

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

class Horse : public IProducing
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

class Sheep : public IProducing, public KProducing
{
	public:
		//ctor
		Sheep(string);
		
		//dtor
		~Sheep();

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
