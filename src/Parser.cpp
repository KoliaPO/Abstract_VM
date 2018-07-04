/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:47:06 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 16:23:13 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Parser.hpp"


Parser::Parser()
{
	Parser::initCommands();
}

Parser::Parser(Parser const &obj)
{
	*this = obj;
}

Parser& Parser::operator=(Parser const &obj)
{
	commands = obj.commands;
	return *this;
}

Parser::~Parser()
{

}

void Parser::initCommands()
{
	commands.push_back(new Push());
	commands.push_back(new Pop());
	commands.push_back(new Dump());
	commands.push_back(new Assert());
	commands.push_back(new Add());
	commands.push_back(new Sub());
	commands.push_back(new Mul());
	commands.push_back(new Div());
	commands.push_back(new Mod());
	commands.push_back(new Print());

	nameCommands.push_back("push");
	nameCommands.push_back("pop");
	nameCommands.push_back("dump");
	nameCommands.push_back("assert");
	nameCommands.push_back("add");
	nameCommands.push_back("sub");
	nameCommands.push_back("mul");
	nameCommands.push_back("div");
	nameCommands.push_back("mod");
	nameCommands.push_back("print");
	nameCommands.push_back("exit");
}

void Parser::doCommand(std::vector<IOperand const *> *v, std::string line)
{
	std::stringstream ss(line);
	std::string aux;
	size_t i;

	std::getline(ss, aux, ' ');
	if (aux[0] != ';')
	{
		for (i = 0; i < commands.size(); i++)
		{
			if (aux == nameCommands.at(i))
			{
				commands.at(i)->doCommands(v, line);
				break ;
			}
			else if (aux == "exit")
				std::exit(0);
		}
		if (i == commands.size())
			throw WrongCommandException();
	}
}

void Parser::checkExit(std::string const &line)
{
	size_t found;

	found = line.find("exit");
	if (found == std::string::npos)
		throw NoExitException();
}

void Parser::readFromFile(std::string const &filename)
{
	std::string line;
	std::ifstream fin(filename);
	std::ifstream fin1(filename);
	std::vector<IOperand const *> v;

	if (!fin.is_open() && !fin1.is_open())
	{
		throw FileOpenException();
	}
	else
	{
		std::getline(fin1, line, '\0');
		checkExit(line);
		while (std::getline(fin, line))
			doCommand(&v, line);
	}
}

void Parser::readUserInput()
{
	std::string line;
	std::string userInput;
	std::vector<IOperand const *> v;
	std::string to;

	while (std::getline(std::cin, line) && line != ";;")
		userInput += line + "\n";
	checkExit(userInput);
	std::stringstream ss(userInput);
	while(std::getline(ss, to, '\n'))
		doCommand(&v, to);

}

Parser::FileOpenException::FileOpenException()
{
}

Parser::FileOpenException::FileOpenException(FileOpenException const &obj)
{
	*this = obj;
}

Parser::FileOpenException::~FileOpenException() throw()
{
}

Parser::FileOpenException& Parser::FileOpenException::operator=(FileOpenException const &obj)
{
	(void)obj;
	return *this;
}
const char* Parser::FileOpenException::what() const throw()
{
	return ("File can't be opened!");
}

Parser::NoExitException::NoExitException()
{
}

Parser::NoExitException::NoExitException(NoExitException const &obj)
{
	*this = obj;
}

Parser::NoExitException::~NoExitException() throw()
{
}

Parser::NoExitException& Parser::NoExitException::operator=(NoExitException const &obj)
{
	(void)obj;
	return *this;
}
const char* Parser::NoExitException::what() const throw()
{
	return ("Exception: No Exit command !");
}


Parser::WrongCommandException::WrongCommandException()
{
}

Parser::WrongCommandException::WrongCommandException(WrongCommandException const &obj)
{
	*this = obj;
}

Parser::WrongCommandException::~WrongCommandException() throw()
{
}

Parser::WrongCommandException& Parser::WrongCommandException::operator=(WrongCommandException const &obj)
{
	(void)obj;
	return *this;
}
const char* Parser::WrongCommandException::what() const throw()
{
	return ("Exception: Wrong command !");
}