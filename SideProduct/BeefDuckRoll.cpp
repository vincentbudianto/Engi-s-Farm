#include "BeefDuckRoll.hpp"
		/**
		 * @brief Counter for BeefDuckRoll in player's inventory
		 * 
		 */

int BeefDuckRoll::n_beefduckroll = 0;
		/**
		 * @brief Construct a new Beef Duck Roll object
		 * 
		 */
		BeefDuckRoll::BeefDuckRoll(){
			n_beefduckroll++;
		}
		
		/**
		 * @brief Destroy the Beef Duck Roll object
		 * 
		 */
		BeefDuckRoll::~BeefDuckRoll(){
			n_beefduckroll--;
		}

