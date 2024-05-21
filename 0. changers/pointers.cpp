#include<iostream>


int main(){


int a[10] = {1, 3, 4, 5, 6, 7, 8, 8, 9, 9};
int *p = a;

for (int i = 0; i < 10; i++){

std:: cout << (p + i) << std::endl;
    
}

}