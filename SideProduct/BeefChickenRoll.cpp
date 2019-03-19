/**
 * @file BeefChickenRoll.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class BeefChickenRoll
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : BeefChickenRoll.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header BeefChickenRoll.cpp */

#ifndef BEEFCHICKENROLL_HPP
#define BEEFCHICKENROLL_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class BeefChickenRoll : public SideProduct
{
	public:
		//ctor
		BeefChickenRoll();
		
		//dtor
		~BeefChickenRoll();
	
	private:
		static int n_beefchickenroll;
};

#endif
