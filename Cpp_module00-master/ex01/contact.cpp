/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:25:43 by ussef             #+#    #+#             */
/*   Updated: 2024/01/20 15:45:34 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

    std::string Contact::get_index()
    {
        return(index);
    }
    std::string Contact::get_firstname()
    {
        return(firstname);
    }
    std::string Contact::get_lastname()
    {
        return(lastname);
    }
    std::string Contact::get_nickname()
    {
        return(nickname);
    }
    std::string Contact::get_secret()
    {
        return(secret);
    }
      std::string Contact::get_phonenumber()
    {
        return(phonenumber);
    }
    
    void Contact::set_index(std::string value)
    {
        this->index = value;
    }
    void Contact::set_firstname(std::string value)
    {
        this->firstname = value;
    }
    void Contact::set_lastname(std::string value)
    {
        this->lastname = value;
    }
    void Contact::set_nickname(std::string value)
    {
        this->nickname = value;
    }
    void Contact::set_secret(std::string value)
    {
        this->secret = value;
    }
    void Contact::set_phonenumber(std::string value)
    {
        this->phonenumber = value;
    }