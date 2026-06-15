

#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        if(i == 4){
            break;
        }
            cout << i << " \n";
       
    }
   return 0;    
}



#include <iostream>
using namespace std;

int main(){
    
    int arr[4] = {10,20,30,40};
        for(int i = 0; i < 4; i++){
            cout << arr[i]<<"\n";
        
    }
   return 0;    
}

#include <iostream>

using namespace std;

int main(){
    
    int arr[4] = {10,20,30,40};
        for(int arr : arr){
            cout << arr<<"\n";
        
    }
   return 0;    
}

#include<iostream>
using namespace std;

int main(){
    int a[] = {10,20,30};
    for(int b:a){
        cout << b << "\n";
    }

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for(int a : arr){
        cout << a << "\n";
    }
     cout << "Size of Array in Byte:- "<<sizeof(arr);
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int arr[2][2] = {
    {10,20},
    {40,50}};
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cout<< arr[i][j] << "\n";
            }
        }
  return 0;

}

#include<iostream>
using namespace std;

int main(){
    int arr[2][2] = {
    {10,20},
    {40,50}};
        cout << arr[1][1];

  return 0;
}




#include <iostream>
using namespace std;

int main() {
  // 1) Declare an int array named numbers with 5 elements
   int numbers[5] = {10,20,30,40,50};
  // 2) Set numbers[0] to 10
  // 3) Set numbers[4] to 50
    cout << numbers[0] << "\n";
    cout << numbers[4];
  // 4) Print numbers[0]
  // 5) Print numbers[4]

  return 0;
}






#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter a number :- ";
    cin >> num;
    if(num >= 0){
        cout << num << "It is a positive Number";
    }
    else if(num <= 0){
        cout << num << "It is a Negetive Number";
    }
    else
    cout << num << "It is a Zero Number";

}