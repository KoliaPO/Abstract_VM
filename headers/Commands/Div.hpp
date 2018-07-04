/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Div.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:00:45 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 16:00:45 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_DIV_HPP
#define ABSTRACTVM_DIV_HPP

#include "Commands.hpp"

class Div : public Commands
{
public:
	Div();
	Div(Div const &obj);
	~Div();
	Div &operator=(Div const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
