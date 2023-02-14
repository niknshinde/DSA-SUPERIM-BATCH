#include<iostream>
using namespace std;

void findZeroAndOne(int arr[],int size){
    int countZ;
    int coutO;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            coutO++;
        }
        else if(arr[i] == 0){
            countZ++;
        }
        
    }

    cout << "Number of ZERO are " << countZ << endl;
    cout << "Number of ONE are " << coutO << endl;
    
}

int main(){
    int arr[] = {1,0,1,1,0,0,0};
    int size = 7;

    findZeroAndOne(arr,size);

}
