#include<iostream>
using namespace std;


int search(int arr[],int n, int x){

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
           return i;
        }
       
    }
    
        return -1;
    
}


// Considering the following array

int main(){

int arr[] = {900, 100, 588, 7482, 829, 800, 700, 100};
int n = (sizeof(arr) / sizeof(int));

    int found = search(arr, n,900);
cout << found << endl;


}
