/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mul.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:00:13 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 16:00:13 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_MUL_HPP
#define ABSTRACTVM_MUL_HPP

#include "Commands.hpp"

class Mul : public Commands
{
public:
	Mul();
	Mul(Mul const &obj);
	~Mul();
	Mul &operator=(Mul const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
