/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:01:10 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/26 16:09:18 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Commands/Commands.hpp"

Commands::Commands()
{
}

Commands::~Commands()
{
}

void Commands::initNameType()
{
	nameType.push_back("int8");
	nameType.push_back("int16");
	nameType.push_back("int32");
	nameType.push_back("float");
	nameType.push_back("double");
}

Commands::WrongTypeException::WrongTypeException()
{
}

Commands::WrongTypeException::~WrongTypeException() throw()
{
}

Commands::WrongTypeException::WrongTypeException(WrongTypeException const &obj)
{
	*this = obj;
}

Commands::WrongTypeException& Commands::WrongTypeException::operator=(WrongTypeException const &obj)
{
	(void)obj;
	return *this;
}

const char* Commands::WrongTypeException::what() const throw()
{
	return ("Exception: Wrong type !");
}

Commands::FewArgumentsException::FewArgumentsException()
{
}

Commands::FewArgumentsException::~FewArgumentsException() throw()
{
}

Commands::FewArgumentsException::FewArgumentsException(FewArgumentsException const &obj)
{
	*this = obj;
}

Commands::FewArgumentsException& Commands::FewArgumentsException::operator=(FewArgumentsException const &obj)
{
	(void)obj;
	return *this;
}

const char* Commands::FewArgumentsException::what() const throw()
{
	return ("Exception: Too few arguments !");
}

Commands::EmpyStackException::EmpyStackException()
{
}

Commands::EmpyStackException::~EmpyStackException() throw()
{
}

Commands::EmpyStackException::EmpyStackException(EmpyStackException const &obj)
{
	*this = obj;
}

Commands::EmpyStackException& Commands::EmpyStackException::operator=(EmpyStackException const &obj)
{
	(void)obj;
	return *this;
}

const char* Commands::EmpyStackException::what() const throw()
{
	return ("Exception: Empty stack !");
}

Commands::WrongValueException::WrongValueException()
{
}

Commands::WrongValueException::~WrongValueException() throw()
{
}

Commands::WrongValueException::WrongValueException(WrongValueException const &obj)
{
	*this = obj;
}

Commands::WrongValueException& Commands::WrongValueException::operator=(WrongValueException const &obj)
{
	(void)obj;
	return *this;
}

const char* Commands::WrongValueException::what() const throw()
{
	return ("Exception: Wrong value !");
}