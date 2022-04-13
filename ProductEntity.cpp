#include<iostream>
#include "ProductEntity.h"


void ProductEntity::print()
{
    std::cout << "Nombre: " << name << "\t" 
        << " Precio: " << price << "\t" 
        << " Stock: " << stock << std::endl;
}

void ProductEntity::request()
{
    std::cout << "Nombre: "; std::cin >> name;
    std::cout << "Precio: "; std::cin >> price;
    std::cout << "Stock: "; std::cin >> stock;
}