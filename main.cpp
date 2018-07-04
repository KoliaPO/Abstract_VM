/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:43:06 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/28 14:56:54 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Parser.hpp"

int	main(int ac, char **av)
{
	Parser par;

	try
	{
		if (ac == 1)
			par.readUserInput();
		else if (ac == 2)
			par.readFromFile(av[1]);
		else
			std::cout << "Enter ONE file name or without parameters !\n";
	}
	catch(std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}