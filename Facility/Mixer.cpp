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

/**
 * @brief Construct a new Mixer object
 * 
 */
Mixer::Mixer(){

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

/**
 * @brief Return 1 if SideProduct can be created\nReturn 0 if SideProduct can't be created
 * 
 * @return int 
 */
int Mixer::isMixable(FarmProduct* fp){
	
}

/**
 * @brief Method to create SideProduct
 * 
 * @return SideProduct 
 */
SideProduct Mixer::mixStuffs(FarmProduct*){
	
}
