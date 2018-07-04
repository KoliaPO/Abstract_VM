/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pop.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:51:11 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 15:53:11 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_POP_HPP
#define ABSTRACTVM_POP_HPP

#include "Commands.hpp"

class Pop : public Commands
{
public:
	Pop();
	Pop(Pop const &obj);
	~Pop();
	Pop &operator=(Pop const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
