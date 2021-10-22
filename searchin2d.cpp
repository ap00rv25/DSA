#include <iostream>
using namespace std;
const int R=4,C=4;

void search(int arr[R][C],int x){
    int i=0,j=C-1;
    while(i<R && j>=0){
        if(arr[i][j]==x){
            cout<<"found at ("<<i<<","<<j<<")"<<endl;
            return;
        }
        else if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"not found"<<endl;
    
}

int main() {
    int arr[R][C] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	int x = 29;	   

	search(arr, x);
	return 0;
}
