#include "CowMilk.hpp"

/**
 * @brief Counter for CowMilk in player's inventory
 * 
 */
int CowMilk::n_cowmilk = 0;

/**
 * @brief Construct a new CowMilk object
 * 
 */
CowMilk::CowMilk():Product(5, "Cow Milk"){
	n_cowmilk++;
}
