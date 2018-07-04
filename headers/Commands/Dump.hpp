/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dump.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:52:03 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 15:53:25 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_DUMP_HPP
#define ABSTRACTVM_DUMP_HPP

#include "Commands.hpp"

class Dump : public Commands
{
public:
	Dump();
	Dump(Dump const &obj);
	~Dump();
	Dump &operator=(Dump const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};
#endif
