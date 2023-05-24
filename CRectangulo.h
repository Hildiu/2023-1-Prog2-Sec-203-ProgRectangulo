//
// Created by mbermejo on 23/05/2023.
//

#ifndef PROG1_CRECTANGULO_H
#define PROG1_CRECTANGULO_H

#include <iostream>
using namespace std;

class CRectangulo
{
  private:
    double largo;
    double ancho;
  public:
    CRectangulo() {};
    CRectangulo(double _largo, double _ancho):largo(_largo), ancho(_ancho){};
    virtual ~CRectangulo() {cout << "\ndestruyendo el objeto..."; };
    double perimetro();
    double area();
    //--- metodos de acceso
    void setLargo(double _largo) { largo = _largo; };
    void setAncho(double _ancho) { ancho = _ancho;};
    double getLargo() { return largo; };
    double getAncho() { return ancho;};
};


#endif //PROG1_CRECTANGULO_H
