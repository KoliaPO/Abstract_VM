/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:01:54 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 15:50:02 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_PRINT_HPP
#define ABSTRACTVM_PRINT_HPP

#include "Commands.hpp"

class Print : public Commands
{
public:
	Print();
	Print(Print const &obj);
	~Print();
	Print &operator=(Print const &obj);
	void doCommands(std::vector<IOperand const *> *v, std::string line);

	class NotEightTypeException : public std::exception
	{
	public:
		NotEightTypeException();
		NotEightTypeException(NotEightTypeException const &obj);
		~NotEightTypeException() throw();
		NotEightTypeException &operator=(NotEightTypeException const &obj);
		virtual const char *what() const throw();
	};
};

#endif
