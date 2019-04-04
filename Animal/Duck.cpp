/**
 * @file Duck.cpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi implementasi class Duck
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : Duck.cpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Implementasi Duck.cpp */

#include "Duck.hpp"
#include "DuckEgg.hpp"
#include "DuckMeat.hpp"

int Duck::n_duck = 0;

/**
 * @brief Construct a new Duck object
 * 
 */
Duck::Duck(string name)
{
    this->name = name;
    this->voice = "Kwek";
    this->hungry = false;
    this->umur = 30;
    this->x = 0;
    this->y = 0;
    n_duck++;
}

/**
 * @brief Destroy the Duck object
 * 
 */
Duck::~Duck()
{
    cout << this->name << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Duck::getName() const
{
    return this->name;
}

/**
 * @brief Get the Hungry object
 * 
 * @return boolean 
 */
bool Duck::getHungry() const
{
    return this->hungry;
}

/**
 * @brief Set the Name object
 * 
 */
void Duck::setName(string name)
{
    this->name = name;
}

/**
 * @brief Get the X object
 * 
 * @return int 
 */
int Duck::getX()
{
    return this->x;
}

/**
 * @brief Get the Y object
 * 
 * @return int 
 */
int Duck::getY()
{
    return this->y;
}

/**
 * @brief Function to get DuckEgg
 * 
 */
void Duck::interactProduct()
{
    DuckEgg();
}

/**
 * @brief Function to get DuckMeat
 * 
 */
void Duck::killProduct()
{
    DuckMeat();
}

/**
 * @brief Method for the animal to eat
 * 
 */
void Duck::eat()
{
    this->hungry = false;
}

/**
 * @brief Method for the animal to move
 * 
 */
void Duck::move()
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
void Duck::sound()
{
    cout << this->name << ": " << this->voice << endl;
}

/**
 * @brief Method to render the animal to map
 * 
 * @return char 
 */
char Duck::render()
{
    return 'd';
}