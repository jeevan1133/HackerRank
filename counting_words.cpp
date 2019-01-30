#include <iostream>
#include <algorithm>

long repeatedString(std::string s, long n) {
   long count = 0;
   count = std::count(s.begin(), s.end(), 'a');

   long howMany = n / s.length() ;
   count *= howMany;
   long rem = n % s.length();
   s = s.substr(0, rem);
   count += std::count(s.begin(), s.end(), 'a');
   return count;
}

int main(int argc, char *argv[]) {
   std::string s = "a";
   long n = 1000000000000;

   std::cout << repeatedString(s, n) <<"\n";
   return 0;
}
