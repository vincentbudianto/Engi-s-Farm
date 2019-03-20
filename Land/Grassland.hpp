/**
 * @file Granssland.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Granssland
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Granssland.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Granssland.cpp */

#include "Land.hpp"

#ifndef GRANSSLAND_HPP
#define GRANSSLAND_HPP

/**
 * @brief Class Grassland for Land
 * 
 */
class Granssland: public Land
{
	public:
		/**
		 * @brief Construct a new Granssland object
		 * 
		 */
		Granssland();

		/**
		 * @brief Destroy the Granssland object
		 * 
		 */
		~Granssland();

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
		void setGrassStatus(int);

		/**
		 * @brief Method to render the land type character to map
		 * 
		 * @return char 
		 */
		char render();
};

#endif
