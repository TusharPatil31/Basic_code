#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr;
    int cnt=0;
    arr.push_back(1);
     for(int i=1; i<=1000; i++)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            arr.push_back(i);
            // cnt++;
        }
    }
    // cout<<endl;
    // cout<<cnt<<endl;
    // cout<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n; cout<<"Enter a nth terms"<<endl; cin>>n;
    cout<<arr[n-1]<<endl;
return 0;
}