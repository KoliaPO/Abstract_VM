/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:50:14 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 16:39:02 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_PUSH_HPP
#define ABSTRACTVM_PUSH_HPP

#include "Commands.hpp"

class Push : public Commands
{
public:
	Push();
	Push(Push const &obj);
	~Push();
	Push &operator=(Push const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
