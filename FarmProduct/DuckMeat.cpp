#include "DuckMeat.hpp"

/**
 * @brief Counter for DuckMeat in player's inventory
 * 
 */
int DuckMeat::n_duckmeat = 0;

/**
 * @brief Construct a new DuckMeat object
 * 
 */
DuckMeat::DuckMeat():Product(10, "Duck Meat"){
	n_duckmeat++;
}
