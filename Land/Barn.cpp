/**
 * @file Barn.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Barn
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Barn.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Barn.cpp */

#include "Barn.hpp"

/**
 * @brief Create Barn Object
 * 
 * @return char 
 */
Barn::Barn(){
	
}

/**
 * @brief Method to render the land type character to map
 * 
 * @return char 
 */
char Barn::render(){
	if(!isGrass())
		return 'x';
	else
		return '@';
}
