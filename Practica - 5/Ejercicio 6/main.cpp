#include <iostream>

using namespace std;

void ingresar(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Ingrese " << i+1 << " valor: ";
        cin >> A[i];
    }
}

void mostrar(int A[],int n)
{
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int cant_primos(int A[], int n)
{
    int b=0,a,c;
    for(int i=0; i<n; i++)
    {
        c=0;
        a=A[i];
        for(int i=1; i<=a; i++)
        {
            if(a%i==0)
                c=c+1;
        }
        if (c==2)
            b=b+1;
    }
    return b;
}

int main()
{
    int A[10],n;
    cout << "Ingrese Cantidad de Elementos del Arreglo: ";
    cin >>n;
    ingresar(A,n);
    mostrar(A,n);
    cout << "La cantidad de numeros primos que hay en el arreglo es: " << cant_primos(A,n) << endl;
    return 0;
}
