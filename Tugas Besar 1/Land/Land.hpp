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

#include "../Cell.hpp"

#ifndef LAND_HPP
#define LAND_HPP

/**
 * @brief Class Land for map
 * 
 */
class Land: public Cell
{
	public:
		/**
		 * @brief Construct a new Land object
		 * 
		 */
		Land();

		/**
		 * @brief Return true if there is grass
		 * 
		 * @return int 
		 */
		int isGrass();

		/**
		 * @brief Set the Grass Status object
		 * 
		 */
		void setGrassStatus(int gs);

		/**
		 * @brief Method to render the land type character to map
		 * 
		 * @return char 
		 */
		virtual char render();
	
	private:
		int grassStatus;
};

#endif
