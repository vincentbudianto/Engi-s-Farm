#include "FailedSideProduct.hpp"

/**
 * @brief initiate n_failedsideproduct
 * 
 */
int FailedSideProduct::n_failedsideproduct = 0;

/**
 * @brief Construct a new FailedSideProduct object
 * 
 */
FailedSideProduct::FailedSideProduct():Product(0, "Failed Side Product"){
	n_failedsideproduct++;
}

/**
 * @brief Destroy the Beef Chicken Roll object
 * 
 */
FailedSideProduct::~FailedSideProduct(){
	n_failedsideproduct--;
}
