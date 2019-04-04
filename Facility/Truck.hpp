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

#include "Facility.hpp"
#include "Facility.hpp"

#ifndef TRUCK_HPP
#define TRUCK_HPP

/**
 * @brief Class Truck for Facility
 * 
 */
class Truck: public Facility
{
	public:
		/**
		 * @brief Construct a new Truck object
		 * 
		 */
		Truck();

		/**
		 * @brief Destroy the Truck object
		 * 
		 */
		~Truck();

		/**
		 * @brief Method to render the Facility type character to map
		 * 
		 * @return char 
		 */
		char render();

		/**
		 * @brief Get the Availability object
		 * 
		 * @return int 
		 */
		int isAvailable();

		/**
		 * @brief Method to sell all items in inventory
		 * 
		 */
		int transact();

		/**
		 * @brief Set the Last Time object
		 * 
		 */
		void setLastTime();

	private:
		std::time_t lastTime;
};

#endif
