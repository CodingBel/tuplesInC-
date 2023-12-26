#include<iostream>
#include<vector>
#include<tuple>
// A tuple template allows us to return hetrogeneous elements 
std::tuple<std::vector<int>, std::vector<int>> numbersSeparator(const std::vector<int>& inputNumbers) {
	std::vector<int>evens{};
	std::vector<int>odds{};

	for (const auto& i : inputNumbers) {
		if (i & 1)
			odds.push_back(i);
		else
			evens.push_back(i);
	}

	return { evens, odds };
}

int main() {
	const std::vector<int>myVector{1, 2, 3, 4, 5, 6, 5, 7};
	std::tuple<std::vector<int>, std::vector<int>> results = numbersSeparator(myVector);
	std::vector<int> Zevens = std::get<0>(results);
	for (const auto i : Zevens)
		std::cout << i << " ";

	std::cout << "\n\n";
	const auto [even, odd] = numbersSeparator(myVector);
	std::cout << "The Evens are: \n";
	for (const auto& i : even)
		std::cout << i << " ";

	std::cout << "\nThe odds are: \n";
	for (const auto& i : odd)
		std::cout << i << " ";
	return 0;
}


