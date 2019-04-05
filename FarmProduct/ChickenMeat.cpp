#include "ChickenMeat.hpp"

/**
 * @brief Counter for ChickenMeat in player's inventory
 * 
 */
int ChickenMeat::n_chickenmeat = 0;

/**
 * @brief Construct a new ChickenMeat object
 * 
 */
ChickenMeat::ChickenMeat():Product(7, "Chicken Meat"){
	n_chickenmeat++;
}
