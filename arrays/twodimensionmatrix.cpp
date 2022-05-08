#include <iostream>
using namespace std;

int main() {
    int i, j, first[10][10], second[10][10], sum[10][10];
    cout <<"Enter values of first matrix: \n";
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                cin>>first[i][j];
                
            }
            cout<<"\n";
        }
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                cout<<first[i][j];
                cout<<"\t";
                
            }
            cout<<"\n";
        }
        cout <<"Enter values of second matrix: \n";
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                cin>>second[i][j];
                
            }
            cout<<"\n";
        }
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                cout<<second[i][j];
                cout<<"\t";
                
            }
            cout<<"\n";
        }
        
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                sum[i][j] = first[i][j] * second[i][j];
                
            }
            cout<<"\n";
        }
        
        cout<<"The output for the Matrix is: \n";
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                cout<<sum[i][j];
                cout<<"\t";
                
            }
            cout<<"\n";
        }
    return 0;
}