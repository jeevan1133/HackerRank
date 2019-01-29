
#include <algorithm>
#include <iostream>
#include <vector>

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
   vector<int> result;
   int pair = 0;
   int rem;
   for (auto it = ar.cbegin(); it != ar.cend(); it++) {
      rem = *it % 100;
      if (std::find(result.begin(),result.end(), rem) != result.end()) {
         pair += 1;
         result.erase(std::remove (result.begin(), result.end(), rem), result.end());
      }
      else {
         result.push_back(rem);
      }
   }
   return pair;
}

int main()
{
   int n = 9;
   
   vector<int> ar = {10 ,20 ,20, 10, 10, 30, 50, 10, 20};
   int result = sockMerchant(n, ar);
   std::cout << result << "\n";
   return 0;
}

