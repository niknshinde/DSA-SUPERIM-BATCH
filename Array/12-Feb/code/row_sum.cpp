#include<iostream>
using namespace std;

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

    cout << endl;
    //sum of rows
   

    for (int i = 0; i < 3; i++)
    {   
         int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum +  arr[i][j];

        }
        cout << "sum of " << i+1 <<" row is " <<sum <<endl;

        cout<<endl;
    }
    


}
