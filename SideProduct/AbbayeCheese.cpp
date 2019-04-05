#include "AbbayeCheese.hpp"

int AbbayeCheese::n_abbayecheese = 0;

		/**
		 * @brief Construct a new Abbaye Cheese object
		 * 
		 */
		AbbayeCheese::AbbayeCheese():Product(20, "Abbaye Cheese"){
			n_abbayecheese++;
		}
		
		/**
		 * @brief Destroy the Abbaye Cheese object
		 * 
		 */
		AbbayeCheese::~AbbayeCheese(){
			n_abbayecheese--;
		}