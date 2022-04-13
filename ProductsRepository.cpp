#include "ProductsRepository.h"

ProductsRepository::ProductsRepository(std::string file_provider, std::string temp_provider)
{
	this->file_provider = file_provider.c_str();
	this->temp_provider = temp_provider.c_str();
}

std::vector<ProductEntity> ProductsRepository::index()
{
	return {
		ProductEntity("iPhone X", 3000.0f, 30),
		ProductEntity("iPhone XS", 3500.0f, 20),
		ProductEntity("iPhone XR", 3250.0f, 10),
	};
}

ProductEntity ProductsRepository::show(std::string name)
{
	for (auto& product : index())
		if (product.name == name) return product;
}

void ProductsRepository::store(ProductEntity* entity)
{
	//
}

void ProductsRepository::update(ProductEntity* entity)
{
	//
}

void ProductsRepository::destroy(std::string name)
{
	//
}