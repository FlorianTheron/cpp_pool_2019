/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <stack>
#include <string>

class Parser {
    public:
        Parser();
        ~Parser();
        void feed(const std::string &);
        int performOperation(int, char, int);
        void calculate();
        int result() const;
        void reset();
    private:
        int _result;
        std::string _expression;
        std::stack<int> _numbers;
        std::stack<char> _operands;
};

#endif /* !PARSER_HPP_ */
