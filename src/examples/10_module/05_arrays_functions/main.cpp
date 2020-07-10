#include "arr_functions.h"
#include <iostream>
#include<iomanip>

using std::cout;

typedef double scores[3];//list of three scores

int main() 
{
	scores grades{75, 85, 95};
	//int numbers[]{50, 60, 90};
	//display_array(grades, 3);

	//created and initialized a two dimensional array
	double table[ROWS][COLS]{
								/*0*/{6.5,3.6,4.5,7.7},
								/*1*/{9.1,8.2,3.9,4.9},
								{8.5,5.6,5.4,2.7}

							};
	//access one element
	//cout<<table[1][2]<<"\n";
	//cout<<table[0][0]<<"\n";

	//display_table(table, ROWS);

	//create empty array
	int times_table[10][10];

	//populate or assign a value to each element
	for(int r=0; r < 10; ++r)
	{
		for(int c=0; c< 10; ++c)
		{
			times_table[r][c] = (r +1) * (c+1);
		}
	}

	//display the times table
	for(int r=0; r < 10; ++r)
	{
		for(int c=0; c< 10; ++c)
		{
			//cout<<std::setw(5)<<times_table[r][c];
		}
		cout<<"\n";
	}

	//const int SECTIONS=3, SEAT_ROW = 10, SEAT_COL = 10;
	double sections[SECTIONS][SEAT_ROW][SEAT_COL];

	double price{10};
	set_sections_pricing(sections, price);

	display_sections(sections);

	return 0;
}