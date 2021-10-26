#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int m=3, n=2;
  //DIRECT METHOD
  int arr[m][n];
  for(int i=0; i<m; i++)
  for(int j=0; j<n; j++)
  arr[i][j]=i+j;

  //DOUBLE POINTER
  int **arr1;
  arr1=new int* [m];
  for(int i=0; i<m; i++)
  arr1[i] = new int[n];
  for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			arr1[i][j] = 10;
    }
  }

  //ARRAYS OF VECTORS      (you have to add "#include<vector>" header)
  vector<int> arr2[m];
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      arr2[i].push_back(10);
    }
  }

  //VECTORS OF VECTORS
  vector<vector<int>> arr3;
  for(int i=0; i<m; i++)
  {
    vector<int> v;
    for(int j=0; j<m; j++)
    {
      v.push_back(10);
    }
    arr3.push_back(v);
  }
  return 0;
}