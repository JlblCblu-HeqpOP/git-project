#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <WinUser.h>
#include <conio.h>
#include "WIN.h"
#include "Extern.h"

void win(int map[3][3], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[2 - j][j] == val)
				c3++;
		}
		if (c0 == 3 || c1 == 3 || c2 == 3 || c3 == 3) {
			printf("Победа игрока %s!\n", name1);
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}

void win5(int map[5][5], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[4 - j][j] == val)
				c3++;
		}
		if (c0 == 4 || c1 == 4 || c2 == 4 || c3 == 4) {
			printf("Победа игрока %s!\n", name1);
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}

void win_2(int map[3][3], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[2 - j][j] == val)
				c3++;
		}
		if (c0 == 3 || c1 == 3 || c2 == 3 || c3 == 3) {
			printf("Победа игрока %s!\n", name2);
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}

void win5_2(int map[5][5], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[4 - j][j] == val)
				c3++;
		}
		if (c0 == 4 || c1 == 4 || c2 == 4 || c3 == 4) {
			printf("Победа игрока %s!\n", name2);
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}
void win_computer(int map[3][3], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[2 - j][j] == val)
				c3++;
		}
		if (c0 == 3 || c1 == 3 || c2 == 3 || c3 == 3) {
			printf("Победа компьютера!\n");
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}

void win_computer5(int map[5][5], int val) {
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map[j][i] == val)
				c0++;
			if (map[i][j] == val)
				c1++;
			if (map[j][j] == val)
				c2++;
			if (map[4 - j][j] == val)
				c3++;
		}
		if (c0 == 4 || c1 == 4 || c2 == 4 || c3 == 4) {
			printf("Победа компьютера!\n");
			WIN++;
			break;
		}
		c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	}
}