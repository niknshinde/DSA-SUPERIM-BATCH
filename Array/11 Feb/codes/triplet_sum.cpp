#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter Size Of Array" << endl;
    cin >> n;
    vector<int>arr(n);

    //code for taking input from user in array
    cout << "Enter elements in array"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    //code for pair sum 

    int key;
    cout<<"Enter key whose sum pair do you want to find"<<endl;
    cin >> key;

    cout << "pair sum are" <<endl;

    for (int i = 0; i < arr.size(); i++)
    {   
        int element1 = arr[i];

        for (int j = i+1; j < arr.size(); j++)
        {  
            int element2 = arr[j];

            for (int k = j+1; k < arr.size(); k++)
            {
                int element3 = arr[k];

                if (element1 + element2 + element3 == key)
               {
                 cout << "(" << element1 <<","<< element2 <<","<<element3 <<")"<<endl;
               }
            }
            
           
           
        }
        
    }
    
    
}