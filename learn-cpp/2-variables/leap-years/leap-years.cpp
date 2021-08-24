#include <iostream>

int main() {
  int year;
  std::cin >> year;

  if(year > 9999 || year < 1000)
    std::cout << "Year should be a four digits number";
  else
    if(year % 4 == 0 && (year % 400 == 0 || yaer % 100 != 0))
      std::cout << "It's a leap year";
    else
      std::cout << "It's a not leap year";
}
