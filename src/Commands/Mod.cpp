/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mod.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:06:58 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 16:06:58 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Mod.hpp"

Mod::Mod()
{
}

Mod::Mod(Mod const &obj)
{
	*this = obj;
}

Mod& Mod::operator=(Mod const &obj)
{
	(void)obj;
	return *this;
}

Mod::~Mod()
{
}

void Mod::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	if (v->size() < 2)
		throw Commands::FewArgumentsException();
	IOperand const *num1 = v->back();
	v->pop_back();
	IOperand const *num2 = v->back();
	v->pop_back();
	v->push_back((*num2) % (*num1));
	(void)line;
}