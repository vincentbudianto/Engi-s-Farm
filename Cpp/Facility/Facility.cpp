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

#include "Facility.hpp"

/**
 * @brief Method to render the facility type character to map
 * 
 * @return char 
 */
char Facility::render(){}

/**
 * @brief Method to get y position of facility
 * 
 * @return char 
 */
int Facility::getY(){ return this->y; }

/**
 * @brief Method to get x position of facility
 * 
 * @return char 
 */
int Facility::getX(){ return this->x; }

/**
 * @brief Method to set y position of facility
 * 
 * @return char 
 */
void Facility::setY(int y){ this->y = y; }

/**
 * @brief Method to set x position of facility
 * 
 * @return char 
 */
void Facility::setX(int x){ this->x = x; }