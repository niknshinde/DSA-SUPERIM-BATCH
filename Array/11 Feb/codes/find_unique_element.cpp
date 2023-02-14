#include<iostream>
#include<vector>
using namespace std;

int FindUniqueElement (vector<int>arr){
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
    
}

int main(){
    // taking input from user

    int n;
    cout << "Enter size of array"<<endl;
    cin >> n;

    vector<int>arr(n);

    // taking input from user

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    

    int uniqueElement = FindUniqueElement(arr);
    cout << "unique element is " << uniqueElement;

    
}
