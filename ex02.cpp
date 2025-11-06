#include<iostream>
using namespace std;

int suma(int *a){
int suma =0;
for(int i=0;i<3;i++){
suma+=(*a+i);

}
return suma;
}
int main(){
int Tab[3]={1,2,3};
int *a=Tab;
    cout<<suma(a);
    
    
    return 0;
}