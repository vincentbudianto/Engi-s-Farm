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
    this->name = new char[15];
    strcpy(this->name,name);
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
void Duck::move(char** map, int row, int col)
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

    if(tick == 5){
        hungry = true;
    }else if(tick >= 10 and hungry){
        starving = true;
    }
    tick++;
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
    if (this->hungry)
    {
		return 'd';
	}
	else
	{
		return 'D';
	}
}
