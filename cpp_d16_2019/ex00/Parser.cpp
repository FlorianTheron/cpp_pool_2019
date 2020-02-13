/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Parser
*/

#include "Parser.hpp"
#include <iostream>
#include <algorithm>

Parser::Parser()
{
    this->_result = 0;
}

Parser::~Parser()
{
}

int Parser::performOperation(int nb1, char op, int nb2)
{
    switch (op)
    {
        case '+':
            return nb1 + nb2;
        case '-':
            return nb1 - nb2;
        case '%':
            return nb1 % nb2;
        case '/':
            return nb1 / nb2;
        case '*':
            return nb1 * nb2;
        default:
            return 0;
    }
}

int priority(char op)
{
    if (op == '+' || op == '-')
        return (1);
    else if (op == '*' || op == '/' || op == '%')
        return (2);
    else
        return  0;
}

void Parser::calculate()
{
    int nb1 = 0;
    int nb2 = 0;
    char op = 0;

    op = this->_operands.top();
    this->_operands.pop();
    nb2 = this->_numbers.top();
    this->_numbers.pop();
    nb1 = this->_numbers.top();
    this->_numbers.pop();
    this->_numbers.push(performOperation(nb1, op, nb2));
}

void Parser::feed(const std::string &exp)
{
    int value = 0;
    this->_expression = exp;

    for (size_t idx = 0; idx < _expression.length(); idx += 1)
    {
        if (_expression[idx] == ' ')
            continue;
        if (_expression[idx] == '(')
            this->_operands.push(_expression[idx]);
        else if (std::isdigit(_expression[idx]))
        {
            value = std::stoi(&_expression[idx]);
            while (std::isdigit(_expression[idx]))
                idx += 1;
            idx -= 1;
            this->_numbers.push(value);
        }
        else if (_expression[idx] == ')')
        {
            while (!_operands.empty() && _operands.top() != '(')
                calculate();
            if (!_operands.empty())
                this->_operands.pop();
        }
        else
        {
            while (!_operands.empty() && priority(_operands.top()) >= priority(_expression[idx]))
                calculate();
            this->_operands.push(_expression[idx]);
        }
    }

    while (!_operands.empty())
        calculate();
    this->_result += this->_numbers.top();
}

void Parser::reset()
{
    this->_result = 0;
    this->_numbers = std::stack<int>();
    this->_operands = std::stack<char>();
}

int Parser::result() const
{
    return this->_result;
}