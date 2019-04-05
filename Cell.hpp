/**
 * @file Cell.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Cell
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Cell.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Cell.cpp */

#include "Renderable.hpp"

#ifndef CELL_HPP
#define CELL_HPP

/**
 * @brief Class for rendering object to cell
 * 
 */
class Cell : public Renderable
{
	public:
		/**
		 * @brief 
		 * 
		 * @return char Method to render object character to map
		 */
		virtual char render();
};

#endif
