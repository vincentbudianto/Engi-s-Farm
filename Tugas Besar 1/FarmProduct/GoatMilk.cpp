#include "GoatMilk.hpp"

/**
 * @brief Counter for GoatMilk in player's inventory
 * 
 */
int GoatMilk::n_goatmilk = 0;

/**
 * @brief Construct a new GoatMilk object
 * 
 */
GoatMilk::GoatMilk():Product(5, "Goat Milk"){
	n_goatmilk++;
}
