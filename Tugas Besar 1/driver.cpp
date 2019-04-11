#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

#include "Renderable.hpp"
#include "Cell.hpp"
//#include "LinkedList.hpp"
#include "Player.hpp"
#include "Product.hpp"

#include "Animal/FarmAnimal.hpp"
#include "Animal/Chicken.hpp"
#include "Animal/Duck.hpp"
#include "Animal/Cow.hpp"
#include "Animal/Goat.hpp"
#include "Animal/Horse.hpp"
#include "Animal/Sheep.hpp"

#include "Land/Land.hpp"
#include "Land/Barn.hpp"
#include "Land/Coop.hpp"
#include "Land/Grassland.hpp"

#include "Facility/Facility.hpp"
#include "Facility/Mixer.hpp"
#include "Facility/Truck.hpp"
#include "Facility/Well.hpp"

Player* p = new Player("Mr. Semalam Jadi");
char** map;
Cell*** cell;

Truck* truck;
Well* well;
Mixer* mixer;

Chicken** chickens;
Duck** ducks;
Cow** cows;
Goat** goats;
Horse** horses;
Sheep** sheeps;

char closestFacility;
char closestAnimal;
int closestY;
int closestX;

int row = 10;
int col = 11;

int chickenlen = 2;
int ducklen = 2;
int cowlen = 4;
int goatlen = 2;
int horselen = 3;
int sheeplen = 2;

int isThereAnimal = chickenlen + ducklen + goatlen + sheeplen + horselen + cowlen;

void initCell(){
	cell = new Cell**[row];
	for(int i = 0; i < row; i++)
		cell[i] = new Cell*[col];

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 11; j++)
			cell[i][j] = new Grassland();
	}

	for(int i = 0; i < 5; i++){
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
	for(int i = 0; i < chickenlen; i++)
		chickens[i] = new Chicken(i,i+1,1);

	ducks = new Duck*[ducklen];
	for(int i = 0; i < ducklen; i++)
		ducks[i] = new Duck(i,i+1,3);

	cows = new Cow*[cowlen];
	for(int i = 0; i < cowlen; i++)
		cows[i] = new Cow(i,i+2,7);

	goats = new Goat*[goatlen];
	for(int i = 0; i < goatlen; i++)
		goats[i] = new Goat(i,i+5,1);

	horses = new Horse*[horselen];
	for(int i = 0; i < horselen; i++)
		horses[i] = new Horse(i,i+7,7);

	sheeps = new Sheep*[sheeplen];
	for(int i = 0; i < sheeplen; i++)
		sheeps[i] = new Sheep(i,i+5,3);
}

void initFacility(){
	truck = new Truck();
	well = new Well();
	mixer = new Mixer();
}

void updateMap(){
	int x,y;

	map = new char*[row];
	for(int i = 0; i < row; i++)
		map[i] = new char[col];

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			map[i][j] = cell[i][j]->render();
		}
	}

	for(int i = 0; i < chickenlen; i++){
		y = chickens[i]->getY();
		x = chickens[i]->getX();
		map[y][x] = chickens[i]->render();
	}

	for(int i = 0; i < ducklen; i++){
		y = ducks[i]->getY();
		x = ducks[i]->getX();
		map[y][x] = ducks[i]->render();
	}

	for(int i = 0; i < cowlen; i++){
		y = cows[i]->getY();
		x = cows[i]->getX();
		map[y][x] = cows[i]->render();
	}

	for(int i = 0; i < goatlen; i++){
		y = goats[i]->getY();
		x = goats[i]->getX();
		map[y][x] = goats[i]->render();
	}

	for(int i = 0; i < horselen; i++){
		y = horses[i]->getY();
		x = horses[i]->getX();
		map[y][x] = horses[i]->render();
	}

	for(int i = 0; i < sheeplen; i++){
		y = sheeps[i]->getY();
		x = sheeps[i]->getX();
		map[y][x] = sheeps[i]->render();
	}

	y = truck->getY();
	x = truck->getX();
	map[y][x] = truck->render();

	y = well->getY();
	x = well->getX();
	map[y][x] = well->render();

	y = mixer->getY();
	x = mixer->getX();
	map[y][x] = mixer->render();

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

void drawPlayerStatus(){
	cout << "Inventory" << endl;
	for(int i = 0; i < p->getInventoryEff(); i++){
		cout << "- " << p->getInventory(i)->getName() << endl;
	}
	if(!p->getInventoryEff())
		cout << "- Inventory is empty" << endl;
	cout << endl;

	cout << "Money : " << p->getMoney() << endl;
	cout << endl;

	cout << "Water : " << p->getWater() << endl;
	cout << endl;

	cout << "Animals : " << isThereAnimal << endl;
	cout << endl;
}

void makeTalk(){
	if(closestAnimal == 'c' or closestAnimal == 'C'){
		chickens[0]->sound();
	}else if(closestAnimal == 'd' or closestAnimal == 'D'){
		ducks[0]->sound();
	}else if(closestAnimal == 'q' or closestAnimal == 'Q'){
		cows[0]->sound();
	}else if(closestAnimal == 'g' or closestAnimal == 'G'){
		goats[0]->sound();
	}else if(closestAnimal == 'h' or closestAnimal == 'H'){
		horses[0]->sound();
	}else if(closestAnimal == 's' or closestAnimal == 'S'){
		sheeps[0]->sound();
	}
}

void killAnimal(){
	int id = -1;
	if(closestAnimal == 'c' or closestAnimal == 'C'){
		for(int i = 0; i < chickenlen; i++){
			if(chickens[i]->getY() == closestY and chickens[i]->getX() == closestX){
				id = i;
			} 
		}
		
		if(chickenlen > 1){
			chickens[id] = chickens[chickenlen-1];
		}
		chickens[chickenlen-1] = NULL;
		chickenlen--;
	}else if(closestAnimal == 'd' or closestAnimal == 'D'){
		for(int i = 0; i < ducklen; i++){
			if(ducks[i]->getY() == closestY and ducks[i]->getX() == closestX)
				id = i;
		}

		if(ducklen > 1){
			ducks[id] = ducks[ducklen-1];
		}
		ducks[ducklen-1] = NULL;
		ducklen--;
	}else if(closestAnimal == 'q' or closestAnimal == 'Q'){
		for(int i = 0; i < cowlen; i++){
			if(cows[i]->getY() == closestY and cows[i]->getX() == closestX)
				id = i;
		}

		if(cowlen > 1){
			cows[id] = cows[cowlen-1];
		}
		cows[cowlen-1] = NULL;
		cowlen--;
	}else if(closestAnimal == 'g' or closestAnimal == 'G'){
		for(int i = 0; i < goatlen; i++){
			if(goats[i]->getY() == closestY and goats[i]->getX() == closestX)
				id = i;
		}

		if(goatlen > 1){
			goats[id] = goats[goatlen-1];
		}
		goats[goatlen-1] = NULL;
		goatlen--;
	}else if(closestAnimal == 'h' or closestAnimal == 'H'){
		for(int i = 0; i < horselen; i++){
			if(horses[i]->getY() == closestY and horses[i]->getX() == closestX)
				id = i;
		}

		if(horselen > 1){
			horses[id] = horses[horselen-1];
		}
		horses[horselen-1] = NULL;
		horselen--;
	}else if(closestAnimal == 's' or closestAnimal == 'S'){
		for(int i = 0; i < sheeplen; i++){
			if(sheeps[i]->getY() == closestY and sheeps[i]->getX() == closestX)
				id = i;
		}

		if(sheeplen > 1){
			sheeps[id] = sheeps[sheeplen-1];
		}
		sheeps[sheeplen-1] = NULL;
		sheeplen--;
	}
}

void makeAInteraction(){
	int id = -1;
	if(closestAnimal == 'c' or closestAnimal == 'C'){
		for(int i = 0; i < chickenlen; i++){
			if(chickens[i]->getY() == closestY and chickens[i]->getX() == closestX)
				id = i;
		}

		if(chickens[id]->getInteractivity()){
			chickens[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}

	}else if(closestAnimal == 'd' or closestAnimal == 'D'){
		for(int i = 0; i < ducklen; i++){
			if(ducks[i]->getY() == closestY and ducks[i]->getX() == closestX)
				id = i;
		}

		if(ducks[id]->getInteractivity()){
			ducks[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}
	}else if(closestAnimal == 'q' or closestAnimal == 'Q'){
		for(int i = 0; i < cowlen; i++){
			if(cows[i]->getY() == closestY and cows[i]->getX() == closestX)
				id = i;
		}

		if(cows[id]->getInteractivity()){
			cows[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}
	}else if(closestAnimal == 'g' or closestAnimal == 'G'){
		for(int i = 0; i < goatlen; i++){
			if(goats[i]->getY() == closestY and goats[i]->getX() == closestX)
				id = i;
		}

		if(goats[id]->getInteractivity()){
			goats[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}
	}else if(closestAnimal == 'h' or closestAnimal == 'H'){
		for(int i = 0; i < horselen; i++){
			if(horses[i]->getY() == closestY and horses[i]->getX() == closestX)
				id = i;
		}

		if(horses[id]->getInteractivity()){
			horses[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}
	}else if(closestAnimal == 's' or closestAnimal == 'S'){
		for(int i = 0; i < sheeplen; i++){
			if(sheeps[i]->getY() == closestY and sheeps[i]->getX() == closestX)
				id = i;
		}

		if(sheeps[id]->getInteractivity()){
			sheeps[id]->setInteractivity(false);
			p->interact(closestAnimal);
		}
	}
}

void makeFInteraction(){
	if(closestFacility == 'T'){
		p->dealTruck(truck);
	}else if(closestFacility == 'W'){
		p->setWater();
	}else if(closestFacility == 'M'){
		p->mix();
	}
}

void moveEntity(){
	for(int i = 0; i < chickenlen; i++){
		chickens[i]->move(map,row,col);
		if(chickens[i]->getHungry()){
			int y = chickens[i]->getY();
			int x = chickens[i]->getX();
			if(cell[y][x]->isGrass()){
				chickens[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(chickens[i]->getStarvation()){
			closestAnimal = 'c';
			closestY = chickens[i]->getY();
			closestX = chickens[i]->getX();
			killAnimal();
		}
		updateMap();
	}
	for(int i = 0; i < ducklen; i++){
		ducks[i]->move(map,row,col);
		if(ducks[i]->getHungry()){
			int y = ducks[i]->getY();
			int x = ducks[i]->getX();
			if(cell[y][x]->isGrass()){
				ducks[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(ducks[i]->getStarvation()){
			closestAnimal = 'd';
			closestY = ducks[i]->getY();
			closestX = ducks[i]->getX();
			killAnimal();
		}
		updateMap();
	}
	for(int i = 0; i < cowlen; i++){
		cows[i]->move(map,row,col);
		if(cows[i]->getHungry()){
			int y = cows[i]->getY();
			int x = cows[i]->getX();
			if(cell[y][x]->isGrass()){
				cows[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(cows[i]->getStarvation()){
			closestAnimal = 'q';
			closestY = cows[i]->getY();
			closestX = cows[i]->getX();
			killAnimal();
		}
		updateMap();
	}
	for(int i = 0; i < goatlen; i++){
		goats[i]->move(map,row,col);
		if(goats[i]->getHungry()){
			int y = goats[i]->getY();
			int x = goats[i]->getX();
			if(cell[y][x]->isGrass()){
				goats[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(goats[i]->getStarvation()){
			closestAnimal = 'g';
			closestY = goats[i]->getY();
			closestX = goats[i]->getX();
			killAnimal();
		}
		updateMap();
	}
	for(int i = 0; i < horselen; i++){
		horses[i]->move(map,row,col);
		if(horses[i]->getHungry()){
			int y = horses[i]->getY();
			int x = horses[i]->getX();
			if(cell[y][x]->isGrass()){
				horses[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(horses[i]->getStarvation()){
			closestAnimal = 'h';
			closestY = horses[i]->getY();
			closestX = horses[i]->getX();
			killAnimal();
		}
		updateMap();
	}
	for(int i = 0; i < sheeplen; i++){
		sheeps[i]->move(map,row,col);
		if(sheeps[i]->getHungry()){
			int y = sheeps[i]->getY();
			int x = sheeps[i]->getX();
			if(cell[y][x]->isGrass()){
				sheeps[i]->eat();
				cell[y][x]->setGrassStatus(0);
			}
		}
		if(sheeps[i]->getStarvation()){
			closestAnimal = 's';
			closestY = sheeps[i]->getY();
			closestX = sheeps[i]->getX();
			killAnimal();
		}
		updateMap();
	}
}

void execute(string command){
	if(!command.compare("left") or !command.compare("right") or !command.compare("up") or  !command.compare("down")){
		p->move(command,map,row,col);
	}else if(!command.compare("talk")){
		closestAnimal = p->talk(map,row,col);
		closestY = p->getSurroundingY();
		closestX = p->getSurroundingX();
		if(closestAnimal == '.'){
			cout << "No Animals" << endl;
		}else{
			makeTalk();
		}
		usleep(2000000);
	}else if(!command.compare("kill")){
		closestAnimal = p->seeAnimal(map,row,col);
		closestY = p->getSurroundingY();
		closestX = p->getSurroundingX();
		if(closestAnimal == '.'){
			cout << "No Animals" << endl;
		}else{
			killAnimal();
			p->kill(closestAnimal);
		}
		usleep(2000000);
	}else if(!command.compare("interact")){
		closestAnimal = p->seeAnimal(map,row,col);
		closestY = p->getSurroundingY();
		closestX = p->getSurroundingX();
		if(closestAnimal == '.'){
			closestFacility = p->seeFacility(map,row,col);
			if(closestFacility == '.')
				cout << "Nothing to interact" << endl;
			else
				makeFInteraction();
		}else{
			makeAInteraction();
		}
		usleep(2000000);
	}else if(!command.compare("grow")){
		p->grow();
		cell[p->getY()][p->getX()]->setGrassStatus(1);
	}else if(!command.compare("jump")){
		int y,x;
		cout << "X: "; 
		cin >> x;
		cout << "Y: ";
		cin >> y;
		p->jump(y,x);
	}
}

int main(){
	system("clear");
	string command;
	initCell();
	initFacility();
	initAnimal();

	while(isThereAnimal != 0){
		updateMap();
		drawMap();
		drawPlayerStatus();

		cout << "Command: ";
		cin >> command;
		execute(command);
		
		moveEntity();
		isThereAnimal = chickenlen + ducklen + goatlen + sheeplen + horselen + cowlen;
		system("clear");
	}


	int i;
	cout << "Unfortunately all animals are dead.." << endl;
	cout << "The End" << endl;
	cin >> i; 

	return 0;
}