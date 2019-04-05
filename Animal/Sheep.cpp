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
#include "Mutton.hpp"

int Sheep::n_sheep = 0;

/**
 * @brief Construct a new Sheep object
 * 
 */
Sheep::Sheep(string name)
{
    this->name = name;
    this->voice = "Beee";
    this->hungry = false;
    this->umur = 50;
    this->x = 0;
    this->y = 0;
    n_sheep++;
}

/**
 * @brief Destroy the Sheep object
 * 
 */
Sheep::~Sheep()
{
    cout << this->name << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Sheep::getName() const
{
    return this->name;
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
 * @brief Set the Name object
 * 
 */
void Sheep::setName(string name)
{
    this->name = name;
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
 * @brief Function to get Mutton
 * 
 */
void Sheep::killProduct()
{
    Mutton();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Sheep::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Sheep::move()
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
void Sheep::sound()
{
    cout << this->name << ": " << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Sheep::render()
{
    return 'S';
}