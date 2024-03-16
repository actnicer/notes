#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string Two_D_Vector_To_String(std::vector<std::vector<char>> vec){
  std::stringstream os;
  for(int i = 0; i < static_cast<int>(vec.size()); i++){
    for(int j = 0; j < static_cast<int>(vec.at(i).size()); j++){
      os << vec.at(i).at(j) << " ";
    }
    os << "\n";
  }
  return os.str();
}

// Takes inspiration from https://mathworld.wolfram.com/PrimeSpiral.html
std::vector<std::vector<char>> Counting_Spiral(int length){
  std::vector<std::vector<char>> spiralVec(length, 
    std::vector<char> (length, 'O'));
  int x = length/2;
  int y = length/2;
  int counter = 0;
  spiralVec.at(y).at(x++) = ((counter++)%10) + '0';;
  
  int lineLength = 1;
  
  while(x != length && y != length){
    for(int i = 0; i < lineLength; i++){
      spiralVec.at(y--).at(x) = ((counter++)%10) + '0';
    }
    lineLength++;
    for(int i = 0; i < lineLength; i++){
      spiralVec.at(y).at(x--) = ((counter++)%10) + '0';
    }
    for(int i = 0; i < lineLength; i++){
      spiralVec.at(y++).at(x) = ((counter++)%10) + '0';
    }
    lineLength++;
    for(int i = 0; i < lineLength; i++){
      spiralVec.at(y).at(x++) = ((counter++)%10) + '0';
    }
  }
  return spiralVec; 
}

// https://stackoverflow.com/questions/4424374/determining-if-a-number-is-prime
bool Is_Prime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

std::vector<std::vector<char>> Prime_Spiral(int length){
  std::vector<std::vector<char>> spiralVec(length, std::vector<char> (length, ' '));
  int x = length/2;
  int y = length/2;
  int dataIndex = 0;
  spiralVec[y][x++] = Is_Prime(dataIndex++) ? 'O' : ' ';

  int lineLength = 1;
  while(x != length && y != length){
    for(int i = 0; i < lineLength; i++){
      spiralVec[y--][x] = Is_Prime(dataIndex++) ? 'O' : ' ';
    }
    lineLength++;
    for(int i = 0; i < lineLength; i++){
      spiralVec[y][x--] = Is_Prime(dataIndex++) ? 'O' : ' ';
    }
    for(int i = 0; i < lineLength; i++){
      spiralVec[y++][x] = Is_Prime(dataIndex++) ? 'O' : ' ';
    }
    lineLength++;
    for(int i = 0; i < lineLength; i++){
      spiralVec[y][x++] = Is_Prime(dataIndex++) ? 'O' : ' ';
    }
  }
  return spiralVec;
}