#include <iostream>

using namespace std;
int countingValleys(int n, string s) {
   int whereAt = 0;
   int howMany = 0;
   bool uphill = false;
   bool downhill = false;
   for (auto it = s.cbegin() ; it != s.cend(); it++) {
      if (*it == 'U') {
         whereAt += 1;
         uphill = true;
         downhill = false;
      }
      else {
         whereAt -= 1;
         uphill = false;
         downhill = true;
      }
      if (uphill && !whereAt) {
         howMany += 1;
      }
   }
   return howMany;
   
}

int main(int argc, const char * argv[]) {
   string s1 = "UDDDUDUU";
   int s1n = 8;
   string s2 = "DDUDDUUDUU";
   int s2n = 10;
   int result = countingValleys(s1n, s1);
   
   cout << result << "\n";
   return 0;
}

