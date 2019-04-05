#include "RainbowSatay.hpp"
		/**
		 * @brief Counter for RainbowSatay in player's inventory
		 * 
		 */

		int RainbowSatay::n_rainbowsatay=0;
		/**
		 * @brief Construct a new Rainbow Satay object
		 * 
		 */
		RainbowSatay::RainbowSatay():Product(20, "Side Product"){
			n_rainbowsatay++;
		}
		
		/**
		 * @brief Destroy the Rainbow Satay object
		 * 
		 */
		RainbowSatay::~RainbowSatay(){
			n_rainbowsatay--;
		}
	