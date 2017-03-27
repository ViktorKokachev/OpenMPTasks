#include <iostream>


int main()
{
	int A[100];
	int B[100]
  
  #pragma omp parallel
		#pragma omp parallel for
		(int i=0; i<100;i++)
		  {
			A[i]=i;
			std::cout << A[i] << std::endl;
		  }
  
}