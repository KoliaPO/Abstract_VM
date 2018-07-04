/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:06:03 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/28 14:20:41 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Add.hpp"

Add::Add()
{
}

Add::Add(Add const &obj)
{
	*this = obj;
}

Add& Add::operator=(Add const &obj)
{
	(void)obj;
	return *this;
}

Add::~Add()
{
}

void Add::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	if (v->size() < 2)
		throw Commands::FewArgumentsException();
	IOperand const *num1 = v->back();
	v->pop_back();
	IOperand const *num2 = v->back();
	v->pop_back();
	v->push_back((*num2) + (*num1));
	(void)line;
}
