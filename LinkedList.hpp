/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : LinkedList.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header LinkedList.cpp */

#ifndef LINKEDLIST.HPP
#define LINKEDLIST.HPP

template <class T>
class LinkedList
{
	public:
		int find(T element);
		void isEmpty();
		int addElement(T element);
		int remove(T element);
		T get(T indeks);
}

#endif
