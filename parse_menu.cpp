#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream menu_file;
  int menu_count = 3;

  // Uncomment the code below if you dont know how many menu
  // items there are before reading them into the string array
  /*
  menu_file.open("menu_data");

  if(!menu_file) {
    cout << "Error" << endl;
    return 1;
  }

  int count = 0;
  string temp;
  while(getline(menu_file, temp))
    count++;
  cout << count << endl;
  menu_count = count; 
  menu_file.close();
  */
  menu_file.open("menu_data");

  if (!menu_file)
  {
    cout << "Error" << endl;
    return 1;
  }

  string menu[menu_count];
  for (int i = 0; i < menu_count && getline(menu_file, menu[i]); i++)
    ;

  menu_file.close();

  return 0;
}