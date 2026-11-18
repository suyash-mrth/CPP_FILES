#include <bits/stdc++.h>
using namespace std;

int main () {

      fstream file;
      string line, lineN;

      file.open("Text.txt");
      file >> line;
      cout << line;
      file.close();

      file.open("Text.txt");
      file << "Changed";
      file >> lineN;
      cout << lineN;
      file.close();
}