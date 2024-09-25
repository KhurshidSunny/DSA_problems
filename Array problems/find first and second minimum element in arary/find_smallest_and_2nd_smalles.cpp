#include <bits/stdc++.h>

using namespace std;

int main() {
    // int marks[] = {59, 97, 32, 93, 25, 89, 25};
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int * const marks = new int[size];

    for(int i = 0; i<size; i++) {
        cout<<"Enter the marks for student No "<<i+1<<" :";
        cin>>marks[i];
    }
 
    int min_marks = INT_MAX;
    int min_2nd_marks = INT_MAX;

   for(int i = 0; i < size; i++) {
        if(marks[i] < min_marks) {
             min_2nd_marks = min_marks;
            min_marks = marks[i];
        }
        else if(marks[i] < min_2nd_marks && marks[i] > min_marks) {
            min_2nd_marks = marks[i];
        }
   }
   cout<<"First Minimum marks : "<<min_marks<<endl;
   cout<<"Second Minimum marks : "<<min_2nd_marks<<endl;

    delete [] marks;
}