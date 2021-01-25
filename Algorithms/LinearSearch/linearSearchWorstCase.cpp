// When the array Grows too a large extent or the value is not found.

#include<iostream>
#include<vector>
using namespace std;


void search(vector<int> arr, int search_element){

    int length = arr.size();
    int left = 0;
    int right = length - 1;
    int position = -3;


    for(left=0; left <= right;){

        // Start Searching from Left
        if(arr[left] == search_element){
            position = left;
            cout << "The result is found at index: " << position;
            cout << "The result is found attempting : " << left + 1;

            break;
        }

        // Start Searching from Right
        if (arr[right] == search_element)
        {
            position = right;
            cout << "The result is found at index: " << position;
            cout << "The result is found attempting : " << right ;

            break;
        }

        left++;
        right--;
    } 

    if(position == -1 ){
        cout << "The element is not found after this no of Attempt: " << left << endl; 
    }

}


int main(){
    vector<int> array;
    for(int i=0; i <= 10; i++){

array.push_back(i);

    }
    int search_element = 4;

    search(array, search_element);
}