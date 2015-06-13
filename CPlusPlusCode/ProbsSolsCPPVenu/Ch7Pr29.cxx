
#include<algorithm>
#include<iostream>
#include<vector>

void print(int n) {
  std::cout << n << " ";
}

int main () {
  std::vector<int> ivec;

  for (int i = 0; i < 5; ++i) {
    ivec.push_back(i*i);
  }

  std::for_each(ivec.begin(), ivec.end(), print);
  std::cout << std::endl;
  
  return 0;
}
