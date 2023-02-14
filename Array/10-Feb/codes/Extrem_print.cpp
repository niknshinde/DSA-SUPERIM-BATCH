#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,44,657,532,6,74,24,657,12,43};
    int size = 10;

    int star = 0;
    int end  = size - 1;

    while (star<=end)
    {
        if(star > end){
            break;
        }
        if (star == end)
        {
              cout << arr[star] << " ";
        }
        else{
        cout << arr[star] << " ";
        cout << arr[end] << " ";
        }
        star++;
        end--;

    }
    
}
