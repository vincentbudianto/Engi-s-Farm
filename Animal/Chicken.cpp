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
#include "ChickenEgg.hpp"
#include "ChickenMeat.hpp"

int Chicken::n_chicken = 0;

/**
 * @brief Construct a new Chicken object
 * 
 */
Chicken::Chicken(string name)
{
    this->name = new char[15];
    strcpy(this->name,name);
    this->voice = "Petok";
    this->hungry = false;
    this->umur = 30;
    this->x = 0;
    this->y = 0;
    n_chicken++;
}

/**
 * @brief Destroy the Chicken object
 * 
 */
Chicken::~Chicken()
{
    cout << this->name << "is dead." << endl;
}

/**
 * @brief Get the Name object
 * 
 * @return string 
 */
string Chicken::getName() const
{
    return this->name;
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
void Chicken::setName(string name)
{
    this->name = name;
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
    ChickenEgg();
}

/**
 * @brief Function to get ChickenMeat
 * 
 */
void Chicken::killProduct()
{
    ChickenMeat();
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
void Chicken::move()
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
void Chicken::sound()
{
    cout << this->name << ": " << this->voice << endl;
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
		return 'r';
	}
	else
	{
		return 'R';
	}
}
