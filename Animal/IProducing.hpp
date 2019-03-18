/**
 * @file IProducing.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class IProducing
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : IProducing.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header IProducing.cpp */

#ifndef IPRODUCING_HPP
#define IPRODUCING_HPP

#include "FarmAnimal.hpp"
#include <iostream>
#include <string.h>
using namespace std;

class IProducing: public FarmAnimal
{
	public:
		virtual void interactProduct() = 0;
};

#endif