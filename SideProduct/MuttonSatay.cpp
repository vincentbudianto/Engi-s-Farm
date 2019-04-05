#include "MuttonSatay.hpp"
		/**
		 * @brief Counter for MuttonSatay in player's inventory
		 * 
		 */
		int MuttonSatay::n_muttonsatay=0;
		/**
		 * @brief Construct a new Mutton Satay object
		 * 
		 */
		MuttonSatay::MuttonSatay():Product(20, "Side Product"){
			n_muttonsatay++;
		}
		
		/**
		 * @brief Destroy the Mutton Satay object
		 * 
		 */
		MuttonSatay::~MuttonSatay(){
			n_muttonsatay--;
		}
