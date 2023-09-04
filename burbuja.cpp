/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arreglo[] = {29,15,14,30,9,10,8,7,5,6,4,3,1,2,11,13,12,17,16,18,20,19,23,21,22,28,25,24,26,27};
    int bus=0;
    int i,x;
    
    for( i = 0;i<30;i++){
        for( x = 0;x<30;x++){
            if(arreglo[x]>arreglo[x+1]){
            bus=arreglo[x];
            arreglo[x]=arreglo[x+1];
            arreglo[x+1]=bus;
            }
        }
     
    }
  
  
  for(i=0;i<30;i++){
   cout<<"numeros "<<arreglo[i]<<endl;
  }

    return 0;
}
