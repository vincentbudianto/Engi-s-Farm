#include "BandalSatay.hpp"
	/**
		 * @brief Counter for BandalSatay in player's inventory
		 * 
		 */
int BandalSatay::n_bandalsatay = 0;
		/**
		 * @brief Construct a new Bandal Satay object
		 * 
		 */
		BandalSatay::BandalSatay(){
			n_bandalsatay++;
		}
		
		/**
		 * @brief Destroy the Bandal Satay object
		 * 
		 */
		BandalSatay::~BandalSatay(){
			n_bandalsatay--;
		}
		
