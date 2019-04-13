#include "DuckEgg.hpp"

/**
 * @brief Counter for DuckEgg in player's inventory
 * 
 */
int DuckEgg::n_duckegg = 0;

/**
 * @brief Construct a new DuckEgg object
 * 
 */
DuckEgg::DuckEgg():Product(3, "Duck Egg"){
	n_duckegg++;
}
