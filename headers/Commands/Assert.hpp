/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Assert.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:58:44 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/26 18:37:09 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_ASSERT_HPP
#define ABSTRACTVM_ASSERT_HPP

#include "Commands.hpp"

class Assert : public Commands
{
public:
	Assert();
	Assert(Assert const &obj);
	~Assert();
	Assert &operator=(Assert const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);
	class DifferentValueException : public std::exception
	{
	public:
		DifferentValueException();
		DifferentValueException(DifferentValueException const &obj);
		~DifferentValueException() throw();
		DifferentValueException &operator=(DifferentValueException const &obj);
		virtual const char *what() const throw();
	};
};


#endif
