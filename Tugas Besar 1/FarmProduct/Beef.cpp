#include "Beef.hpp"

/**
 * @brief initiate n_beefchickenroll
 * 
 */
int Beef::n_beef = 0;

/**
 * @brief Construct a new Beef object
 * 
 */
Beef::Beef():Product(10, "Beef"){
	n_beef++;
}

/**
 * @brief Destroy the Beef object
 * 
 */
Beef::~Beef(){
	n_beef--;
}