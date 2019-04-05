/**
 * @file Player.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi class Player
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Player.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : File Player.cpp, realisasi kelas Player */

#include "Player.hpp"
#include "FarmProduct/ChickenMeat.hpp"
#include "FarmProduct/Beef.hpp"
#include "FarmProduct/ChickenEgg.hpp"
#include "FarmProduct/CowMilk.hpp"
#include "Facility/Truck.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief Construct a new Player object
 * 
 */
Player::Player(char* name)
{
    this->name = new char[15];
    strcpy(this->name,name);
    this->money = 500;
    this->water = 10;
    this->x = 9;
    this->y = 2;
    this->inventoryEff = 0;
    this->inventory = new Product*[10];
    this->surroundingY = 0;
    this->surroundingX = 0;
}

/**
 * @brief Destroy the Player object
 * 
 */
Player::~Player() {
    delete [] inventory;
}

/**
 * @brief Get the Name object
 * 
 * @return char* 
 */
char* Player::getName() { return this->name; }

/**
 * @brief Get the Inventory object from index i
 * 
 * @param i 
 * @return Product 
 */
Product* Player::getInventory(int i) { return this->inventory[i]; }

/**
 * @brief Get the Inventory's effective length
 * 
 * @return int 
 */
int Player::getInventoryEff() { return this->inventoryEff; }

/**
 * @brief Get the Money object
 * 
 * @return int 
 */
int Player::getMoney() { return this->money; }

/**
 * @brief Get the Water object
 * 
 * @return int 
 */
int Player::getWater() { return this->water; }

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Player::getX() { return this->x; }

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Player::getY() { return this->y; }

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Player::getSurroundingX() { return this->surroundingX; }

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Player::getSurroundingY() { return this->surroundingY; }

/**
 * @brief Method for the player to move
 * 
 */
void Player::move(string direction, char** map, int row, int col)
{
    if (direction.compare("down") == 0){
        if(this->y + 1 < row){
            if(stepable(map[this->y+1][this->x]))
                this->y++;
        }
    }else if (direction.compare("right") == 0){
        if(this->x + 1 < col){
            if(stepable(map[this->y][this->x+1]))
                this->x++;
        }
    }else if (direction.compare("up") == 0){
        if(this->y - 1 >= 0){
            if(stepable(map[this->y-1][this->x]))
                this->y--;
        }
    }else if (direction.compare("left") == 0){
        if(this->x - 1 >= 0){
            if(stepable(map[this->y][this->x-1]))
                this->x--;
        }
    }
}

/**
 * @brief Method for the player to check valid move
 * 
 * @return int
 */
int Player::stepable(char next)
{
    return (next == 'o' or next == '*' or next == 'x' or next == '@' or next == '-' or next == '#');
}

/**
 * @brief Method for the player to check the Animals
 * 
 */
int Player::isAnimal(char animal)
{
    int valid = 0;
    valid  = (animal == 'c' or animal == 'C');
    valid  = valid or (animal == 'q' or animal == 'Q');
    return valid;
}

/**
 * @brief Method for the player to check the Facility
 * 
 */
int Player::isFacility(char facility)
{
    int valid = 0;
    valid  = (facility == 'T');
    valid  = valid or (facility == 'W');
    valid  = valid or (facility == 'M');
    return valid;
}

/**
 * @brief Method for the player to see to Surrounding Animals
 * 
 */
char Player::seeAnimal(char** map, int row, int col)
{

    char temp = '.';
    char animal = temp;

    if(x + 1 < col){
        temp = map[getY()][getX()+1];
        if(isAnimal(temp)){
            animal = temp;
            this->surroundingY = getY();
            this->surroundingX = getX() + 1;
        }
    }
    if(x - 1 >= 0){
        temp = map[getY()][getX()-1];
        if(isAnimal(temp)){
            animal = temp;
            this->surroundingY = getY();
            this->surroundingX = getX() - 1;
        }
    }
    if(y + 1 < row){
        temp = map[getY()+1][getX()];
        if(isAnimal(temp)){
            animal = temp;
            this->surroundingY = getY() + 1;
            this->surroundingX = getX();
        }
    }
    if(y - 1 >= 0){
        temp = map[getY()-1][getX()];
        if(isAnimal(temp)){
            animal = temp;
            this->surroundingY = getY() - 1;
            this->surroundingX = getX();
        }
    }

    return animal;
}

/**
 * @brief Method for the player to see to Surrounding Facility
 * 
 */
char Player::seeFacility(char** map, int row, int col)
{

    char temp = '.';
    char facility = temp;

    if(x + 1 < col){
        temp = map[getY()][getX()+1];
        if(isFacility(temp))
            facility = temp;
    }
    if(x - 1 >= 0){
        temp = map[getY()][getX()-1];
        if(isFacility(temp))
            facility = temp;
    }
    if(y + 1 < row){
        temp = map[getY()+1][getX()];
        if(isFacility(temp))
            facility = temp;
    }
    if(y - 1 >= 0){
        temp = map[getY()-1][getX()];
        if(isFacility(temp))
            facility = temp;
    }

    return facility;
}

/**
 * @brief Method for the player to talk to FarmAnimal
 * 
 */
char Player::talk(char** map, int row, int col)
{
    return seeAnimal(map, row, col);
}

/**
 * @brief Method for the player to kill FarmAnimal
 * 
 */
void Player::kill(char animal){
    if(inventoryEff < 10){
        if(animal == 'c' or animal == 'C'){
            inventory[inventoryEff] = new ChickenMeat();
            inventoryEff++;
        }else if(animal == 'q' or animal == 'Q'){
            inventory[inventoryEff] = new Beef();
            inventoryEff++;
        }
    }else
        cout << "Tas Penuh" << endl;
}

/**
 * @brief Method for the player to interact with FarmAnimal
 * 
 */
void Player::interact(char subject)
{
    if(inventoryEff < 10){
        if(subject == 'c' or subject == 'C'){
            inventory[inventoryEff] = new ChickenEgg();
            inventoryEff++;
        }else if(subject == 'q' or subject == 'Q'){
            inventory[inventoryEff] = new CowMilk();
            inventoryEff++;
        }
    }else
        cout << "Tas Penuh" << endl;
}

/**
 * @brief Method for the player to grow grass
 * 
 */
void Player::grow()
{}

/**
 * @brief Method for the player to interact with mixer
 * 
 */
void Player::mix()
{}

/**
 * @brief Method to render the player to map
 * 
 * @return char 
 */
char Player::render() { return 'P'; }

/**
 * @brief Method to fill water
 * 
 */
void Player::setWater() { 
    if(this->water <= 50)
        this->water += 10;
    else
        cout << "Kapasitas wadah air penuh!" << endl;
}

/**
 * @brief Method to deal with truck
 * 
 */
void Player::dealTruck(Truck* cellTruck) {
    int valid =  cellTruck->transact();
    int profit = 0;
    if(inventoryEff != 0){
        if(valid){
            for(int i = 0; i < inventoryEff; i++){
                profit += inventory[i]->getPrice();
            }
            this->money += profit;
            cout << money << endl;
        }else
            cout << "Truck hasn't back from factory yet" << endl;
    }else
        cout << "No item to sell" << endl;
}
