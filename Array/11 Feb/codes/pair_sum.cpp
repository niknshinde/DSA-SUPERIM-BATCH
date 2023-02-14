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
        for (int j = i+1; j < arr.size(); j++)
        {
           if (arr[i] + arr [j] == key)
           {
              cout << "(" << arr[i] <<"," <<arr[j] <<")"<<endl;
           }
           
        }
        
    }
    
    
}