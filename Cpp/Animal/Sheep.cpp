/**
 * @file Sheep.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Sheep
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Sheep.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Sheep.cpp */

#include "Sheep.hpp"
#include <string.h>
#include <random>
#include <iostream>
using namespace std;

int Sheep::n_sheep = 0;

/**
 * @brief Construct a new Sheep object
 * 
 */
Sheep::Sheep(int id, int x, int y)
{
    this->id = id;
    this->voice = new char[15];
    strcpy(this->voice, "Bee..");
    this->hungry = false;
    this->x = x;
    this->y = y;
    this->tick = 0;
    this->starving = false;
    this->interactivity = true;
    n_sheep++;
}

/**
 * @brief Destroy the Sheep object
 * 
 */
Sheep::~Sheep()
{

}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Sheep::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Sheep::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Sheep::getY()
{
    return this->y;
}

/**
 * @brief Function to get interactivity
 * 
 */
bool Sheep::getInteractivity()
{
    return interactivity;
}

/**
 * @brief Function to set interactivity
 * 
 */
void Sheep::setInteractivity(bool stat)
{
    interactivity = stat;
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Sheep::eat()
{
    this->hungry = false;
    this->interactivity = true;
    this->tick = 0;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Sheep::move(char** map, int row, int col)
{
    int turn;
    char next = '.';

    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1,4);
    turn = dist6(rng);

    if (turn == 1)
    {
        if(this->y + 1 < row)
            next = map[this->y+1][this->x];
        if (next == 'x' or next == '@')
        {
            this->y++;
        }
    }
    else if (turn == 2)
    {
        if(this->x + 1 < col)
            next = map[this->y][this->x+1];
        if (next == 'x' or next == '@')
        {
            this->x++;
        }
    }
    else if (turn == 3)
    {
        if(this->y - 1 >= 0)
            next = map[this->y-1][this->x];
        if (next == 'x' or next == '@')
        {
            this->y--;
        }
    }
    else if (turn == 4)
    {
        if(this->x - 1 >= 0)
            next = map[this->y][this->x-1];
        if (next == 'x' or next == '@')
        {
            this->x--;
        }
    }

    if(tick == 5){
        hungry = true;
    }else if(tick >= 10 and hungry){
        starving = true;
    }
    tick++;
}

/**
 * @brief Method to get starvation status
 * 
 */
bool Sheep::getStarvation()
{
    return starving;
}

/**
 * @brief Method for the animal to voice
 * 
 */
void Sheep::sound()
{
    cout << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Sheep::render()
{
    if (this->hungry)
    {
		return 's';
	}
	else
	{
		return 'S';
	}
}
