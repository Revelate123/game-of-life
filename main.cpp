#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>


auto init_board(int num_rows, int num_cols) -> void {
    auto board = std::vector<std::vector<int>>(num_rows, std::vector<int>(num_cols));
    for (auto& row: board) {
	for (auto& cell: row) {
	    auto x = rand();
	    x > RAND_MAX /2 ? cell = 1 : cell = 0;
	    std::cout << cell << ", ";
	}
	std::cout << "\n";
    }
}

/*
* Each cell will update its value based on predifined rules.
* The original rules are:
* 1. Any cell with fewer than 2 neighbours dies by underpopulation 
* 2. Any cell with 2 or 3 neighbours lives
* 3. Any cell with more than 3 neighbours dies.
* 4. Any cell with exactly 3 neighbours is reborn.
*
* The new rules are:
* 1. A cell has a range determined by its value.
* 2. A cell may steal from another cells value if that cell is within its range but 
* the reverse is not true.
* 3. A cell has a lifespan which is modified by its value. Once its lifespan expires, 
* the cell dies.
* 4. New cells may be born if they are surrounded on all four sides. Their value will 
* be the average of the four surrounding cells. 
*/
auto cell_life() -> void {
    // Check bounds

}

auto main() -> int {
    auto num_rows = 10;
    auto num_cols = 10;
    init_board(num_rows, num_cols);
    for (auto i = 0; i < num_rows * num_cols; ++i) {
	cell_life();
    }
    return 0;
}
