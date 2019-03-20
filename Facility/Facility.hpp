/**
 * @file Facility.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Facility
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Facility.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Facility.cpp */

#include "../Cell.hpp"

#ifndef FACILITY_HPP
#define FACILITY_HPP

/**
 * @brief Class Facility for farm
 * 
 */
class Facility: public Cell
{
	public:
		/**
		 * @brief Get the Type object
		 * 
		 * @return char* 
		 */
		virtual char* getType();
};

#endif
