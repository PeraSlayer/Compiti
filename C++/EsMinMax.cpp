#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 100
#define N 10
using namespace std;

int main(){
    int max,min,app;
    int arr[N];
    srand(time(NULL));

    for(int i = 0; i<N; i++){
        arr[i] = rand()%MAX+1;
    }


    for(int i = 0; i<N; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    max=0;
    min=0;

    for(int i = 1; i<N; i++){
        if(arr[max]<arr[i]){
            max = i;
        }
        if(arr[min]>arr[i]){
            min = i;
        }
    }

    app = arr[min];
    arr[min] = arr[max];
    arr[max] = app;

    for(int i = 0; i<N; i++){
        cout<<arr[i]<<"\t";
    }


    return 0;
}
