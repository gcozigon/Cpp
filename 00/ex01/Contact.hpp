/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:02:21 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/03 15:22:05 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
#include <cstring>

class Contact
{
  private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact();
	~Contact();
	void get_response(std::string str, int i);
	void DisplayContact();

	void setFirstName(std::string str);
	std::string GetFirstName();
	void setLastName(std::string str);
	std::string GetLastName();
	void setNickName(std::string str);
	std::string GetNickName();
	void setPhoneNumber(std::string str);
	std::string GetPhoneNumber();
	void setDarkestSecret(std::string str);
	std::string GetDarkestSecret();
};
#endif
