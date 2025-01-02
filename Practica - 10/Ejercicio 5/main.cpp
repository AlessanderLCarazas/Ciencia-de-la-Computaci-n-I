#include <iostream>

using namespace std;

void llenar(int *v, int n)
{
    cout<<"Ingrese Elementos"<<endl;
    for(int i=0;i<n;i++)
        cin>>*(v+i);
}
void imprimir(int *v,int n)
{
    cout<<"Vector: "<<endl;
    for(int i=0;i<n;i++)
        cout<<*(v+i)<<" ";
    cout<<endl;
}
void crear(int *&v, int n)
{
    v=new int[n];
}
void borrar(int *v, int n)
{
    delete v;
}
void suma(int *&v, int n)
{
    int a=0;
    for(int i=0;i<n;i++)
        if (i%2!=0)
            a=a+*(v+i);
    cout<<"La suma de las posiciones pares del vector es: "<<a<<endl;
}
void producto(int *&v, int n)
{
    int a=1,b;
    for(int i=0;i<n;i++)
    {
        if (i%2==0)
            a=a**(v+i);
    }
    cout<<"El producto de las posiciones impares del vector es: "<<a;
}
int main()
{
    int *v1,n;
    cout<<"Cantidad de elementos del vector: ";
    cin>>n;
    crear(v1,n);
    llenar(v1,n);
    imprimir(v1,n);
    suma(v1,n);
    producto(v1,n);
    borrar(v1,n);
    return 0;
}
