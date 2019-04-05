/**
 * @file Goat.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Goat
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Goat.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Goat.cpp */

#include "Goat.hpp"
#include "GoatMilk.hpp"
#include "GoatMeat.hpp"

int Goat::n_goat = 0;

/**
 * @brief Construct a new Goat object
 * 
 */
Goat::Goat(string name)
{
    this->name = name;
    this->voice = "Embe";
    this->hungry = false;
    this->umur = 50;
    this->x = 0;
    this->y = 0;
    n_goat++;
}

/**
 * @brief Destroy the Goat object
 * 
 */
Goat::~Goat()
{
    cout << this->name << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Goat::getName() const
{
    return this->name;
}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Goat::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Set the Name object
 * 
 */
void Goat::setName(string name)
{
    this->name = name;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Goat::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Goat::getY()
{
    return this->y;
}

/**
 * @brief Function to get GoatMilk
 * 
 */
void Goat::interactProduct()
{
    GoatMilk();
}

/**
 * @brief Function to get GoatMeat
 * 
 */
void Goat::killProduct()
{
    GoatMeat();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Goat::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Goat::move()
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
void Goat::sound()
{
    cout << this->name << ": " << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Goat::render()
{
    return 'G';
}