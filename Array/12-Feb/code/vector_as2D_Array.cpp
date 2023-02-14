#include<iostream>
#include<vector>
using namespace std;

int main(){
  // vector<vector<int> > arr(5 ,vector<int>(5,0));
  vector<vector<int> > arr;


//   vector<int> a{1,2,3};
//   vector<int> b{5,0,3};
//   vector<int> c{4,9,3};

//   arr.push_back(a);
//   arr.push_back(b);
//   arr.push_back(c);

  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
        cin >> arr[i][j];

    }
  
  }


   for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
        cout << arr[i][j] << " ";

    }
    cout << endl;
  }
  
}
  
