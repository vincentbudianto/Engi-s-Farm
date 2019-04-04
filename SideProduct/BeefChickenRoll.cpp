#include "BeffChickenRoll.hpp"

/**
 * @brief Construct a new BeffChickenRoll object
 * 
 */
BeffChickenRoll::BeffChickenRoll():Product(50, "Beff Chicken Roll"){
	n_beefchickenroll++;
}

/**
 * @brief Destroy the Beef Chicken Roll object
 * 
 */
BeffChickenRoll::~BeefChickenRoll(){
	n_beefchickenroll--;
}
