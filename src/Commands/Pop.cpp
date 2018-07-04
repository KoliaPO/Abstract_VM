/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pop.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:06:53 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/26 18:12:51 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Pop.hpp"

Pop::Pop()
{
}

Pop::Pop(Pop const &obj)
{
	*this = obj;
}

Pop& Pop::operator=(Pop const &obj)
{
	(void)obj;
	return *this;
}

Pop::~Pop()
{
}

void Pop::doCommands(std::vector<IOperand const *> *v, std::string line)
{
	if (v->size() == 0)
		throw Commands::EmpyStackException();
	v->pop_back();
	(void)line;
}