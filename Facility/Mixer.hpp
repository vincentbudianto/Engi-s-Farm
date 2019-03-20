/**
 * @file Mixer.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Mixer
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Mixer.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Mixer.cpp */

#include "Facility.hpp"
#include "../FarmProduct/FarmProduct.hpp"
#include "../SideProduct/SideProduct.hpp"

#ifndef MIXER_HPP
#define MIXER_HPP

/**
 * @brief Class Mixer for Facility
 * 
 */
class Mixer: public Facility
{
	public:
		/**
		 * @brief Construct a new Mixer object
		 * 
		 */
		Mixer();

		/**
		 * @brief Destroy the Mixer object
		 * 
		 */
		~Mixer();

		/**
		 * @brief Method to render the Facility type character to map
		 * 
		 * @return char 
		 */
		char render();

		/**
		 * @brief Get the Type object
		 * 
		 * @return char* 
		 */
		char* getType();

		/**
		 * @brief Return 1 if SideProduct can be created\nReturn 0 if SideProduct can't be created
		 * 
		 * @return int 
		 */
		int isMixable(FarmProduct*);

		/**
		 * @brief Method to create SideProduct
		 * 
		 * @return SideProduct 
		 */
		SideProduct mixStuffs(FarmProduct*);

	private:
		FarmProduct* inputs;
};

#endif
