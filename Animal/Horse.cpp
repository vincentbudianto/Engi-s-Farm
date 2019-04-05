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
#include "HorseMilk.hpp"

int Horse::n_horse = 0;

/**
 * @brief Construct a new Horse object
 * 
 */
Horse::Horse(string name)
{
    this->name = name;
    this->voice = "Whinny";
    this->hungry = false;
    this->umur = 70;
    this->x = 0;
    this->y = 0;
    n_horse++;
}

/**
 * @brief Destroy the Horse object
 * 
 */
Horse::~Horse()
{
    cout << this->name << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Horse::getName() const
{
    return this->name;
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
 * @brief Set the Name object
 * 
 */
void Horse::setName(string name)
{
    this->name = name;
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
 * @brief Function to get HorseMilk
 * 
 */
void Horse::interactProduct()
{
    HorseMilk();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Horse::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Horse::move()
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
void Horse::sound()
{
    cout << this->name << ": " << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Horse::render()
{
    return 'H';
}