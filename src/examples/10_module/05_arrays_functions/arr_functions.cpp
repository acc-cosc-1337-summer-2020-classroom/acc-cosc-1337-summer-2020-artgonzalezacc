//
#include<iostream>
#include<iomanip>
#include "arr_functions.h"
//define iterate_array and loop through with ++ increment
using std::cout;

void display_array(const double array[], int size)
{
    for(int i=0; i < size; ++i)
    {
        cout<<array[i]<<"\n";
    }
}

double get_average(double array[], int size)
{
    auto sum{0.0};

    for(int i=0; i < size; ++i)
    {
        sum += array[i];
    }

    return sum / size;
}

void display_table(const double table [][COLS], int rows)
{
    for(int r=0; r< rows; ++r)
    {
        for (int c=0; c< COLS; ++c)
        {
            cout<<std::setw(5)<<table[r][c];
        }

        cout<<"\n";
    }
}

void set_sections_pricing(double sections [][SEAT_ROW][SEAT_COL], double price)
{
   	for(int s=0; s< SECTIONS; ++s)
	{
		for(int r=0; r < SEAT_ROW; ++r)
		{
			for(int c=0; c < SEAT_COL; ++c)
			{
				sections[s][r][c] = price * r+1;
			}
		}
	}

}

void display_sections(double sections [][SEAT_ROW][SEAT_COL])
{
   	for(int s=0; s< SECTIONS; ++s)
	{
		std::cout<<"Section: "<<s+1 <<"\n";
		for(int r=0; r < SEAT_ROW; ++r)
		{
			std::cout<<"Row: "<<r+1<<" ";
			for(int c=0; c < SEAT_COL; ++c)
			{
				std::cout<<std::setw(5)<<sections[s][r][c];
			}
			std::cout<<"\n";
		}
		std::cout<<"\n\n";
	}

}