#include <iostream>

using namespace std;

class Punto{
    private:
        //atributos
        double eje_x, eje_y, eje_z;
    public:
        //métodos
        void setX(double);
        void setY(double);
        void setZ(double);

        double getX();
        double getY();
        double getZ();

};
void Punto::setX(double x){
    eje_x=x;
}
double Punto::getX(){
    return eje_x;
}

void Punto::setY(double y){
    eje_y=y;
}
double Punto::getY(){
    return eje_y;
}

void Punto::setZ(double z){
    eje_z=z;
}
double Punto::getZ(){
    return eje_z;
}
int main()
{
    Punto r1;
    r1.setX(5);
    r1.setY(6);
    r1.setZ(7);
    cout<<"Eje x: "<<r1.getX()<<endl;
    cout<<"Eje y: "<<r1.getY()<<endl;
    cout<<"Eje z: "<<r1.getZ()<<endl;
    return 0;
}
