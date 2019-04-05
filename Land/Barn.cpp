/**
 * @file Barn.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Barn
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Barn.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Barn.cpp */

#include "Barn.hpp"
#include <random>
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Barn object
 * 
 */
Barn::Barn(){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(0,5);

    grassStatus = dist6(rng);
    if(grassStatus != 0)
    	grassStatus = 0;
    else
    	grassStatus = 1;
}

/**
 * @brief Return true if there is grass
 * 
 * @return int 
 */
int Barn::isGrass(){
	return grassStatus;
}

/**
 * @brief Set the Grass Status object
 * 
 */
void Barn::setGrassStatus(int gs){
	grassStatus = gs;
}

/**
 * @brief Method to render the Barn type character to map
 * 
 * @return char 
 */
char Barn::render(){
	if(!isGrass())
		return 'x';
	else
		return '@';
}
