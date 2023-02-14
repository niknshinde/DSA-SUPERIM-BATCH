#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int>crr;
    int arr[] = {1,2,4,6,7};
    int sizeARR = 5;
    int brr[] = {8,4,3};
    int sizeBRR = 3;

    //intersection logic for handdling dublicat elements
    for (int i = 0; i < sizeARR; i++)
    {
        for (int j = 0; j < sizeBRR; j++)
        {
            if(arr[i] == brr[j]){
                brr[j] = INT_MIN;
            }
        }
        
    }
    //pushing elements of arr
    for (int i = 0; i <sizeARR; i++)
    {
         crr.push_back(arr[i]);
    }
    //pushing elements of brr and when element with value INT_MIN come just ignore it(don't take it)
     for (int j = 0; j < sizeBRR; j++)
    {    
     if(brr[j] != INT_MIN)
         crr.push_back(brr[j]);
    }

    for (int i = 0; i < crr.size(); i++)
    {
      cout << crr[i] << " ";
    }
    
    
}
