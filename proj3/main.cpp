//
//  main.cpp
//  proj3
//
//  Created by Lance Cole on 4/08/25.
//

#include "Grammer.hpp"
#include "MemoryManager.hpp"

#include <fstream>
#include <string>

using namespace std;

int main() {
  cout << "Please enter the initial freelist (heap) size: ";
  string free_list_size;
  getline(cin, free_list_size);
  cout << "Please enter the name of an input file: ";
  string filename;
  getline(cin, filename);

  ifstream ifile(filename);
  if (!ifile) {
    cerr << "ERROR: Could not open file: " << filename << endl;
    return -1;
  }

  cout << "========================" << endl;

}
