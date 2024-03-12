// Program takes in input from user in form:
// ci ce
// ri re
// which denote the inital and end values of rows and columns
// which are used to create a times table 

#include <iostream>
#include <vector>

int main() {
  // declare vector and variables
  std::vector<int> cols_rows;
  int col_str, col_end, row_str, row_end;

  // collect input and push into vector
  while (std::cin >> col_str >> col_end >> row_str >> row_end) {
    cols_rows.push_back(col_str);
    cols_rows.push_back(col_end);
    cols_rows.push_back(row_str);
    cols_rows.push_back(row_end);
  }
  
  // create loop to output times table vector indexes
  while (cols_rows.at(2) <= cols_rows.at(3)) {
    // use variables to set bounds of while loops
    int current_col = cols_rows.at(0);
    int multiple = current_col;

    // run while loop to output row of Xtable
    while (current_col <= cols_rows.at(1)) {
      // calculate product of current space of table
      int product = multiple * cols_rows.at(2);

      std::cout << cols_rows.at(2) << "*" << multiple
                << "=" << product; 
      multiple++;

      // print comma if not at the end of row
      if (current_col != cols_rows.at(1)) {
        std::cout << ", ";
      } else if (current_col == cols_rows.at(1) 
                && cols_rows.at(2) != cols_rows.at(3)) {
        std::cout << "\n";
      }
      current_col++;
    }
    // progressively update row value
    cols_rows.at(2)++;
  }

  std::cout << std::endl;

  return 0;
}