/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

struct nodo {
    
    int numero;
    nodo *next;
};

nodo * cabeza=NULL;
nodo * cola;
void agregar();
void menu();

void agregar(int i){
    nodo *nuevo = new nodo();
    nuevo->numero = i;
    
    if(cabeza==NULL){
        cabeza=nuevo;
        cabeza->next=NULL;
        cola = cabeza;
    }
    else{
        cola->next = nuevo;
        cola = nuevo;
    }
    cout<<"Dato ingresado"<<endl;
}

void mostrar(nodo *&cabeza){
    nodo *mostrar = new nodo();
    mostrar=cabeza;
    
    while(mostrar != NULL){
        cout<<mostrar->numero<<"--";
        mostrar = mostrar->next;
    }
}

void Actualizar(int x,int num){
    nodo *actual = new nodo();
    actual->numero=x;

while(actual!=NULL){
    if(actual->numero=x){
        actual->numero=num;
        cout<<"Numero "<<x<<" Ha sido remplazado";
    }else{
        numero->actual=num;
        cout<<"Numero "<<x<<" Ha sido remplazado";
    }
    
}    

    
}

int main(){
    
int opcion,num;
menu();
getch();
    return 0;
}


void menu(){
    
    do{
        
        cout<<"1.ingrese numero a agregar "<<endl;
        cout<<"2. mostrar lista "<<endl;
        cout<<"3. Actualizar numero "<<endl;
        cout<<"4. Salir";
        cin>>opcion;
        
        switch(opcion){
            
            case 1: cout<<"numero a ingresar  ";
            cin>>numero;
            agregar(cabeza,numero);
            
            case 2: cout<<"lista ";
            mostrar(cabeza);
            
             case 3: cout<<"numero a replazar ";
            cin>>numero;
            cout<<"Nuemero por el cual replazar: ";
            cin>>num;
            Actualizar(cabeza,numero,num);
        };
        
        
        
        
    }while(opcion!=4);
    
}



