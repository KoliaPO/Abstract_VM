/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mod.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:01:23 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 16:01:23 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_MOD_HPP
#define ABSTRACTVM_MOD_HPP

#include "Commands.hpp"

class Mod : public Commands
{
public:
	Mod();
	Mod(Mod const &obj);
	~Mod();
	Mod &operator=(Mod const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};

#endif
