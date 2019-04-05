#include "SonnetCheese.hpp"
		/**
		 * @brief Counter for SonnetCheese in player's inventory
		 * 
		 */
		int SonnetCheese::n_sonnetcheese=0;
		/**
		 * @brief Construct a new Sonnet Cheese object
		 * 
		 */
		SonnetCheese::SonnetCheese():Product(20, "Side Product"){
			n_sonnetcheese++;
		}
		
		/**
		 * @brief Destroy the Sonnet Cheese object
		 * 
		 */
		SonnetCheese::~SonnetCheese(){
			n_sonnetcheese--;
		}
