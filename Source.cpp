#include<iostream>
#include"ProductsRepository.h"
#include"ProductEntity.h"

using namespace std;

int main() {
	int option = 0;
	ProductsRepository* repository = new ProductsRepository("data.txt", "temporal.txt");

	do
	{
		cout << "1. Lista de productos" << endl;
		cout << "2. Buscar un producto" << endl;
		cout << "3. Crear un producto" << endl;
		cout << "4. Modificar un producto" << endl;
		cout << "5. Borrar un producto" << endl;
		cin >> option;

		switch (option)
		{
		case 0:
			exit(0);
			break;
		case 1:
		{
			for (auto& i : repository->index()) i.print();
			break;
		}
		case 2:
		{
			string to_find;
			cout << "Buscar a: "; cin >> to_find;
			repository->show(to_find).print();
			break;
		}
		case 3:
		{
			ProductEntity* entity = new ProductEntity();
			entity->request();
			repository->store(entity);
			break;
		}
		case 4:
		{
			string to_find;
			cout << "Modificar a: "; cin >> to_find;
			ProductEntity entity = repository->show(to_find);

			cout << "Antiguos Valores: " << endl;
			entity.print();

			cout << "Nuevos Valores: " << endl;
			entity.request();

			repository->update(to_find, &entity);
			break;
		}
		case 5:
		{
			string to_delete;
			cout << "Eliminar a: "; cin >> to_delete;
			ProductEntity deleted = repository->show(to_delete);
			repository->destroy(to_delete);

			cout << "Se elimino a: " << endl;
			deleted.print();
			break;
		}
		default:
			cout << "Opcion invalida." << endl;
			break;
		}
	} while (option != 0);

	return 0;
}