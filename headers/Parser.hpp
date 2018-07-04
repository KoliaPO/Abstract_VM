/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:43:53 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 14:44:33 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_PARSER_HPP
#define ABSTRACTVM_PARSER_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "Commands/Commands.hpp"
#include "../headers/Commands/Push.hpp"
#include "../headers/Commands/Pop.hpp"
#include "../headers/Commands/Dump.hpp"
#include "../headers/Commands/Assert.hpp"
#include "../headers/Commands/Add.hpp"
#include "../headers/Commands/Sub.hpp"
#include "../headers/Commands/Mul.hpp"
#include "../headers/Commands/Div.hpp"
#include "../headers/Commands/Mod.hpp"
#include "../headers/Commands/Print.hpp"

class Parser
{
private:
	std::vector<Commands *> commands;
	std::vector<std::string> nameCommands;

public:
	Parser();
	Parser(Parser const &obj);
	~Parser();
	Parser &operator=(Parser const &obj);
	void readFromFile(std::string const &filename);
	void readUserInput();
	void initCommands();
	void doCommand(std::vector<IOperand const *> *v, std::string line);
	void checkExit(std::string const &filename);

	class FileOpenException : public std::exception
	{
	public:
		FileOpenException();
		FileOpenException(FileOpenException const &obj);
		~FileOpenException() throw();
		FileOpenException &operator=(FileOpenException const &obj);
		virtual const char *what() const throw();
	};

	class NoExitException : public std::exception
	{
	public:
		NoExitException();
		NoExitException(NoExitException const &obj);
		~NoExitException() throw();
		NoExitException &operator=(NoExitException const &obj);
		virtual const char *what() const throw();
	};

	class WrongCommandException : public std::exception
	{
	public:
		WrongCommandException();
		WrongCommandException(WrongCommandException const &obj);
		~WrongCommandException() throw();
		WrongCommandException &operator=(WrongCommandException const &obj);
		virtual const char *what() const throw();
	};
};

#endif
