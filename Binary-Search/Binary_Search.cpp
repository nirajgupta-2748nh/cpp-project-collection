#include <iostream>
using namespace std;

int binarysearch(int n,int array[],int key)
{
int start=0;
int end=n;

    while (start<=end)
    {
        int middle=(start+end)/2;
        if (array[middle]==key)
        {
            return middle;/* code */
        }
        else if (array[middle]<key)
        {
            end=middle-1;/* code */
        }
        else
        {
            start=middle+1;
        }    
    }
    return -1;

}

int main()
{
    cout<<"enter size of array:";
    int n;
    cin>>n;

    cout<<"enter elements of array:";
    int array[n];
    for (int i=0; i<=n; i++)
    {
        cin>>array[i];
    }

    int key;
    cout<<"enter key:";
    cin>>key;
    cout<<"index :"<<binarysearch (n,array,key)<<endl;

    return 0;
}