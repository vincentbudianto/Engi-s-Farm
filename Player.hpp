/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Player.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Player.cpp */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Player
{
	public:
		//ctor
		Player(string);
		
		//dtor
		~Player();
		
		void move();
		
		void talk();
		void kill();
		void interact();
		void grow();
		void mix();
	
	private:
		string name;
		string* inventory;
		int money;
		int water;
};

#endif
