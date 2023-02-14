#include<iostream>
#include<limits.h>
using namespace std;

// int main(){
//   int arr[] = {1,56,32,78,324,656,76,32};
//   int size = 8;
//   int maximum = INT_MIN;
//   for (int i = 0; i < size; i++)
//   {
//      if (arr[i] > maximum)
//      {
//         maximum = arr[i];
//      }
     
//   }

//   cout << " Maximum number is " << maximum <<endl;

  
// }

int main(){
  int arr[] = {1,56,32,78,324,656,76,32};
  int size = 8;
  //this is good practice for solving Maximum number
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
     if (arr[i] < min)
     {
        min = arr[i];
     }
     
  }

  cout << " minimum number is " << min <<endl;

  
}

