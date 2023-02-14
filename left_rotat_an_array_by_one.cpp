#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int>arr{1,2,3,4,5,6,8,9};
//     for (int i = 0; i < arr.size() -1; i++)
//     {
//         swap(arr[i],arr[i+1]);

//     }

//     for(auto value:arr){
//         cout << value << " ";
//     }
    
// }


int main(){
    vector<int>arr{1,1,2,2,2,2,5,6,7};
    for (int i = 0; i < arr.size(); i++)
    {   

        int result = 0;

        for (int j = i+1; j < arr.size(); j++)
        {

            if (arr[i] == arr[j])
            {
                 result++;         
            }
            
         
        }
        
      cout << arr[i] <<" " <<result +1  <<endl;
        

    }

  
}

