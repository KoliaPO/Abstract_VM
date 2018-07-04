/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Commands.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:08:49 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/26 16:08:51 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include "../IOperand.hpp"
#include "../OFactory.hpp"
#include <vector>
#include <sstream>


class Commands
{
public:
	std::vector<std::string> nameType;
	Commands();
	void initNameType();
	virtual ~Commands();
	virtual void doCommands(std::vector<IOperand const *> *v, std::string line) = 0;

	class WrongTypeException : public std::exception
	{
	public:
		WrongTypeException();
		WrongTypeException(WrongTypeException const &obj);
		~WrongTypeException() throw();
		WrongTypeException &operator=(WrongTypeException const &obj);
		virtual const char *what() const throw();
	};

	class WrongValueException : public std::exception
	{
	public:
		WrongValueException();
		WrongValueException(WrongValueException const &obj);
		~WrongValueException() throw();
		WrongValueException &operator=(WrongValueException const &obj);
		virtual const char *what() const throw();
	};

	class FewArgumentsException : public std::exception
	{
	public:
		FewArgumentsException();
		FewArgumentsException(FewArgumentsException const &obj);
		~FewArgumentsException() throw();
		FewArgumentsException &operator=(FewArgumentsException const &obj);
		virtual const char *what() const throw();
	};

	class EmpyStackException : public std::exception
	{
	public:
		EmpyStackException();
		EmpyStackException(EmpyStackException const &obj);
		~EmpyStackException() throw();
		EmpyStackException &operator=(EmpyStackException const &obj);
		virtual const char *what() const throw();
	};
};

#endif
