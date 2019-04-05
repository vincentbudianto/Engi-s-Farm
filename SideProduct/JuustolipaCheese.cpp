#include "JuustolipaCheese.hpp"
		/**
		 * @brief Counter for JuustolipaCheese
		 * 
		 */
		 int JuustolipaCheese::n_juustolipacheese=0;
		 
		/**
		 * @brief Construct a new Juustolipa Cheese object
		 * 
		 */
		JuustolipaCheese::JuustolipaCheese():Product(20, "Side Product"){
			n_juustolipacheese++;
		}
		
		/**
		 * @brief Destroy the Juustolipa Cheese object
		 * 
		 */
		JuustolipaCheese::~JuustolipaCheese(){
			n_juustolipacheese--;
		}
