#include<iostream>
#include "ProductEntity.h"

ProductEntity::ProductEntity()
{
    this->name = "";
    this->price = 0;
    this->stock = 0;
}

ProductEntity::ProductEntity(std::string name, float price, int stock)
{
    this->name = name;
    this->price = price;
    this->stock = stock;
}

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