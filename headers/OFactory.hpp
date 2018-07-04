/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OFactory.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:05:13 by myprosku          #+#    #+#             */
/*   Updated: 2018/06/27 18:59:26 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_OFACTORY_HPP
# define ABSTRACTVM_OFACTORY_HPP

# include "IOperand.hpp"
# include "TOperands.hpp"
# include <limits>
# include <cfloat>

class OFactory
{
private:
	IOperand const *createInt8(std::string const &value) const;
	IOperand const *createInt16(std::string const &value) const;
	IOperand const *createInt32(std::string const &value) const;
	IOperand const *createFloat(std::string const &value) const;
	IOperand const *createDouble(std::string const &value) const;

public:
	OFactory();
	OFactory(OFactory const &obj);
	~OFactory();
	OFactory &operator=(OFactory const &obj);
	IOperand const *createOperand(eOperandType type, std::string const &value) const;
};

#endif
