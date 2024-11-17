#include <iostream>
#define MAX 10000
using namespace std;

int main(){
    int n;
    do{
        cout<<"inserisci un numero minore di 10.000\n";
        cin>>n;
    }while(n>=MAX);
    int size = n/2;
    int arr[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        j+=2;
        arr[i] = j;
    }

    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
