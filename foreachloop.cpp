#include<iostream>
using namespace std;

int main(){
    int arr[4] = {10,20,30,40};
    for(int arr1 : arr){
        cout << arr1 <<"\n";
    }


    return 0;
}

#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        cout << i;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int name = 2;
    switch(name){
        case 1:
            cout << "shripada";
            break;
        case 2:
            cout << "mahato";
            break;
        case 3: 
            cout << "purulia";
            break;
        default:
            cout << "India";
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 11){
        cout << i << " /n";
        i++;
    }
    
    return 0;
}