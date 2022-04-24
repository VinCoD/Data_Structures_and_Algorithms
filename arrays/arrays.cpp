#include <iostream>

using namespace std;

int main(){
    int student[5];
    int i;
    cout<<"Enter the marks of the five students: \n";
    for(i=0; i<5; i++){
        
        cin>> student[i];
    }
    
    cout<<"The output for the above code is: ";
    for(i=0; i<5; i++){
        cout<< "\t" <<student[i] <<"\n";
    }
    return 0;
}