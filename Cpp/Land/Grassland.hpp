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

#include "../Cell.hpp"

#ifndef GRASSLAND_HPP
#define GRASSLAND_HPP

/**
 * @brief Class Grassland for Land
 * 
 */
class Grassland: public Cell
{
	public:
		/**
		 * @brief Create Barn Object
		 * 
		 * @return char 
		 */
		Grassland();

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
		char render();
		
	private:
		int grassStatus;
};

#endif
