#include <iostream>
using namespace std;
struct vox{
    int v;
    string nom;
    string fecha;
    string exp;
    vox *sgt;
};
vox *peek = NULL;
void push(string exp, string nom, string fecha){
   vox *n =  new vox;
   n->nom=nom,n->sgt=peek;
   n->fecha=fecha,n->sgt=peek;
   n->exp=exp,n->sgt=peek;
   peek=n;


}
void pop(){ // pregunta si esta vacía la pila
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else
    peek=peek->sgt;
}
void prt(){
     vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){
             cout<<aux->nom;
             cout<<aux->fecha;
             cout<<aux->exp;
             aux=aux->sgt;
         }
}
int main(){
    int op, x;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija opcion  ?: ",cin>>op;
        switch (op){
            case 1:
                string nom;
                cout<<"Ingresa tu nombre y apellido : ??  ",cin>>nom;

                string fecha;
                cout<<"Ingresa tu fecha de nacimeinto : ??  ",cin>>fecha;

                string exp;
                cout<<"Ingresa tu numero de expediente: ??  ",cin>>exp;

                push(nom,fecha,exp);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                pop();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);
}

