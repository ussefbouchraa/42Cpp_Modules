/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 07:38:25 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:45:20 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cstdlib>
#include <sstream>

int valid_format(std::string inp);
void  calcc(std::stack<int>&stack, int token);
void evaluateRPN(std::string& expression);
