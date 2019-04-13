/**
 * @file Mixer.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Mixer
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Mixer.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Mixer.cpp */

#include "Mixer.hpp"
#include "../SideProduct/FailedSideProduct.hpp"
#include <string.h>
using namespace std;

/**
 * @brief Construct a new Mixer object
 * 
 */
Mixer::Mixer(){
	setY(3);
	setX(10);
}

/**
 * @brief Destroy the Mixer object
 * 
 */
Mixer::~Mixer(){
	
}

/**
 * @brief Method to render the Facility type character to map
 * 
 * @return char 
 */
char Mixer::render(){
	return 'M';
}
