#include<iostream.h>
#include<conio.h>
void insort(int num[],int size)
{	int T,j;
	for(int i=1;i<size;i++)
	{	T=num[i];
		j=i-1;
		while(T<num[j]&&j>=0)
		{	num[j+1]=num[j];
			j=j-1;
		}
		num[j+1]=T;
	}
}
void main()
{	clrscr();
	int a[50],s;
	cout<<"\n\t\tEnter size of the array:";
	cin>>s;
	cout<<"\n\t\tEnter the records into the array:\n\t\t";
	for(int i=0;i<s;i++)
	       {	cin>>a[i];
			cout<<"\n\t\t";
	       }
	cout<<"\n\t\tSorted array is as follows:\n\t\t";
	insort(a,s);
	for(int n=0;n<s;n++)
	       {	cout<<a[n]<<"\n\t\t";
	       }

}
