#include<iostream>
using namespace std;

void bubble(int[],int);
int linear(int[],int,int);

int main()
{
    int a[5],pos,i,s,v,
    x,y;

    cout<<endl<<"Enter elements: ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    bubble(a,5);
    

    cout<<endl<<"Enter the value to be searched : ";
    cin>>v;

    pos = linear(a,s,v);

    if(pos==0)
    cout<<endl<<v<<" Not found";
    else
    cout<<endl<<v<<" Found at "<<pos<<" position ";

    return 0;

}

void bubble(int a[], int s)
{
    int i,j,t;

    for(i=0;i<s;i++)
    {
        for(j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    cout<<endl<<"After sorting : "<<endl;

        for(i=0;i<s;i++)
        {
            cout<<endl<<"  "<<a[i];
        }

}

int linear(int a[],int s,int v)
{
    int i,f=0;
    for(i=0;i<s;i++)
    {
        if(a[i]==v)
        {
            f=1;
            return(i+1);
        }
    }
    return(f);
}