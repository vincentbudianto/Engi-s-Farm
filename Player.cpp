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

/**
 * @brief Construct a new Player object
 * 
 */
Player::Player(string nama)
{
    this->name = nama;
    this->inventory = new string[10]; /* Starting inventory cap */
    this->money = 500; /* Starting money */
    this->water = 10; /* Starting water amount */
    this->x = 0; /* Start location */
    this->y = 0;
}

/**
 * @brief Destroy the Player object
 * 
 */
Player::~Player() {}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Player::getName() { return this->name; }

/**
 * @brief Get the Inventory object from index i
 * 
 * @param i 
 * @return string 
 */
string Player::getInventory(int i) { return this->inventory[i]; }

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
void Player::interact()
{}

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