#include "ProductsRepository.h"

ProductsRepository::ProductsRepository(std::string file_provider, std::string temp_provider)
{
	this->file_provider = file_provider.c_str();
	this->temp_provider = temp_provider.c_str();
}
