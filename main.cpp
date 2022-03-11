/*
Proj 1 
            Name : Suatcan isik
            Class: Modeling Similation 381-14
            Date : 2/10/2022
            Prof : Theodore Brown

Proj description -------------------------------------
2 objects 0 and 1
p1:0->1
p2:1->1
p3:1->0
p4:0->0
p1=p3=1/3
p2=p4=2/3
try with 10.000 variable
how many times does the nnumber repeates before changing to the other state
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include "object.cpp"
using namespace std;

int main(){
    srand(time(NULL));
    /*
    int arr0[100];
    int arr1[100];

    for(int i=0;i <= 100;i++){      //define every member in arrays
        arr0[i]=0;
        arr1[i]=0;
    }

    object obj0(0);
    object obj1(1);

    for(int i=0;i<10000;i++){          //looop to roll 10,000 times
        obj0.roll();                
        //cout << obj0.getCount();   //uncomment to see all the counts for all the rolls
        arr0[obj0.getCount()]++;    //increase the number assigned in array (save the count)
        obj0.reset();               //reset the count
    }
    
    //repeat for the state "1"
    for(int i=0;i<10000;i++){
        obj1.roll();
        //cout << obj1.getCount();
        int temp = obj1.getCount();
        arr1[temp]++;
        obj1.reset();
    }

    //Array outputs #######################################################################

    cout << endl << endl<< "_____ List of Counts : Both States _____" << endl;
    int max, max0,max1;
    for(int i=0;i<100;i++){                             //find max count in each array
        if ( arr0[i] != 0){ max0 = i;}
        if ( arr1[i] != 0){ max1 = i;}
        if ( arr1[i] != 0 || arr0[i] != 0){ max  = i;}
    }
    cout << "Max value for State 0 : "<< max0 << endl;
    cout << "Max value for State 1 : "<< max1 << endl;
    cout << "________________________________________" << endl;
    cout << "Num :  ( State 0  ,  State 1 )  :  ( Precent % )" << endl;
    
    for(int i=0;i<2+max;i++){                           //output the list of arrays
    float precent0 = arr0[i]/100;                       //precentages
    float precent1 = arr1[i]/100;
    cout << i << "  :  (  "<< arr0[i]  << " , " << arr1[i]<< "  )" << " ("<<precent0 << "% - " << precent1 << "% ) " <<  endl;
    }
    */
   object obj (0);
   int n=10000;

   obj.roll(n);
   cout << "roll times :" << n<< endl;
   cout << "changed 0 -> 1 "<< obj.getChanged0() <<" times" << endl;
   cout << "changed 1 -> 0 "<< obj.getChanged1() <<" times" << endl;
   cout << "looped on state 0 "<< obj.getLooped0() <<" times" << endl;
   cout << "looped on state 1 "<< obj.getLooped1() <<" times" << endl;
   cout << " (Looped from state 0) / (Changed on state 0) = " << (obj.getLooped0()/obj.getChanged0())<<"."<<(obj.getLooped0()%obj.getChanged0())<<endl;
   cout << " (Looped from state 1) / (Changed on state 1) = " << (obj.getLooped1()/obj.getChanged1())<<"."<<(obj.getLooped1()%obj.getChanged1())<<endl;
}