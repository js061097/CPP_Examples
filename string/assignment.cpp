// string assigning
#include <iostream>
#include <string>

int main ()
{
  std::string str1, str2, str3;
  str1 = "Test string: ";   // c-string
  str2 = 'x';               // single character
  str3 = str1 + str2;       // string

  std::cout << str3  << '\n';
  return 0;
}

/*
Output:
Test string: x
*/
