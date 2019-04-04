#include "BeefChickenRoll.hpp"

/**
 * @brief initiate n_beefchickenroll
 * 
 */
int BeefChickenRoll::n_beefchickenroll = 0;

/**
 * @brief Construct a new BeefChickenRoll object
 * 
 */
BeefChickenRoll::BeefChickenRoll():Product(50, "Beff Chicken Roll"){
	n_beefchickenroll++;
}

/**
 * @brief Destroy the Beef Chicken Roll object
 * 
 */
BeefChickenRoll::~BeefChickenRoll(){
	n_beefchickenroll--;
}
