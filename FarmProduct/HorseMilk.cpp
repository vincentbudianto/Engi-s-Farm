#include "HorseMilk.hpp"

/**
 * @brief initiate n_horsemilk
 * 
 */
int HorseMilk::n_horsemilk = 0;

/**
 * @brief Construct a new HorseMilk object
 * 
 */
HorseMilk::HorseMilk():Product(5, "Horse Milk"){
	n_horsemilk++;
}
