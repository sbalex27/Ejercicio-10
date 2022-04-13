#include<string>

#pragma once
class ProductEntity
{
public:
	/// <summary>
	/// Default empty entity constructor
	/// </summary>
	ProductEntity();

	/// <summary>
	/// Filled entity constructor
	/// </summary>
	/// <param name="name">Name property</param>
	/// <param name="price">Price property</param>
	/// <param name="stock">Stock property</param>
	ProductEntity(std::string name, float price, int stock);

	/// <summary>
	/// Name of the product
	/// </summary>
	std::string name;

	/// <summary>
	/// Price or value of the current product
	/// </summary>
	float price;

	/// <summary>
	/// Quantity of existences aviables in the current object
	/// </summary>
	int stock;

	/// <summary>
	/// Print the current object in screen
	/// </summary>
	void print();

	/// <summary>
	/// Request new properties in the current object
	/// </summary>
	void request();
};

