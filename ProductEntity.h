#include<string>

#pragma once
class ProductEntity
{
public:

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

