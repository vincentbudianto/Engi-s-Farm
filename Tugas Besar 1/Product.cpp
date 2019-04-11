/**
 * @file Product.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Product
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Product.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Product.cpp */

#include "Product.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Create the Farm Product object
 * 
 */
Product::Product(){
	price = 0;
	this->name = new char[10];
	strcpy(name,"product stub");
}

/**
 * @brief Create the Farm Product object
 * 
 */
Product::Product(int theprice, char* thename){
	price = theprice;
	this->name = new char[10];
	strcpy(name,thename);
}

/**
 * @brief Get the Name object
 * 
 * @return char* 
 */
char* Product::getName(){
	return name;
}

/**
 * @brief Get the Price object
 * 
 * @return int 
 */
int Product::getPrice(){
	return price;
}

/**
 * @brief Set the Name object
 * 
 */
void Product::setName(char* newname){
	strcpy(name, newname);
}
