﻿#include "tasks.h"

/*	Task 03. Chess & Rook [шахматная ладья]
*
*	Шахматная ладья (chess rook) ходит только по горизонтали или вертикали.
*	Даны две различные клетки шахматной доски, определите,
*	может ли ладья попасть с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое (не забудьте про "защиту от дурака"),
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
* 
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 4 4 8
*	[output 2]: true
*/

bool task03(int x1, int y1, int x2, int y2) {
	if (x1 > 8 || x2 > 8 || y1 > 8 || y2 > 8 ||
		x1 <= 0 || x2 <= 0 || y1 <= 0 || y2 <= 0) {
		return false;
	}
	if (x1 == x2 && y1 != y2 || y1 == y2 && x1 != x2) {
		return true;
	}

	return false;
}