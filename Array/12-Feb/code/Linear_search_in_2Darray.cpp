#include<iostream>
using namespace std;

bool linear_search(int arr[][3],int row,int col,int key){
    
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         if(key == arr[i][j]){
            return true;
            break;
         }
      }
      
   }
    return false;

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
    int key = 8;
    if(linear_search(arr,3,3,key)){
     cout << "NO. present";
    }
   else{
      cout << "NO. is not present";
    }
    

}