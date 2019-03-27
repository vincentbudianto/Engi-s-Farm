/**
 * @file Truck.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Truck
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Truck.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Truck.cpp */

#include <ctime>

#include "Truck.hpp"

/**
 * @brief Construct a new Truck object
 * 
 */
Truck::Truck(){
	lastTime = std::time(nullptr);
}

/**
 * @brief Destroy the Truck object
 * 
 */
Truck::~Truck();

/**
 * @brief Method to render the Facility type character to map
 * 
 * @return char 
 */
char Truck::render(){
	return 'T';
}

/**
 * @brief Get the Availability object
 * 
 * @return int 
 */
int Truck::isAvailable(){
	std::time_t now = std::time(nullptr);
	std::tm now_time = *std::localtime(std::addressof(now));
	std::tm last_time = *std::localtime(std::addressof(lastTime));

	return (now_time.tm_min - last_time.tm_min >= 10);
}

/**
 * @brief Method to sell all items in inventory
 * 
 */
void Truck::transact(Player p){
	if(isAvailable()){
		// TBD
		setLastTime();
	}else{
		std::cout << "Truk belum kembali dari pabrik" << std::endl;
	}
}

/**
 * @brief Set the Last Time object
 * 
 */
void Truck::setLastTime(){
	lastTime = std::time(nullptr);
}
