/* 
 * File:   main.cpp
 * Author: Gerardo Rios
 * Sorting Functions
 * Created on November 19, 2013, 8:22 AM
 */
//Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void fillArry(int [],int);
void prntAry(int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void swap3(int [],int,int);
void copy(int[],int [], int);
void sortPos(int [],int,int);
void markSort(int [],int);
int main(int argc, char** argv) {
//DECLARE VARIABLES
    const int SIZE=100;
    int array[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //fill array
    fillArry(array,SIZE);
    //print array
    prntAry(array,SIZE,10);
    //sort
    markSort(array,SIZE);
    prntAry(array,SIZE,10);
    return 0;
}
void markSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        sortPos(a,n,i);
    }
}

void sortPos(int a[],int n,int pos){
    if(pos>n-1)return;
    for(int i=pos;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}
void copy(int a[],int b[], int n ){
     for(int i=0;i<n;i++){
         b[i]=a[i];
         
     }
}
void swap3(int a[],int pos1,int pos2){
    int temp=a[pos1];
    a[pos1]=a[pos2];
    a[pos2]=temp;
}
void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap1(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}
void fillArry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%900+100;
    }
}
