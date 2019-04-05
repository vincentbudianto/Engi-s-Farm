#include "SweetMeatball.hpp"

/**
		 * @brief Counter for SweetMeatBall in player's inventory
		 * 
		 */
		int SweetMeatball::n_sweetmeatball = 0;
				/**
		 * @brief Construct a new Sweet Meatball object
		 * 
		 */
		SweetMeatball::SweetMeatball():Product(20, "Side Product"){
			n_sweetmeatball++;
		}
		
		/**
		 * @brief Destroy the Sweet Meatball object
		 * 
		 */
		SweetMeatball::~SweetMeatball(){
			n_sweetmeatball--;
		}
	