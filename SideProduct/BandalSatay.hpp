/**
 * @file BandalSatay.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class BandalSatay
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : BandalSatay.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header BandalSatay.cpp */

#ifndef BANDALSATAY_HPP
#define BANDALSATAY_HPP

#include "SideProduct.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class BandalSatay : public SideProduct
{
	public:
		//ctor
		BandalSatay();
		
		//dtor
		~BandalSatay();
	
	private:
		static int n_bandalsatay;
};

#endif
