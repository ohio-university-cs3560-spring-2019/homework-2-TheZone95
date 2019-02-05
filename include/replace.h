#pragma once
#ifndef REPLACE_H
#define REPLACE_H
#include <string>

//Replaces "find" with "repl", within the string "in"
//Returns the result
std::string Replace(std::string find, std::string repl, std::string input);

#endif