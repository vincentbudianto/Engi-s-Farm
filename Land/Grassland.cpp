/**
 * @file Grassland.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Grassland
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Grassland.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Grassland.cpp */

#include "Grassland.hpp"
#include <random>
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Land object
 * 
 */
Grassland::Grassland(){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(0,8);

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
int Grassland::isGrass(){
	return grassStatus;
}

/**
 * @brief Set the Grass Status object
 * 
 */
void Grassland::setGrassStatus(int gs){
	grassStatus = gs;
}

/**
 * @brief Method to render the land type character to map
 * 
 * @return char 
 */
char Grassland::render(){
	if(!isGrass())
		return '-';
	else
		return '#';
}
