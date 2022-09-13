/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 08:21:30 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/07/06 08:33:04 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<vector>
#include	<iostream>


void	ft_print(std::vector<int> & vect){ 		//Esta función habrá que hacerla template
	for (std::vector<int>::iterator i = vect.begin(); i != vect.end(); i++)
	{
		if (i + 1 == vect.end())
			std::cout << *i;
		else
			std::cout << *i << "  -  ";
	}
	std::cout << "\n\n";
}

int	main()
{

	std::cout << "---------------------------  Real Vector STL  ---------------------\n";
	std::cout << "🔧 Constructors 🔧\n";
	std::cout << "	Default Constructor\n";
	std::vector<int>	basic;
	std::vector<char>	basic_char;
	ft_print(basic);
	//ft_print(basic_char);

	std::cout << "	Fill Constructor\n";
	std::vector<int>	fill(3, 42);
	ft_print(fill);

	std::cout << "	Range Constructor\n";
	std::vector<int>	range(fill.begin(), fill.end());
	ft_print(range);

	std::cout << "	Copy Constructor\n";
	std::vector<int>	copy(range);
	ft_print(copy);


	std::cout << "	Operator =\n";





	std::cout << "🔁 Iterators 🔁\n";
	std::cout << "	Begin\n";
	std::cout << "	End\n";
	std::cout << "	Rbegin\n";
	std::cout << "	Rend\n";





	std::cout << "📦 Capacity 📦\n";
	std::cout << "	Size\n";
	std::cout << "	Max Size\n";
	std::cout << "	Resize\n";
	std::cout << "	Resize\n";
	std::cout << "	Capacity\n";
	std::cout << "	Empty\n";
	std::cout << "	Reserve\n";





	std::cout << "🔑 Element Access 🔑\n";
	std::cout << "	Operator [ ]\n";
	std::cout << "	At\n";
	std::cout << "	Front\n";
	std::cout << "	Back\n";





	std::cout << "✍️  Modifiers ✍️\n";
	std::cout << "	Assign\n";
	std::cout << "	Push Back\n";
	std::cout << "	Pop Back\n";
	std::cout << "	Insert\n";
	std::cout << "	Erase\n";
	std::cout << "	Swap\n";
	std::cout << "	Clear\n";





	std::cout << "🏠  Allocator 🏠\n";
	std::cout << "	Get Allocator\n";





	std::cout << "❌  Non-member function overloads ❌n";
	std::cout << "	Relational Operators\n";
	std::cout << "	Swap\n";






	std::cout << "---------------------------  My Vector STL  ----------------------\n";

	std::cout << "🔧 Constructors 🔧\n";
	std::cout << "	Default Constructor\n";

	std::cout << "	Fill Constructor\n";

	std::cout << "	Range Constructor\n";

	std::cout << "	Copy Constructor\n";





	std::cout << "🔁 Iterators 🔁\n";
	std::cout << "	Begin\n";
	std::cout << "	End\n";
	std::cout << "	Rbegin\n";
	std::cout << "	Rend\n";





	std::cout << "📦 Capacity 📦\n";
	std::cout << "	Size\n";
	std::cout << "	Max Size\n";
	std::cout << "	Resize\n";
	std::cout << "	Resize\n";
	std::cout << "	Capacity\n";
	std::cout << "	Empty\n";
	std::cout << "	Reserve\n";





	std::cout << "🔑 Element Access 🔑\n";
	std::cout << "	Operator [ ]\n";
	std::cout << "	At\n";
	std::cout << "	Front\n";
	std::cout << "	Back\n";





	std::cout << "✍️  Modifiers ✍️\n";
	std::cout << "	Assign\n";
	std::cout << "	Push Back\n";
	std::cout << "	Pop Back\n";
	std::cout << "	Insert\n";
	std::cout << "	Erase\n";
	std::cout << "	Swap\n";
	std::cout << "	Clear\n";





	std::cout << "🏠  Allocator 🏠\n";
	std::cout << "	Get Allocator\n";





	std::cout << "❌  Non-member function overloads ❌n";
	std::cout << "	Relational Operators\n";
	std::cout << "	Swap\n";





	return 0;
}
