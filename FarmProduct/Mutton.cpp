#include "Mutton.hpp"

/**
 * @brief initiate n_mutton
 * 
 */
int Mutton::n_mutton = 0;

/**
 * @brief Construct a new Mutton object
 * 
 */
Mutton::Mutton():Product(15, "Mutton"){
	n_mutton++;
}
