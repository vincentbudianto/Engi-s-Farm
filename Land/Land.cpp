/**
 * @file Land.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Land
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Land.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Land.cpp */

#include <stdlib.h>
#include <time.h>

#include "Land.hpp"

/**
 * @brief Construct a new Land object
 * 
 */
Land::Land(){
	srand (time(NULL));
	grassStatus = rand() % 2;
}

/**
 * @brief Return true if there is grass
 * 
 * @return int 
 */
int Land::isGrass(){
	return grassStatus;
}

/**
 * @brief Set the Grass Status object
 * 
 */
void Land::setGrassStatus(int gs){
	grassStatus = gs;
}

/**
 * @brief Method to render the land type character to map
 * 
 * @return char 
 */
virtual char Land::render(){}
