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
 * @brief Function to get CowMilk
 * 
 */
void Cow::interactProduct()
{
    // CowMilk();
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
void Cow::move()
{
    bool valid;
    int r;

    r = (rand() % 4) + 1;

    if (r = 1)
    {
        if (valid)
        {
            this->y++;
        }
    }
    else if (r = 2)
    {
        if (valid)
        {
            this->x++;
        }
    }
    else if (r = 3)
    {
        if (valid)
        {
            this->y--;
        }
    }
    else if (r = 4)
    {
        if (valid)
        {
            this->x--;
        }
    }
}

/**
 * @brief Method for the animal to voice
 * 
 */
void Cow::sound()
{
    cout << "Chicken " << this->id << ": " << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Cow::render()
{
    return 'Q';
}