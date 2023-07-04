#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <WinUser.h>
#include <conio.h>
#include "Extern.h"
#include "AI.h"



void AI_low(int map[3][3]) {
	do {
		x = rand() % 3;
		y = rand() % 3;
	} while (map[x][y] != 0);
	map[x][y] = 2;
}

void AI_low5(int map5[5][5]) {
	do {
		x = rand() % 5;
		y = rand() % 5;
	} while (map[x][y] != 0);
	map[x][y] = 2;
}

void AI_0x0(int map[3][3]) {
	if ((x == 0) and (y == 0) and (move == 1)) {
		x = 1; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Кажется, у тебя есть тактика?\n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 3)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 3)) {
		x = 1; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 5)) {
		x = 1; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 7)) {
		x = 2; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 7)) {
		x = 2; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 3)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 0; y = 2;
		}
		else {
			x = 2; y = 0;
		}
		if (coutrand == 3) {
			x = 1; y = 0;
			printf("Компьютер:");
			Sleep(1000);
			printf(" выиграть не получится");
			map[x][y] = 2;
		}
		else {
			map[x][y] = 2;
			printf("Компьютер: ");
			Sleep(1000);
			printf("Как я понял, ");
			Sleep(1000);
			printf("ты хочешь победить? \n");
			Sleep(1000);
		}
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 5) and (coutrand == 3)) {
		x = 0; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 7) and (coutrand == 3)) {
		x = 2; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 1; y = 0;
		}
		else {
			x = 2; y = 1;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n");
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 0; y = 1;
		}
		else {
			x = 1; y = 2;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n"); //тактика для хода 00
		move++;
	}
}

void AI_0x2(int map[3][3]) {
	if ((x == 0) and (y == 2) and (move == 1)) {
		x = 1; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Кажется, у тебя есть тактика?\n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 3)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 3)) {
		x = 1; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 0) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 7)) {
		x = 2; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 7)) {
		x = 2; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 3)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 0; y = 0;
		}
		else {
			x = 2; y = 2;
		}
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Как я понял, ");
		Sleep(1000);
		printf("ты хочешь победить? \n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 1; y = 0;
		}
		else {
			x = 0; y = 1;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n");
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 2; y = 1;
		}
		else {
			x = 1; y = 2;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n"); //тактика для хода 02
		move++;
	}
}

void AI_2x2(int map[3][3]) {
	if ((x == 2) and (y == 2) and (move == 1)) {
		x = 1; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Кажется, у тебя есть тактика?\n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 3)) {
		x = 2; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 3)) {
		x = 1; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 1) and (move == 5)) {
		x = 1; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 0) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 0) and (move == 7)) {
		x = 0; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 7)) {
		x = 2; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 3)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 2; y = 0;
		}
		else {
			x = 0; y = 2;
		}
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Как я понял, ");
		Sleep(1000);
		printf("ты хочешь победить? \n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 1; y = 0;
		}
		else {
			x = 2; y = 1;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n");
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 2; y = 1;
		}
		else {
			x = 1; y = 2;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n"); //тактика для хода 22
		move++;
	}
}

void AI_2x0(int map[3][3]) {
	if ((x == 2) and (y == 0) and (move == 1)) {
		x = 1; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Кажется, у тебя есть тактика?\n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 3)) {
		x = 2; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 3)) {
		x = 1; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 1) and (move == 5)) {
		x = 1; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 1) and (y == 0) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 1) and (move == 7)) {
		x = 0; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 7)) {
		x = 2; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 3)) {
		coutrand = rand() % 3;
		if (coutrand == 0) {
			x = 0; y = 0;
		}
		else {
			x = 2; y = 2;
		}
		if (coutrand == 3) {
			x = 1; y = 0;
			printf("Компьютер:");
			Sleep(1000);
			printf(" выиграть не получится");
			map[x][y] = 2;
		}
		else {
			map[x][y] = 2;
			printf("Компьютер: ");
			Sleep(1000);
			printf("Как я понял, ");
			Sleep(1000);
			printf("ты хочешь победить? \n");
			Sleep(1000);
		}
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 5) and (coutrand == 3)) {
		x = 2; y = 2;
		map[x][y] = 2;
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 7) and (coutrand == 3)) {
		x = 1; y = 0;
		map[x][y] = 2;
		move++;
	}
	if ((x == 2) and (y == 2) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 1; y = 2;
		}
		else {
			x = 2; y = 1;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n");
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 5)) {
		coutrand = rand() % 2;
		if (coutrand == 0) {
			x = 0; y = 1;
		}
		else {
			x = 1; y = 0;
		}
		map[x][y] = 2;
		printf("Компьютер: А ты силён\n"); //тактика для хода 20
		move++;
	}
}

void AI_1x1(int map[3][3]) {
	if ((x == 1) and (y == 1) and (move == 1)) {
		x = 2; y = 2;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Чтож, приступим\n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 0) and (move == 3)) {
		x = 0; y = 2;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("А ты не глуп\n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 0) and (move == 3)) {
		x = 0; y = 2;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("А ты не глуп\n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 2) and (move == 3)) {
		x = 2; y = 0;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("А ты не глуп\n");
		Sleep(1000);
		move++;
	}
	if ((x != 1) and (y != 2) and (move == 5) and ((x == 0) and (y == 0) and (move == 5))) {
		x = 1; y = 2;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Я ждал большего от тебя\n");
		Sleep(1000);
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 5)) {
		x = 1; y = 0;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Я ждал большего от тебя\n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 5)) {
		x = 0; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Я ждал большего от тебя\n");
		Sleep(1000);
		move++;
	}
	if ((x == 0) and (y == 1) and (move == 7)) {
		x = 2; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Это конец, у тебя нет выбора\n");
		Sleep(1000);
		move++;
	}
	if ((x == 2) and (y == 1) and (move == 7)) {
		x = 0; y = 1;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Это конец, у тебя нет выбора\n");
		Sleep(1000);
		move++;
	}
	if ((x == 1) and (y == 2) and (move == 7)) {
		x = 1; y = 0;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Это конец, у тебя нет выбора\n");
		Sleep(1000);
		move++;
	}
	if ((x == 1) and (y == 0) and (move == 7)) {
		x = 1; y = 2;
		map[x][y] = 2;
		printf("Компьютер: ");
		Sleep(1000);
		printf("Это конец, у тебя нет выбора\n");
		Sleep(1000);
		move++;
	}
}