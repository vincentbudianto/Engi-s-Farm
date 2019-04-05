#include "GoatSatay.hpp"
		/**
		 * @brief Counter for GoatSatay in player's inventory
		 * 
		 */
int GoatSatay::n_goatsatay =0 ;
		/**
		 * @brief Construct a new Goat Satay object
		 * 
		 */
		GoatSatay::GoatSatay():Product(20, "Side Product"){
			n_goatsatay++;
		}
		
		/**
		 * @brief Destroy the Goat Satay object
		 * 
		 */
		GoatSatay::~GoatSatay(){
			n_goatsatay--;
		}