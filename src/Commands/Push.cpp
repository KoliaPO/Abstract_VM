/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:07:16 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 16:20:06 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Push.hpp"

Push::Push()
{
	initNameType();
}

Push::Push(Push const &obj)
{
	*this = obj;
}

Push& Push::operator=(Push const &obj)
{
	(void)obj;
	return *this;
}

Push::~Push()
{
}

void Push::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	OFactory fact;
	std::string aux;
	std::stringstream ss(line);
	size_t i;

	if (line.find(')') == std::string::npos || line.find('(') ==  std::string::npos)
		throw Commands::WrongValueException();
	std::getline(ss, aux, ' ');
	std::getline(ss, aux, '(');
	if (aux.length() == 0)
		throw Commands::WrongTypeException();
	for (i = 0; i < nameType.size(); i++)
	{
		if (aux == nameType.at(i))
		{
			std::getline(ss, aux, ')');
			if (aux.length() == 0)
				throw Commands::WrongValueException();
			v->push_back(fact.createOperand(eOperandType(i), aux));
			break;
		}
	}
	if (i == nameType.size())
		throw Commands::WrongTypeException();
}