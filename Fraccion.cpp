#include "Fraccion.h"
#include <string>

Fraccion::Fraccion()
    : num_{1}, den_{2} {}

Fraccion::Fraccion(int num, int den)
    : num_{num}, den_{den} {}

int Fraccion::get_num() const
{
    return num_;
}

int Fraccion::get_den() const
{
    return den_;
}

void Fraccion::set_num(int num)
{
    num_ = num;
}

void Fraccion::set_den(int den)
{
    den_ = den;
}

double Fraccion::calc_valor_real() const
{
    return static_cast<double>(num_) / den_; // Para que devuelva un decimal, y no un entero
}

void Fraccion::sumar(const Fraccion& otra)
{
    int nuevo_num = num_ * otra.get_den() + otra.get_num() * den_; // a/b + c/d = (ad + bc) / bd
    int nuevo_den = den_ * otra.get_den();

    num_ = nuevo_num;
    den_ = nuevo_den;
}

string Fraccion::to_string() const
{
    double valor = calc_valor_real();
    string texto = std::to_string(num_) + "/" + std::to_string(den_);
    texto += " (" + std::to_string(valor) + ")";
    return texto;
}
