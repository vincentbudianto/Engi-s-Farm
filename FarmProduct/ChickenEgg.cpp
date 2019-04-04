#include "ChickenEgg.hpp"

/**
 * @brief initiate n_chickenegg
 * 
 */
int ChickenEgg::n_chickenegg = 0;

/**
 * @brief Construct a new ChickenEgg object
 * 
 */
ChickenEgg::ChickenEgg():Product(3, "Chicken Egg"){
	n_chickenegg++;
}

/**
 * @brief Destroy the ChickenEgg object
 * 
 */
ChickenEgg::~ChickenEgg(){
	n_chickenegg--;
}