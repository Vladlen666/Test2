#include"vector.h"
#include"Matrixx.h"
#include<iostream>
int main(void)
{
  
  TMatrix<int> A(3, 3, 2);
  TMatrix<int> B(3,3,3);

  std::cout << (A * B);
  
}