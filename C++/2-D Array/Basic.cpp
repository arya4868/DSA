#include<iostream>
using namespace std;

/* // Liner Search */

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;  
            }
        }
    }
    return false;
}

// row-wise sum 

void rowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }

}

// column-wise sum 

void colSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout << sum << endl;
    }

}

// Row of maximum sum 
void MaxRowSum(int arr[][4], int row, int col){
    int maxSum = INT16_MIN;
    int ansIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum+= arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
           
        }
         ansIndex = i;
    }
    cout << " The row with maximum sum is :- " << ansIndex << endl;
}

// column of maximum sum 
void MaxColSum(int arr[][4], int row, int col){
    int maxSum = INT16_MIN;
    int ansIndex = -1;
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum+= arr[j][i];
        }
        if(sum > maxSum){
            maxSum = sum;
           
        }
         ansIndex = i;
    }
    cout << " The column with maximum sum is :- " << ansIndex << endl;
}


int main(){

    int arr[3][4];

    // row wise input 
    for(int row = 0; row<3; row++){
        for(int column = 0; column <4; column++){
            cin >> arr[row][column];
        }
    }
    // printing
     for(int row = 0; row<3; row++){
        for(int column = 0; column <4; column++){
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    
    /*
    // column wise input

    for(int row = 0; row<3; row++){
        for(int column = 0; column <4; column++){
            cin >> arr[row][column];
        }
    }
    // printing
     for(int column = 0; column<4; column++){
        for(int row = 0; row <3; row++){
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    */


    // liner search 
    bool ans = isPresent(arr, 6, 3, 4);
    cout << "The target element is present ? :- " << ans << endl;

    // row-wise sum
    cout << " Printing row-wise sum :- " << endl;
    rowSum(arr, 3,4);

    // column-wise sum
    cout << " Printing column wise sum" << endl;
    colSum(arr, 3,4);

    // row with max-sum

    MaxRowSum(arr,3,4);

    // col with max-sum
    MaxColSum(arr, 3,4);


}