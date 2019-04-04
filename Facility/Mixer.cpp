/**
 * @file Mixer.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Mixer
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Mixer.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Header Mixer.cpp */

#include "Mixer.hpp"
#include "../SideProduct/FailedSideProduct.hpp"
#include <string.h>
using namespace std;

/**
 * @brief Construct a new Mixer object
 * 
 */
Mixer::Mixer(){
	productResult = new FailedSideProduct();
}

/**
 * @brief Destroy the Mixer object
 * 
 */
Mixer::~Mixer(){
	
}

/**
 * @brief Method to render the Facility type character to map
 * 
 * @return char 
 */
char Mixer::render(){
	return 'M';
}

/**
 * @brief Return 1 & store ingredients if Product can be created\nReturn 0 if Product can't be createds
 * 
 * @return int 
 */
int isMixable(Product* ingredients){
	// int len = ingredients.size();
	// if(len == 2){
	// 	string ing1 = ingredients[0].getName();
	// 	string ing2 = ingredients[1].getName();
	// 	if(strcmp(ing1,"Beef") and strcmp(ing2,"Chicken Egg"))
	// 		productResult = new BeefChickenRoll();
	// 	else if(strcmp(ing1,"Beef") and strcmp(ing2,"Duck Egg"))
	// 		productResult = new BeefDuckRoll();
	// 	else if(strcmp(ing1,"Chicken Egg") and strcmp(ing2,"Cow Milk"))
	// 		productResult = new AbbayeCheese();
	// 	else if(strcmp(ing1,"Chicken Egg") and strcmp(ing2,"Goat Milk"))
	// 		productResult = new SonnetCheese();
	// 	else if(strcmp(ing1,"Chicken Egg") and strcmp(ing2,"Horse Milk"))
	// 		productResult = new JuustolipaCheese();
	// 	else if(strcmp(ing1,"Chicken Meat") and strcmp(ing2,"Duck Meat"))
	// 		productResult = new BandalSatay();
	// 	else if(strcmp(ing1,"Goat Meat") and strcmp(ing2,"Goat Meat"))
	// 		productResult = new GoatSatay();
	// 	else if(strcmp(ing1,"Mutton") and strcmp(ing2,"Mutton"))
	// 		productResult = new MuttonSatay();
	// }else if(len == 3){
	// 	string ing1 = ingredients[0].getName();
	// 	string ing2 = ingredients[1].getName();
	// 	string ing3 = ingredients[2].getName();
	// 	if(strcmp(ing1,"Chicken Egg") and strcmp(ing2,"Chicken Meat") and strcmp(ing3,"Cow Milk"))
	// 		productResult = new SweetMeatball();
	// 	else if(strcmp(ing1,"Goat Meat") and strcmp(ing2,"Horse Meat") and strcmp(ing3,"Mutton"))
	// 		productResult = new RainbowSatay();
	// }

	// return (!strcmp(productResult.getName(),"Failed Side Product"));
	return 0;
}

/**
 * @brief Return Product from mixture
 * 
 * @return int 
 */
Product* Mixer::takeSideProduct(){
	return productResult;
}
