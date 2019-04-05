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
    this->x = 2;
    this->y = 7;
    this->inventoryEff = 0;
    this->inventory = new Product[10];
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
Product Player::getInventory(int i) { return this->inventory[i]; }

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
 * @brief Method for the player to move
 * 
 */
void Player::move()
{
    // if (down) this->y++;
    // else if (right) this->x++;
    // else if (up) this->y--;
    // else if (left) this->x--;
    // else (not valid) <do nothing>
}

/**
 * @brief Method for the player to talk to FarmAnimal
 * 
 */
void Player::talk()
{}

/**
 * @brief Method for the player to kill FarmAnimal
 * 
 */
void Player::kill()
{}

/**
 * @brief Method for the player to interact with FarmAnimal
 * 
 */
char Player::interact(Cell c)
{
    // switch(c.render()){
    //     case 'W': setWater(); break;
    //     case 'T': dealTruck(c); break;
    // }
    return c.render();
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
void Player::setWater() { this->water += 10; }

/**
 * @brief Method to deal with truck
 * 
 */
void Player::dealTruck(Truck* cellTruck) {
    int valid =  cellTruck->transact();
    if(valid){
        cout << "TBD!!" << endl;
    }else
        cout << "Truk belum kembali dari pabrik" << endl;
}
