/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:30:30 by acroisie          #+#    #+#             */
/*   Updated: 2022/09/20 09:27:28 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma		once

#include	"Form.hpp"

class		Intern
{
	private:
	public:
		Intern(void);
		Intern(const Intern& cpy);
		~Intern();
	
		Intern&	operator=(const Intern& obj);

		Form*	ppf(std::string formName, std::string targetName);
		Form*	rrf(std::string formName, std::string targetName);
		Form*	scf(std::string formName, std::string targetName);
	
		Form*	makeForm(std::string formName, std::string targetName);
	
};