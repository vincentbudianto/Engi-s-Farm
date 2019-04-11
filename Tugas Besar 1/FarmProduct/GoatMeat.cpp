#include "GoatMeat.hpp"

/**
 * @brief Counter for GoatMeat in player's inventory
 * 
 */
int GoatMeat::n_goatmeat = 0;

/**
 * @brief Construct a new GoatMeat object
 * 
 */
GoatMeat::GoatMeat():Product(15, "Goat Meat"){
	n_goatmeat++;
}
