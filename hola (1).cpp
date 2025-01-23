#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	
	std::vector<int> vec;
	int n;

	std::cout << "Ingresa la cantidad de números: ";
	std::cin >> n;

	int x;

	for(int i = 0; i < n; i++){
		std::cin >> x;
		vec.push_back(x);
	}

	std::sort(vec.begin(), vec.end());

	int h;

	std::cout << "Número a encontrar: ";
	std::cin >> h;

	bool find = std::binary_search(vec.begin(), vec.end(), h);

	if(find == true){
		std::cout << "El número se encontró.";
	} else {
		std::cout << "El número no se encontró.";
	}

	return 0;

}
