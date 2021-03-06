//header iterate_array function with int pointer array and size int for array size
const int ROWS{3};
const int COLS{4};
const int SECTIONS{3};
const int SEAT_ROW{5};
const int SEAT_COL{10};

void display_array(const double array[], int size);

double get_average(double array[], int size);

void display_table(const double [][COLS], int rows);

void set_sections_pricing(double [][SEAT_ROW][SEAT_COL], double price);

void display_sections(double sections [][SEAT_ROW][SEAT_COL]);