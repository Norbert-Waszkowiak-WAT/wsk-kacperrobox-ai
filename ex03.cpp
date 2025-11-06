#include <iostream>
using namespace std;

void min_max(int* arr,int size,int* min,int* max){
    *min=*max=*arr;
    for(int* p = arr;p<arr + size; p++){
        if(*min>*p)
        {
            *min=*p;
        }
        if(*max<*p)
        {
            *max=*p;
        }
    }

}

int main(){

int tab[3]={1,2,3};
int tab_2[10]={1,2,3,4,5,6,7,8,9,10};
int max = 0;
int min = 0;
min_max(tab,3,&min,&max);
cout<<"min:"<<min<<"max:"<<max<<endl;
min_max(tab_2,10,&min,&max);
cout<<"min:"<<min<<"max:"<<max<<endl;

    return 0;
}