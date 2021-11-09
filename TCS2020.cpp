#include<iostream>
using namespace std;

int main()
{
  int n;
  int size = 1000;
  int arr[size];
  int count = 1;
  int str = 1;
  int temp = 0;

  cin>>n;
  temp = n;

  while(count <= temp)
  {
    //cout<<"looping count : "<<count<<endl;

    if(temp == 1)
    {
      arr[count] = str;
    }
    if(count == 1)
    {
      arr[count] = str;
    }
    else if(count > 1)
    {
      str += 1;

      if(str % 2 == 0 || str % 3 == 0 || str % 5 == 0)
      {
        arr[count] = str;
      }
      else
      {
        str += 1;
        arr[count] = str;
      }

    }

    count += 1;
  }

  for(count = 1; count <= temp; count++)
    cout<<"Array at "<<count<<" "<<arr[count]<<endl;

  cout<<"End str : "<<str<<endl;

  return 0;
}