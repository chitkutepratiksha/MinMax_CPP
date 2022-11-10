#include<iostream>
using namespace std;
int  main()
{
    int n,i;
    cout<<"enter no";
    cin>>n;

    int a[n];
    cout<<"enter array element";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                //return the index of start  repeat no.
              cout<<i;
              //return the element which are twice in group
              cout<<a[i];
            }
        }
    }

    return 0;
}
