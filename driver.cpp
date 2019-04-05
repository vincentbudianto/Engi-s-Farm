#include <iostream>

using namespace std;

#include "Renderable.hpp"
#include "Cell.hpp"
//#include "LinkedList.hpp"
#include "Player.hpp"
#include "Product.hpp"

#include "SideProduct/BeefChickenRoll.hpp"

#include "Land/Land.hpp"
#include "Land/Barn.hpp"
#include "Land/Coop.hpp"
#include "Land/Grassland.hpp"

#include "FarmProduct/Beef.hpp"
#include "FarmProduct/ChickenEgg.hpp"

#include "Facility/Facility.hpp"
#include "Facility/Mixer.hpp"

Player *p = new Player("Mr. Semalam Jadi");
Cell ***map;

void initMap(){
	map = new Cell**[10];
	for(int i = 0; i < 10; i++)
		map[i] = new Cell*[11];

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 11; j++)
			map[i][j] = new Grassland();
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			map[i][j] = new Coop();
	}

	for(int i = 0; i < 6; i++){
		for(int j = 4; j < 8; j++)
			map[i][j] = new Barn();
	}
}

void drawMap(){
	cout << endl;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 11; j++){
			cout << map[i][j]->render() << "  ";
		}
		cout << endl;
		cout << endl;
	}
	cout << endl;
}

void drawPlayerStatus(){
	cout << "Inventory" << endl;
	for(int i = 0; i < p->getInventoryEff(); i++){
		cout << "- " << p->getInventory(i).getName() << endl;
	}
	if(!p->getInventoryEff())
		cout << "- Inventory is empty" << endl;
	cout << endl;

	cout << "Money : " << p->getMoney() << endl;
	cout << endl;

	cout << "Water : " << p->getWater() << endl;
	cout << endl;	
}

int main(){

	initMap();
	drawMap();
	drawPlayerStatus();
	
	return 0;
}