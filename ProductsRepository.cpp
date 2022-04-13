#include<fstream>
#include "ProductsRepository.h"

ProductsRepository::ProductsRepository(std::string file_provider, std::string temp_provider)
{
	this->file_provider = file_provider;
	this->temp_provider = temp_provider;
}

std::vector<ProductEntity> ProductsRepository::index()
{
	std::vector<ProductEntity> data{};
	std::ifstream input_file(file_provider.c_str());

	if (!input_file.is_open()) throw "Unaviable file";

	while (!input_file.eof())
	{
		ProductEntity serialized = ProductEntity();
		input_file >> serialized.name >> serialized.price >> serialized.stock;
		data.push_back(serialized);
	}

	return data;
}

ProductEntity ProductsRepository::show(std::string name)
{
	for (auto& product : index())
		if (product.name == name) return product;
}

void ProductsRepository::store(ProductEntity* entity)
{
	std::ofstream file;
	file.open(this->file_provider, std::ios::app);
	if (!file.is_open()) throw "Unaviable file";
	file << std::endl << entity->name << "\t" << entity->price << "\t" << entity->stock;
	file.close();
}

void ProductsRepository::update(ProductEntity* entity)
{
	//
}

void ProductsRepository::destroy(std::string name)
{
	//
}