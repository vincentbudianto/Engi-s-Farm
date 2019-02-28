/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Renderable.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Renderable.cpp */

#ifndef MAP_HPP
#define MAP_HPP

class Renderable
{
	public:
		virtual char render() = 0;
		
	private:
		char** map;
};

#endif
