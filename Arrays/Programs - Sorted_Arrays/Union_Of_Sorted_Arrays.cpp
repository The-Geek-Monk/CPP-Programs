#include<iostream>
using namespace std;

void UnionOfSortedArrays(int *A,int *B,int m,int n)
{
   int c[m+n],i=0,j=0,k=0;
   ///Using Concept Of Merging Two Arrays
   while (i<m && j<n)
   {
      if (A[i] < B[j])
         c[k++] = A[i++];
      else if (A[i] > B[j])
         c[k++] = B[j++];
      else{
         c[k++] = A[i];
         j++;i++;
      }
   }
   for (;i<m;i++)
      c[k++] = A[i];
   for (;j<n;j++)
      c[k++] = B[j];

   ///Displaying Union
   cout<<"\nUnion Of Sorted Arrays : "<<endl;
   for (int i=0;i<k;i++)
      cout<<c[i]<<" ";
   cout<<endl;
}

int main()
{
   cout<<"Enter The Size Of The First Array : ";
   int s1;
   cin>>s1;
   cout<<"\nEnter The Size Of The Second Array : ";
   int s2;
   cin>>s2;

   int A[s1],B[s2];
   cout<<"\nEnter First Array Elements In Sorted Manner : "<<endl;
   for (int i=0;i<s1;i++)
      cin>>A[i];
   cout<<"\nEnter Second Array Elements In Sorted Manner : "<<endl;
   for (int i=0;i<s2;i++)
      cin>>B[i];

   UnionOfSortedArrays(A,B,s1,s2);

   return 0;
}
