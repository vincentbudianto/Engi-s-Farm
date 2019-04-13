/**
 * @file Horse.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Horse
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Horse.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Horse.cpp */

#include "Horse.hpp"
#include <string.h>
#include <random>
#include <iostream>
using namespace std;

int Horse::n_horse = 0;

/**
 * @brief Construct a new Horse object
 * 
 */
Horse::Horse(int id, int x, int y)
{
    this->id = id;
    this->voice = new char[15];
    strcpy(this->voice, "Whii!");
    this->hungry = false;
    this->x = x;
    this->y = y;
    this->tick = 0;
    this->starving = false;
    this->interactivity = true;
    n_horse++;
}

/**
 * @brief Destroy the Horse object
 * 
 */
Horse::~Horse()
{

}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Horse::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Horse::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Horse::getY()
{
    return this->y;
}

/**
 * @brief Function to get interactivity
 * 
 */
bool Horse::getInteractivity()
{
    return interactivity;
}

/**
 * @brief Function to set interactivity
 * 
 */
void Horse::setInteractivity(bool stat)
{
    interactivity = stat;
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Horse::eat()
{
    this->hungry = false;
    this->interactivity = true;
    this->tick = 0;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Horse::move(char** map, int row, int col)
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
        if (next == '-' or next == '#')
        {
            this->y++;
        }
    }
    else if (turn == 2)
    {
        if(this->x + 1 < col)
            next = map[this->y][this->x+1];
        if (next == '-' or next == '#')
        {
            this->x++;
        }
    }
    else if (turn == 3)
    {
        if(this->y - 1 >= 0)
            next = map[this->y-1][this->x];
        if (next == '-' or next == '#')
        {
            this->y--;
        }
    }
    else if (turn == 4)
    {
        if(this->x - 1 >= 0)
            next = map[this->y][this->x-1];
        if (next == '-' or next == '#')
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
bool Horse::getStarvation()
{
    return starving;
}

/**
 * @brief Method for the animal to voice
 * 
 */
void Horse::sound()
{
    cout << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Horse::render()
{
    if (this->hungry)
    {
		return 'h';
	}
	else
	{
		return 'H';
	}
}
