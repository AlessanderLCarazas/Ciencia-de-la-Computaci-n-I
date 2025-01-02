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

int sum_par(int A[], int n)
{
    int a=0;
    for(int i=0; i<n; i++)
        if ((i+1)%2==0)
            a=a+A[i];
    return a;
}

int main()
{
    int A[10],n;
    cout << "Ingrese Cantidad de Elementos del Arreglo: ";
    cin >>n;
    ingresar(A,n);
    mostrar(A,n);
    cout << "La sumatoria que se encuentran en las posiciones pares es: " << sum_par(A,n) << endl;
    return 0;
}
