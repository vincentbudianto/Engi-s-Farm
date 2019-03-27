/**
 * @file Coop.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Coop
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Coop.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Coop.cpp */

#include "Land.hpp"

#ifndef COOP_HPP
#define COOP_HPP

/**
 * @brief Class Coop for Land
 * 
 */
class Coop: public Land
{
	public:
		/**
		 * @brief Method to render the land type character to map
		 * 
		 * @return char 
		 */
		char render(){
			return 'o';
		}
};

#endif
