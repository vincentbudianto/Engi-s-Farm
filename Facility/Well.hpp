/**
 * @file Well.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Well
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Well.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Well.cpp */

#include "Facility.hpp"

#ifndef WELL_HPP
#define WELL_HPP

/**
 * @brief Class Well for Facility
 * 
 */
class Well: public Facility
{
	public:
		/**
		 * @brief Construct a new Well object
		 * 
		 */
		Well();

		/**
		 * @brief Destroy the Well object
		 * 
		 */
		~Well();

		/**
		 * @brief Method to render the Facility type character to map
		 * 
		 * @return char 
		 */
		char render();

		/**
		 * @brief Get the Type object
		 * 
		 * @return char* 
		 */
		char* getType();
};

#endif
