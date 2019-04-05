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
#include <memory>

#include "Truck.hpp"

using namespace std;

/**
 * @brief Construct a new Truck object
 * 
 */
Truck::Truck(){
	setY(1);
	setX(10);
	lastTime = time(nullptr);
	firstTime = true;
}

/**
 * @brief Destroy the Truck object
 * 
 */
Truck::~Truck(){
	
}

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
	time_t now = time(nullptr);
	tm now_time = *localtime(addressof(now));
	tm last_time = *localtime(addressof(lastTime));

	return (now_time.tm_min - last_time.tm_min >= 1 or firstTime);
}

/**
 * @brief Set the Last Time object
 * 
 */
void Truck::setLastTime(){
	lastTime = time(nullptr);
}

/**
 * @brief Method to sell all items in inventory
 * 
 */
int Truck::transact(){
	int valid = isAvailable();
	if(valid){
		setLastTime();
		firstTime = false;
	}
	return valid;
}
