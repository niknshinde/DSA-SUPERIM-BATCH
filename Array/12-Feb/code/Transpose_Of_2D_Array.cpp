#include<iostream>
using namespace std;

void Swape(int arr[][3],int brr[][3],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            brr[i][j] = arr[j][i];
           
        }
        
    }



    
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        
        cout<<endl;
    }

    
}

int main(){
     int arr[3][3];
     int brr[3][3];
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
   cout << "transpose of matrix is " << endl;

   Swape(arr,brr,3,3);
  



}