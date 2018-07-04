/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dump.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:06:22 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 18:37:51 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Dump.hpp"

Dump::Dump()
{
}

Dump::Dump(Dump const &obj)
{
	*this = obj;
}

Dump& Dump::operator=(Dump const &obj)
{
	(void)obj;
	return *this;
}

Dump::~Dump()
{
}

void Dump::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	if (v->size() == 0)
		throw Commands::EmpyStackException();
	for (int i = v->size() - 1; i >= 0; i--)
		std::cout << v->at(i)->toString() << std::endl;
	(void)line;
}
