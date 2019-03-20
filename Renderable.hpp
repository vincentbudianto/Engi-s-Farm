/**
 * @file Renderable.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Renderable
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Renderable.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Renderable.cpp */

#ifndef RENDERABLE_HPP
#define RENDERABLE_HPP

/**
 * @brief Class for rendering to map
 * 
 */
class Renderable
{
	public:
		/**
		 * @brief Method to render object character to map
		 * 
		 * @return char 
		 */
		virtual char render() = 0;
};

#endif
