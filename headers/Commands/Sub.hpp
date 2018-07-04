/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sub.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:59:46 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/25 15:59:46 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_SUB_HPP
#define ABSTRACTVM_SUB_HPP

#include "Commands.hpp"

class Sub : public Commands
{
public:
	Sub();
	Sub(Sub const &obj);
	~Sub();
	Sub &operator=(Sub const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
};
#endif
