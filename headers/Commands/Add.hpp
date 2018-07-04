/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:59:22 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 15:59:22 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_ADD_HPP
#define ABSTRACTVM_ADD_HPP

#include "Commands.hpp"

class Add : public Commands
{
public:
	Add();
	~Add();
	Add(Add const &obj);
	Add &operator=(Add const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
