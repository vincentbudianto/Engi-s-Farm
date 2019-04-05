/**
 * @file Chicken.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Chicken
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Chicken.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Chicken.cpp */

#include "Chicken.hpp"
// #include "ChickenEgg.hpp"
// #include "ChickenMeat.hpp"
#include <string.h>
#include <random>
#include <iostream>
using namespace std;

int Chicken::n_chicken = 0;

/**
 * @brief Construct a new Chicken object
 * 
 */
Chicken::Chicken(int id, int x, int y)
{
    this->id = id;
    this->voice = new char[15];
    strcpy(this->voice, "Petok");
    this->hungry = false;
    this->umur = 30;
    this->x = x;
    this->y = y;
    n_chicken++;
}

/**
 * @brief Destroy the Chicken object
 * 
 */
Chicken::~Chicken()
{
    delete [] voice;
    cout << "Chicken " << this->id << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return char* 
 */
int Chicken::getId() const
{
    return this->id;
}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Chicken::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Set the Name object
 * 
 */
void Chicken::setId(int id)
{
    this->id = id;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Chicken::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Chicken::getY()
{
    return this->y;
}

/**
 * @brief Function to get ChickenEgg
 * 
 */
void Chicken::interactProduct()
{
    // ChickenEgg();
}

/**
 * @brief Function to get ChickenMeat
 * 
 */
void Chicken::killProduct()
{
    // ChickenMeat();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Chicken::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Chicken::move(char** map, int row, int col)
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
        if (next == 'o' or next == '*')
        {
            this->y++;
        }
    }
    else if (turn == 2)
    {
        if(this->x + 1 < col)
            next = map[this->y][this->x+1];
        if (next == 'o' or next == '*')
        {
            this->x++;
        }
    }
    else if (turn == 3)
    {
        if(this->y - 1 >= 0)
            next = map[this->y-1][this->x];
        if (next == 'o' or next == '*')
        {
            this->y--;
        }
    }
    else if (turn == 4)
    {
        if(this->x - 1 >= 0)
            next = map[this->y][this->x-1];
        if (next == 'o' or next == '*')
        {
            this->x--;
        }
    }
}

/**
 * @brief Method for the animal to voice
 * 
 */
void Chicken::sound()
{
    cout << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Chicken::render()
{
    if (this->hungry)
    {
		return 'c';
	}
	else
	{
		return 'C';
	}
}
