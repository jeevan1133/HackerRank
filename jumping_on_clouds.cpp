#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c) {
   int hops = -1;
   size_t size = c.size();    
   for (std::size_t i = 0; i < size; ++i, ++hops) {    
      if ((i+2) < size && c[i+2] == 0) {
         ++i;
      }
   }  
   return hops;
}

int main(int argc, char *argv[]) {
   vector<int> c = {0,0,0,1,0,0};
   int result = jumpingOnClouds(c);
   assert(result == 3);
   return 0;
}