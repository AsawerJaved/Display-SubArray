#include <iostream>
using namespace std;
int main()
{
    char array[50];
    int start,end;
    
    cout<<"Enter an array: ";
    cin.getline(array,50);
    cout<<"Enter starting index for subarray: ";
    cin>>start;
    cout<<"Enter ending index for subarray: ";
    cin>>end;
    
    for(int a=start;a<=end;a++)
    cout<<array[a];
    

    return 0;
}
