/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sub.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:07:22 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/26 17:51:37 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Sub.hpp"

Sub::Sub()
{
}

Sub::Sub(Sub const &obj)
{
	*this = obj;
}

Sub& Sub::operator=(Sub const &obj)
{
	(void)obj;
	return *this;
}

Sub::~Sub()
{
}

void Sub::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	if (v->size() < 2)
		throw Commands::FewArgumentsException();
	IOperand const *num1 = v->back();
	v->pop_back();
	IOperand const *num2 = v->back();
	v->pop_back();
	v->push_back((*num1) - (*num2));
	(void)line;
}
