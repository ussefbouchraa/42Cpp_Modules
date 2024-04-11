/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 07:38:31 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:50:38 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int valid_format(std::string inp)
{
    int i = 0;
    while (inp[i])
    {
        if (!isdigit(inp[i]) && inp[i] != ' ' && inp[i] != '+' && inp[i] != '-' && inp[i] != '*' && inp[i] != '/')
            return (0);
        if (inp[i] != ' ' && inp[i + 1] != ' ' && inp[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void calcc(std::stack<int> &stack, int token)
{
    int operand2 = stack.top();
    stack.pop();
    int operand1 = stack.top();
    stack.pop();

    switch (token)
    {
        case '+':
            stack.push(operand1 + operand2);
            break;
        case '-':
            stack.push(operand1 - operand2);
            break;
        case '*':
            stack.push(operand1 * operand2);
            break;
        case '/':
            if (operand2 == 0)
            {
                std::cerr << "Error: Division by zero." << std::endl;
                exit(1);
            }
            stack.push(operand1 / operand2);
            break;
    }
}
void evaluateRPN(std::string &expression)
{
    std::stack<int> stack;

    for (size_t i = 0; i < expression.size(); ++i)
    {
        if (std::isdigit(expression[i]))
            stack.push(expression[i] - '0');

        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: stack at least must have 2 operand" << std::endl;
                return;
            }
            calcc(stack, expression[i]);
        }
    }

    if (stack.size() == 1)
        std::cout << stack.top() << std::endl;
    else
        std::cerr << "Error ." << std::endl;
}
