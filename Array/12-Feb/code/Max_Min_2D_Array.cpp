#include<iostream>
#include<limits.h>
using namespace std;

int MaxValue(int arr[][3],int row,int col){
    
    int maxvalue = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] > maxvalue){
                maxvalue = arr[i][j];
                
            }
        }
        
    }
    
    return maxvalue;
}

int MinValue(int arr[][3],int row,int col){
    int minValue = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minValue)
            {
                minValue = arr[i][j];
               
            }
            
        }
         
    }

     return minValue;
    
}


int main(){
    int arr[3][3];
    cout << "enter numbers in array" <<endl;
    
    //row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        
        cout<<endl;
    }

    //row wise printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        
        cout<<endl;
    }

    // int max = MaxValue(arr,3,3);
    // int min = MinValue(arr,3,3);


    cout << "max value present in array is " <<MaxValue(arr,3,3)<< endl;
    cout << "min value present in array is " <<MinValue(arr,3,3)<< endl;




}