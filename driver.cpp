#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

#include "Renderable.hpp"
#include "Cell.hpp"
//#include "LinkedList.hpp"
#include "Player.hpp"
#include "Product.hpp"

#include "SideProduct/BeefChickenRoll.hpp"

#include "Animal/FarmAnimal.hpp"
#include "Animal/Chicken.hpp"
#include "Animal/Cow.hpp"

#include "Land/Land.hpp"
#include "Land/Barn.hpp"
#include "Land/Coop.hpp"
#include "Land/Grassland.hpp"

#include "FarmProduct/Beef.hpp"
#include "FarmProduct/ChickenEgg.hpp"

#include "Facility/Facility.hpp"
#include "Facility/Mixer.hpp"

Player* p = new Player("Mr. Semalam Jadi");
char** map;
Cell*** cell;
Chicken** chickens;
Cow** cows;

char closestAnimal;
int animalY;
int animalX;

int row = 10;
int col = 11;

int chickenlen = 2;
int cowlen = 2;

void initCell(){
	cell = new Cell**[row];
	for(int i = 0; i < row; i++)
		cell[i] = new Cell*[col];

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 11; j++)
			cell[i][j] = new Grassland();
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			cell[i][j] = new Coop();
	}

	for(int i = 0; i < 6; i++){
		for(int j = 4; j < 8; j++)
			cell[i][j] = new Barn();
	}
}

void initAnimal(){
	chickens = new Chicken*[chickenlen];
	for(int i = 0; i < chickenlen; i++){
		chickens[i] = new Chicken(i,i+1,0);
	}
	cows = new Cow*[cowlen];
	for(int i = 0; i < cowlen; i++)
		cows[i] = new Cow(i,i+4,0);
}

void updateMap(){
	map = new char*[row];
	for(int i = 0; i < row; i++)
		map[i] = new char[col];

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			map[i][j] = cell[i][j]->render();
		}
	}

	for(int i = 0; i < chickenlen; i++){
		int y = chickens[i]->getY();
		int x = chickens[i]->getX();
		map[y][x] = chickens[i]->render();
	}

	for(int i = 0; i < cowlen; i++){
		int y = cows[i]->getY();
		int x = cows[i]->getX();
		map[y][x] = cows[i]->render();
	}

	map[p->getY()][p->getX()] = p->render();

}

void drawMap(){
	cout << endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << map[i][j] << "  ";
		}
		cout << endl;
		cout << endl;
	}
	cout << endl;
}

void moveEntity(){
	for(int i = 0; i < chickenlen; i++){
		chickens[i]->move(map,row,col);
		updateMap();
	}
	for(int i = 0; i < cowlen; i++){
		cows[i]->move(map,row,col);
		updateMap();
	}
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

void makeTalk(){
	if(closestAnimal == 'c' or closestAnimal == 'C'){
		chickens[0]->sound();
	}else if(closestAnimal == 'q' or closestAnimal == 'Q'){
		cows[0]->sound();
	}
}

void execute(string command){
	if(!command.compare("left") or !command.compare("right") or !command.compare("up") or  !command.compare("down")){
		p->move(command,map,row,col);
	}else if(!command.compare("talk")){
		closestAnimal = p->talk(map,row,col);
		animalX = p->getSurroundingY();
		animalY = p->getSurroundingX();
		if(closestAnimal == '.'){
			cout << "No Animals" << endl;
		}else{
			makeTalk();
		}
		usleep(2000000);
	}
}

int main(){
	string command;
	initCell();
	initAnimal();

	while(1){
		updateMap();
		drawMap();
		drawPlayerStatus();

		cout << "Command: ";
		cin >> command;
		execute(command);

		moveEntity();

		system("clear");
	}

	return 0;
}