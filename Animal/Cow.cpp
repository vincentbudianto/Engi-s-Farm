/**
 * @file Cow.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Cow
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Cow.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Cow.cpp */

#include "Cow.hpp"
// #include "CowMilk.hpp"
// #include "Beef.hpp"
#include <string.h>
#include <random>
using namespace std;

int Cow::n_cow = 0;

/**
 * @brief Construct a new Cow object
 * 
 */
Cow::Cow(int id,int x, int y)
{
    this->id = id;
    this->voice = new char[15];
    strcpy(this->voice, "Moo");
    this->hungry = false;
    this->umur = 70;
    this->x = x;
    this->y = y;
    this->tick = 0;
    this->starving = false;
    this->intractivity = true;
    n_cow++;
}

/**
 * @brief Destroy the Cow object
 * 
 */
Cow::~Cow()
{
    delete [] voice;
    cout << "Cow " << this->id << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return char* 
 */
int Cow::getId() const
{
    return this->id;
}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Cow::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Set the Name object
 * 
 */
void Cow::setId(int id)
{
    this->id = id;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Cow::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Cow::getY()
{
    return this->y;
}

/**
 * @brief Function to get intractivity
 * 
 */
bool Cow::getInteractivity()
{
    return intractivity;
}

/**
 * @brief Function to set intractivity
 * 
 */
void Cow::setInteractivity(bool stat)
{
    intractivity = stat;
}

/**
 * @brief Function to get Beef
 * 
 */
void Cow::killProduct()
{
    // Beef();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Cow::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Cow::move(char** map, int row, int col)
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
bool Cow::getStarvation()
{
    return starving;
}

/**
 * @brief Method for the animal to voice
 * 
 */
void Cow::sound()
{
    cout << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Cow::render()
{
    if (this->hungry)
    {
		return 'q';
	}
	else
	{
		return 'Q';
	}
}
