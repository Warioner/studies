#ifndef SOMEFUNCTIONS_HPP
#define SOMEFUNCTIONS_HPP
#include "struct.hpp"
#include "treeproperties.hpp"
#include <conio.h>
#include <iostream>

/* Да | Нет */
int selectionCheck();

/* Пауза в конце программы */
void pauseAtTheEnd();

void table(tree *PBST, tree *RST, int n);
#endif