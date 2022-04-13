#include<vector>
#include<string>
#include"ProductEntity.h"

#pragma once
class ProductsRepository
{
private:
	std::string file_provider, temp_provider;

public:
	/// <summary>
	/// Default repository repository
	/// </summary>
	/// <param name="file_provider">File name to storage data</param>
	/// <param name="temp_provider">File name to storage temporal data</param>
	ProductsRepository(std::string file_provider, std::string temp_provider);

	/// <summary>
	/// Fetch all the entities storaged
	/// </summary>
	/// <returns>Vector of ProductEntity</returns>
	std::vector<ProductEntity> index();

	/// <summary>
	/// Show a specific entity
	/// </summary>
	/// <param name="name">Value of search</param>
	/// <returns>ProductEntity instance</returns>
	ProductEntity show(std::string name);

	/// <summary>
	/// Store a new entity
	/// </summary>
	/// <param name="entity">Instance to store</param>
	void store(ProductEntity* entity);

	/// <summary>
	/// Update a existing entity storaged
	/// </summary>
	/// <param name="entity">Instance to update</param>
	void update(ProductEntity* entity);

	/// <summary>
	/// Destroy a existing entity sotraged
	/// </summary>
	/// <param name="name">Value of search</param>
	void destroy(std::string name);
};

