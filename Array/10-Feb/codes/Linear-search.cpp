#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
    //linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
    int arr[] = {2,5,6,8,4,10};
    int size = 6;
    int key;
    cout<<"Enter element you want to find in array"<<endl;
    
    cin >> key;
    if (find(arr,size,key))
    {
        cout<<key<<" element is present"<<endl;
    }
    else{
      cout<<key<<" element is absent"<<endl;

    }
    
}
