#include <iostream>
using namespace std;
template <class T>
class Template
{
public:
    void bubble_sort(T K[], int n);
};
template <class T>
void Template<T>::bubble_sort(T K[],int n)
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(K[j]>K[j+1])
			{
				temp=K[j];
				K[j]=K[j+1];
				K[j+1]=temp;
			}
		}
	}
	cout<<endl<<"Sorted Array is"<<endl;
	for(i=0;i<n;i++)
		cout<<K[i]<<"\t";
	cout<<endl<<endl;
}
int main()
{
	int A[100];
	float B[100];
	char C[100];
	Template<int> iobj;
	Template<float> fobj;
	Template<char> cobj;
	int i,j,m,n,p;
	cout<<endl<<"Enter the number of integers"<<endl;
	cin>>m;
	cout<<"Enter Array Elements"<<endl;
	for(i=0;i<m;i++)
		cin>>A[i];
	iobj.bubble_sort(A,m);
	cout<<endl<<"Enter the number of float values"<<endl;
	cin>>n;
	cout<<"Enter Array Elements"<<endl;
	for(i=0;i<n;i++)
		cin>>B[i];
	fobj.bubble_sort(B,n);
	cout<<endl<<"Enter the number of characters"<<endl;
	cin>>p;
	cout<<"Enter Array Elements"<<endl;
	for(i=0;i<p;i++)
		cin>>C[i];
	cobj.bubble_sort(C,m);
}
