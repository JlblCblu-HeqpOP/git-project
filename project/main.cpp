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
#include "WIN.h"


int val = 0, difficult = 0, game_mode = 2, curAI = 5, cout_menu = 0, menu_com = 0, cout_play = 0;
int cout_rules = 0, map_size = 0, cout_map = 0, cout_map_place = 1;
char klav;

void menu() {
	int tmp = 0;
	printf("   МЕНЮ\n");
	printf("->Играть<-\n");
	printf("  Правила\n");
	printf("  Выход\n");
	while (menu_com == 0) {
		klav = _getch();

		if (klav == 80 and cout_menu == 1) {
			system("cls");
			printf("   МЕНЮ\n");
			printf("  Играть\n");
			printf("  Правила\n");
			printf("->Выход<-\n");
			cout_menu = 2;
		}
		if (klav == 80 and cout_menu == 0) {
			system("cls");
			printf("   МЕНЮ\n");
			printf("  Играть\n");
			printf("->Правила<-\n");
			printf("  Выход\n");
			cout_menu = 1;
		}
		if (klav == 72 and cout_menu == 1) {
			system("cls");
			printf("   МЕНЮ\n");
			printf("->Играть<-\n");
			printf("  Правила\n");
			printf("  Выход\n");
			cout_menu = 0;
		}
		if (klav == 72 and cout_menu == 2) {
			system("cls");
			printf("   МЕНЮ\n");
			printf("  Играть\n");
			printf("->Правила<-\n");
			printf("  Выход\n");
			cout_menu = 1;
		}
		if (klav == 13 and cout_menu == 0) {
			menu_com = 1;
		}
		if (klav == 13 and cout_menu == 1) {
			menu_com = 2;
		}
		if (klav == 13 and cout_menu == 2) {
			menu_com = 3;
		}
	}
	if (menu_com == 1) {
		while (game_mode == 2) {
			system("cls");
			printf("Выберите режим игры\n->Играть вдвоём<-\nИграть против компьютера\n");
			while (menu_com == 1 and game_mode == 2) {
				klav = _getch();
				if (klav == 13 and cout_play == 0) {
					system("cls");
					printf("Выберите размер поля\n->3x3<-             5x5");
					while (map_size == 0) {
						klav = _getch();
						if (klav == 77 and cout_map == 0) {
							system("cls");
							printf("Выберите размер поля\n3x3             ->5x5<-");
							cout_map = 1;
						}
						if (klav == 75 and cout_map == 1) {
							system("cls");
							printf("Выберите размер поля\n->3x3<-             5x5");
							cout_map = 0;
						}
						if (klav == 13 and cout_map == 0) {
							map_size = 3;
						}
						if (klav == 13 and cout_map == 1) {
							map_size = 5;
						}
					}
					game_mode = 0;
				}
				if (klav == 13 and cout_play == 1) {
					system("cls");
					printf("Выберите размер поля\n->3x3<-             5x5");
					while (map_size == 0) {
						klav = _getch();
						if (klav == 77 and cout_map == 0) {
							system("cls");
							printf("Выберите размер поля\n3x3             ->5x5<-");
							cout_map = 1;
						}
						if (klav == 75 and cout_map == 1) {
							system("cls");
							printf("Выберите размер поля\n->3x3<-             5x5");
							cout_map = 0;
						}
						if (klav == 13 and cout_map == 0) {
							map_size = 3;
						}
						if (klav == 13 and cout_map == 1) {
							map_size = 5;
						}
					}
					game_mode = 1;
				}
				if (klav == 80 and cout_play == 0) {
					system("cls");
					printf("Выберите режим игры\nИграть вдвоём\n->Играть против компьютера<-\n");
					cout_play++;
				}
				if (klav == 72 and cout_play == 1) {
					system("cls");
					printf("Выберите режим игры\n->Играть вдвоём<-\nИграть против компьютера\n");
					cout_play--;
				}
			}
			break;
		}
	}
	if (menu_com == 2) {
		system("cls");
		printf("Правила игры в Крестики-Нолики\n");
		printf("Для поля 3 на 3\n");
		printf("Побеждает тот игрок, который первый соберёт 3 подряд одинаковых символа\n");
		printf("Для поля 5 на 5\n");
		printf("Побеждает тот игрок, который первый соберёт 4 подряд одинаковых символа\n");
		Sleep(1000);
		printf("Играть то будем?\n ");
		Sleep(1000);
		printf("->Играть<-		Выход\n");
		while (game_mode == 2) {
			klav = _getch();
			if (klav == 77 and cout_rules == 0) {
				system("cls");
				printf("Играть		->Выход<-\n");
				cout_rules = 1;
			}
			if (klav == 75 and cout_rules == 1) {
				system("cls");
				printf("->Играть<-		Выход\n");
				cout_rules = 0;
			}
			if (klav == 13 and cout_rules == 0) {
				while (game_mode == 2) {
					system("cls");
					printf("Выберите режим игры\n->Играть вдвоём<-\nИграть против компьютера\n");
					while (game_mode == 2) {
						klav = _getch();
						if (klav == 13 and cout_play == 0) {
							system("cls");
							printf("Выберите размер поля\n->3x3<-             5x5");
							while (map_size == 0) {
								klav = _getch();
								if (klav == 77 and cout_map == 0) {
									system("cls");
									printf("Выберите размер поля\n3x3             ->5x5<-");
									cout_map = 1;
								}
								if (klav == 75 and cout_map == 1) {
									system("cls");
									printf("Выберите размер поля\n->3x3<-             5x5");
									cout_map = 0;
								}
								if (klav == 13 and cout_map == 0) {
									map_size = 3;
								}
								if (klav == 13 and cout_map == 1) {
									map_size = 5;
								}
							}
							game_mode = 0;
						}
						if (klav == 13 and cout_play == 1) {
							game_mode = 1;
						}
						if (klav == 80 and cout_play == 0) {
							system("cls");
							printf("Выберите режим игры\nИграть вдвоём\n->Играть против компьютера<-\n");
							cout_play = 1;
						}
						if (klav == 72 and cout_play == 1) {
							system("cls");
							printf("Выберите режим игры\n->Играть вдвоём<-\nИграть против компьютера\n");
							cout_play = 0;
						}
					}
					break;
				}
			}
		}
		if (klav == 13 and cout_rules == 1) exit(0);
	}
	if (menu_com == 3) { exit(0); }
}

void map_show(int map[3][3]) {
	system("cls");
	if (game_mode == 0) {
		if (move % 2 == 0) {
			printf("Ход игрока %s\n", name2);
		}
		if (move % 2 == 1) {
			printf("Ход игрока %s\n", name1);
		}
	}
	if (game_mode == 1) {
		printf("Играет %s\n", name1);
	}

	if (cout_map_place == 1) {
		printf("[%d]|%d||%d|\n|%d||%d||%d|\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 2) {
		printf("|%d|[%d]|%d|\n|%d||%d||%d|\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 3) {
		printf("|%d||%d|[%d]\n|%d||%d||%d|\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 4) {
		printf("|%d||%d||%d|\n[%d]|%d||%d|\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 5) {
		printf("|%d||%d||%d|\n|%d|[%d]|%d|\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 6) {
		printf("|%d||%d||%d|\n|%d||%d|[%d]\n|%d||%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 7) {
		printf("|%d||%d||%d|\n|%d||%d||%d|\n[%d]|%d||%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 8) {
		printf("|%d||%d||%d|\n|%d||%d||%d|\n|%d|[%d]|%d|\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	if (cout_map_place == 9) {
		printf("|%d||%d||%d|\n|%d||%d||%d|\n|%d||%d|[%d]\n", map[0][0], map[1][0], map[2][0], map[0][1], map[1][1], map[2][1], map[0][2], map[1][2], map[2][2]);
	}
	printf("\n");
}

void map_show5(int map5[5][5]) {
	system("cls");
	if (game_mode == 0) {
		if (move % 2 == 0) {
			printf("Ход игрока %s\n", name2);
		}
		if (move % 2 == 1) {
			printf("Ход игрока %s\n", name1);
		}
	}
	if (game_mode == 1) {
		printf("Играет %s\n", name1);

	}
	if (cout_map_place == 1) {
		printf("[%d]|%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 2) {
		printf("|%d|[%d]|%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 3) {
		printf("|%d||%d|[%d]|%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 4) {
		printf("|%d||%d||%d|[%d]|%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 5) {
		printf("|%d||%d||%d||%d|[%d]\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 6) {
		printf("|%d||%d||%d||%d||%d|\n[%d]|%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 7) {
		printf("|%d||%d||%d||%d||%d|\n|%d|[%d]|%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 8) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d|[%d]|%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 9) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d|[%d]|%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 10) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d|[%d]\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 11) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n[%d]|%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 12) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d|[%d]|%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 13) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d|[%d]|%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 14) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d|[%d]|%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 15) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d|[%d]\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 16) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n[%d]|%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 17) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d|[%d]|%d||%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 18) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d|[%d]|%d||%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 19) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d|[%d]|%d|\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 20) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d|[%d]\n|%d||%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 21) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n[%d]|%d||%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 22) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d|[%d]|%d||%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 23) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d|[%d]|%d||%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 24) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d|[%d]|%d|\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	if (cout_map_place == 25) {
		printf("|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d||%d|\n|%d||%d||%d||%d|[%d]\n", map5[0][0], map5[1][0], map5[2][0], map5[3][0], map5[4][0], map5[0][1], map5[1][1], map5[2][1], map5[3][1], map5[4][1], map5[0][2], map5[1][2], map5[2][2], map5[3][2], map5[4][2], map5[0][3], map5[1][3], map5[2][3], map5[3][3], map5[4][3], map5[0][4], map5[1][4], map5[2][4], map5[3][4], map5[4][4]);
	}
	printf("\n");
}

void map_place() {
	map_show(map);
	while (move < 9 and WIN != 1) {
		klav = _getch();
		if (klav == 13 and cout_map_place == 1) {
			if (map[0][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 0;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				__asm {
					mov eax, move
					add eax, 1
					mov move, eax
				}
			}
		}
		if (klav == 13 and cout_map_place == 2) {
			if (map[1][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 0;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 3) {
			if (map[2][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 0;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 4) {
			if (map[0][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 1;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 5) {
			if (map[1][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 1;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 6) {
			if (map[2][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 1;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 7) {
			if (map[0][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 2;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 8) {
			if (map[1][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 2;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 9) {
			if (map[2][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 2;
				if (move % 2 == 1)
					map[x][y] = 2;
				if (move % 2 == 0)
					map[x][y] = 1;
				move++;
			}
		}
		if (klav == 77 and cout_map_place == 2) {
			cout_map_place = 3;
		}
		if (klav == 77 and cout_map_place == 1) {
			cout_map_place = 2;
		}
		if (klav == 77 and cout_map_place == 5) {
			cout_map_place = 6;
		}
		if (klav == 77 and cout_map_place == 4) {
			cout_map_place = 5;
		}
		if (klav == 77 and cout_map_place == 8) {
			cout_map_place = 9;
		}
		if (klav == 77 and cout_map_place == 7) {
			cout_map_place = 8;
		}
		if (klav == 75 and cout_map_place == 2) {
			cout_map_place = 1;
		}
		if (klav == 75 and cout_map_place == 3) {
			cout_map_place = 2;
		}
		if (klav == 75 and cout_map_place == 5) {
			cout_map_place = 4;
		}
		if (klav == 75 and cout_map_place == 6) {
			cout_map_place = 5;
		}
		if (klav == 75 and cout_map_place == 8) {
			cout_map_place = 7;
		}
		if (klav == 75 and cout_map_place == 9) {
			cout_map_place = 8;
		}
		if (klav == 80 and cout_map_place == 4) {
			cout_map_place = 7;
		}
		if (klav == 80 and cout_map_place == 1) {
			cout_map_place = 4;
		}
		if (klav == 80 and cout_map_place == 5) {
			cout_map_place = 8;
		}
		if (klav == 80 and cout_map_place == 2) {
			cout_map_place = 5;
		}
		if (klav == 80 and cout_map_place == 6) {
			cout_map_place = 9;
		}
		if (klav == 80 and cout_map_place == 3) {
			cout_map_place = 6;
		}
		if (klav == 72 and cout_map_place == 4) {
			cout_map_place = 1;
		}
		if (klav == 72 and cout_map_place == 7) {
			cout_map_place = 4;
		}
		if (klav == 72 and cout_map_place == 5) {
			cout_map_place = 2;
		}
		if (klav == 72 and cout_map_place == 8) {
			cout_map_place = 5;
		}
		if (klav == 72 and cout_map_place == 6) {
			cout_map_place = 3;
		}
		if (klav == 72 and cout_map_place == 9) {
			cout_map_place = 6;
		}
		map_show(map);
		if (game_mode == 1) {
			win(map, 1);
			if (WIN == 1) break;
			if ((x == 0) and (y == 0) and (move == 1)) {
				AI_0x0(map);
				curAI = 0;
			}
			if ((x == 2) and (y == 0) and (move == 1)) {
				AI_2x0(map);
				curAI = 1;
			}
			if ((x == 0) and (y == 2) and (move == 1)) {
				AI_0x2(map);
				curAI = 2;
			}
			if ((x == 2) and (y == 2) and (move == 1)) {
				AI_2x2(map);
				curAI = 3;
			}
			if ((x == 1) and (y == 1) and (move == 1)) {
				AI_1x1;
				curAI = 4;
			}
			if (curAI == 0) 	AI_0x0(map);
			if (curAI == 1) 	AI_2x0(map);
			if (curAI == 2) 	AI_0x2(map);
			if (curAI == 3) 	AI_2x2(map);
			if (curAI == 4) 	AI_1x1(map);
			if (curAI == 5)		AI_low(map);
			map_show(map);
			win_computer(map, 2);
			if (WIN == 1) break;
		}
		if (game_mode == 0) {
			win(map, 1);
			win_2(map, 2);
		}
	}
}

void map_place5() {
	map_show5(map5);
	while (move < 25 and WIN != 1) {
		klav = _getch();
		if (klav == 13 and cout_map_place == 1) {
			if (map5[0][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 0;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 2) {
			if (map5[1][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 0;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 3) {
			if (map5[2][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 0;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 4) {
			if (map5[3][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 3; y = 0;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 5) {
			if (map5[4][0] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 4; y = 0;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 6) {
			if (map5[0][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 1;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 7) {
			if (map5[1][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 1;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 8) {
			if (map5[2][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 1;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 9) {
			if (map5[3][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 3; y = 1;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 10) {
			if (map5[4][1] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 4; y = 1;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 11) {
			if (map5[0][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 2;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 12) {
			if (map5[1][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 2;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 13) {
			if (map5[2][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 2;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 14) {
			if (map5[3][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 3; y = 2;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 15) {
			if (map5[4][2] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 4; y = 2;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 16) {
			if (map5[0][3] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 3;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 17) {
			if (map5[1][3] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 3;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 18) {
			if (map5[2][3] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 3;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 19) {
			if (map5[3][3] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 3; y = 3;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 20) {
			if (map5[4][3] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 4; y = 3;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 21) {
			if (map5[0][4] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 0; y = 4;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 22) {
			if (map5[1][4] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 1; y = 4;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 23) {
			if (map5[2][4] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 2; y = 4;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 24) {
			if (map5[3][4] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 3; y = 4;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 13 and cout_map_place == 25) {
			if (map5[4][4] != 0) { printf("Данное место уже занято!!!"); Sleep(1000); }
			else {
				x = 4; y = 4;
				if (move % 2 == 1)
					map5[x][y] = 2;
				if (move % 2 == 0)
					map5[x][y] = 1;
				move++;
			}
		}
		if (klav == 77 and cout_map_place == 4) {
			cout_map_place = 5;
		}
		if (klav == 77 and cout_map_place == 3) {
			cout_map_place = 4;
		}
		if (klav == 77 and cout_map_place == 2) {
			cout_map_place = 3;
		}
		if (klav == 77 and cout_map_place == 1) {
			cout_map_place = 2;
		}
		if (klav == 77 and cout_map_place == 9) {
			cout_map_place = 10;
		}
		if (klav == 77 and cout_map_place == 8) {
			cout_map_place = 9;
		}
		if (klav == 77 and cout_map_place == 7) {
			cout_map_place = 8;
		}
		if (klav == 77 and cout_map_place == 6) {
			cout_map_place = 7;
		}
		if (klav == 77 and cout_map_place == 14) {
			cout_map_place = 15;
		}
		if (klav == 77 and cout_map_place == 13) {
			cout_map_place = 14;
		}
		if (klav == 77 and cout_map_place == 12) {
			cout_map_place = 13;
		}
		if (klav == 77 and cout_map_place == 11) {
			cout_map_place = 12;
		}
		if (klav == 77 and cout_map_place == 19) {
			cout_map_place = 20;
		}
		if (klav == 77 and cout_map_place == 18) {
			cout_map_place = 19;
		}
		if (klav == 77 and cout_map_place == 17) {
			cout_map_place = 18;
		}
		if (klav == 77 and cout_map_place == 16) {
			cout_map_place = 17;
		}
		if (klav == 77 and cout_map_place == 24) {
			cout_map_place = 25;
		}
		if (klav == 77 and cout_map_place == 23) {
			cout_map_place = 24;
		}
		if (klav == 77 and cout_map_place == 22) {
			cout_map_place = 23;
		}
		if (klav == 77 and cout_map_place == 21) {
			cout_map_place = 22;
		}
		if (klav == 75 and cout_map_place == 2) {
			cout_map_place = 1;
		}
		if (klav == 75 and cout_map_place == 3) {
			cout_map_place = 2;
		}
		if (klav == 75 and cout_map_place == 4) {
			cout_map_place = 3;
		}
		if (klav == 75 and cout_map_place == 5) {
			cout_map_place = 4;
		}
		if (klav == 75 and cout_map_place == 7) {
			cout_map_place = 6;
		}
		if (klav == 75 and cout_map_place == 8) {
			cout_map_place = 7;
		}
		if (klav == 75 and cout_map_place == 9) {
			cout_map_place = 8;
		}
		if (klav == 75 and cout_map_place == 10) {
			cout_map_place = 9;
		}
		if (klav == 75 and cout_map_place == 12) {
			cout_map_place = 11;
		}
		if (klav == 75 and cout_map_place == 13) {
			cout_map_place = 12;
		}
		if (klav == 75 and cout_map_place == 14) {
			cout_map_place = 13;
		}
		if (klav == 75 and cout_map_place == 15) {
			cout_map_place = 14;
		}
		if (klav == 75 and cout_map_place == 17) {
			cout_map_place = 16;
		}
		if (klav == 75 and cout_map_place == 18) {
			cout_map_place = 17;
		}
		if (klav == 75 and cout_map_place == 19) {
			cout_map_place = 18;
		}
		if (klav == 75 and cout_map_place == 20) {
			cout_map_place = 19;
		}
		if (klav == 75 and cout_map_place == 22) {
			cout_map_place = 21;
		}
		if (klav == 75 and cout_map_place == 23) {
			cout_map_place = 22;
		}
		if (klav == 75 and cout_map_place == 24) {
			cout_map_place = 23;
		}
		if (klav == 75 and cout_map_place == 25) {
			cout_map_place = 24;
		}
		if (klav == 80 and cout_map_place == 16) {
			cout_map_place = 21;
		}
		if (klav == 80 and cout_map_place == 11) {
			cout_map_place = 16;
		}
		if (klav == 80 and cout_map_place == 6) {
			cout_map_place = 11;
		}
		if (klav == 80 and cout_map_place == 1) {
			cout_map_place = 6;
		}
		if (klav == 80 and cout_map_place == 17) {
			cout_map_place = 22;
		}
		if (klav == 80 and cout_map_place == 12) {
			cout_map_place = 17;
		}
		if (klav == 80 and cout_map_place == 7) {
			cout_map_place = 12;
		}
		if (klav == 80 and cout_map_place == 2) {
			cout_map_place = 7;
		}
		if (klav == 80 and cout_map_place == 18) {
			cout_map_place = 23;
		}
		if (klav == 80 and cout_map_place == 13) {
			cout_map_place = 18;
		}
		if (klav == 80 and cout_map_place == 8) {
			cout_map_place = 13;
		}
		if (klav == 80 and cout_map_place == 3) {
			cout_map_place = 8;
		}
		if (klav == 80 and cout_map_place == 19) {
			cout_map_place = 24;
		}
		if (klav == 80 and cout_map_place == 14) {
			cout_map_place = 19;
		}
		if (klav == 80 and cout_map_place == 9) {
			cout_map_place = 14;
		}
		if (klav == 80 and cout_map_place == 4) {
			cout_map_place = 9;
		}
		if (klav == 80 and cout_map_place == 20) {
			cout_map_place = 25;
		}
		if (klav == 80 and cout_map_place == 15) {
			cout_map_place = 20;
		}
		if (klav == 80 and cout_map_place == 10) {
			cout_map_place = 15;
		}
		if (klav == 80 and cout_map_place == 5) {
			cout_map_place = 10;
		}
		if (klav == 72 and cout_map_place == 6) {
			cout_map_place = 1;
		}
		if (klav == 72 and cout_map_place == 11) {
			cout_map_place = 6;
		}
		if (klav == 72 and cout_map_place == 16) {
			cout_map_place = 11;
		}
		if (klav == 72 and cout_map_place == 21) {
			cout_map_place = 16;
		}
		if (klav == 72 and cout_map_place == 7) {
			cout_map_place = 2;
		}
		if (klav == 72 and cout_map_place == 12) {
			cout_map_place = 7;
		}
		if (klav == 72 and cout_map_place == 17) {
			cout_map_place = 12;
		}
		if (klav == 72 and cout_map_place == 22) {
			cout_map_place = 17;
		}
		if (klav == 72 and cout_map_place == 8) {
			cout_map_place = 3;
		}
		if (klav == 72 and cout_map_place == 13) {
			cout_map_place = 8;
		}
		if (klav == 72 and cout_map_place == 18) {
			cout_map_place = 13;
		}
		if (klav == 72 and cout_map_place == 23) {
			cout_map_place = 18;
		}
		if (klav == 72 and cout_map_place == 9) {
			cout_map_place = 4;
		}
		if (klav == 72 and cout_map_place == 14) {
			cout_map_place = 9;
		}
		if (klav == 72 and cout_map_place == 19) {
			cout_map_place = 14;
		}
		if (klav == 72 and cout_map_place == 24) {
			cout_map_place = 19;
		}
		if (klav == 72 and cout_map_place == 10) {
			cout_map_place = 5;
		}
		if (klav == 72 and cout_map_place == 15) {
			cout_map_place = 10;
		}
		if (klav == 72 and cout_map_place == 20) {
			cout_map_place = 15;
		}
		if (klav == 72 and cout_map_place == 25) {
			cout_map_place = 20;
		}
		map_show5(map5);
		if (game_mode == 1) {
			win5(map5, 1);
			if (WIN == 1) break;
			AI_low5(map5);
			map_show5(map5);
			win_computer5(map5, 2);
			if (WIN == 1) break;
		}
		if (game_mode == 0) {
			win5(map5, 1);
			win5_2(map5, 2);
		}
	}
}

int main() {
	int tmp = 0;
	system("chcp 1251");
	system("cls");
	system("color 3");
	system("mode con cols=135 lines=52");
	printf("                                   0   0 00000 00000    0\n");
	printf("                                   0  00 0     0   0   0 0\n");
	printf("                                   0 0 0 0     00000  0   0\n");
	printf("                                   00  0 0     0     0000000\n");
	printf("                                   0   0 0     0     0     0\n\n");
	printf("X  Х ХХХХХ ХХХХХ ХХХХХ ХХХХХ Х   Х Х  Х Х   Х       0   0 00000    0    0   0 0  0 0   0\n");
	printf("X Х  Х   Х Х     Х       Х   Х  ХХ Х Х  Х  ХХ       0   0 0   0   0 0   0  00 0 0  0  00\n");
	printf("XX   ХХХХХ ХХХХХ Х       Х   Х Х Х ХХ   Х Х Х ||||| 00000 0   0  0   0  0 0 0 00   0 0 0\n");
	printf("X Х  Х     Х     Х       Х   ХХ  Х Х Х  ХХ  Х       0   0 0   0 0     0 00  0 0 0  00  0\n");
	printf("X  Х Х     ХХХХХ ХХХХХ   Х   Х   Х Х  Х Х   Х       0   0 00000 0     0 0   0 0  0 0   0\n");
	Sleep(2500);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	menu();
	if (game_mode == 1) {
		system("cls");
		printf("Введите своё имя: ");
		gets_s(name1, 49);
		if (map_size == 3) {
			map_place();
			if ((WIN == 0) and (move == 9))
				printf("Ничья!\n");
		}
		if (map_size == 5) {
			map_place5();
			if ((WIN == 0) and (move == 25))
				printf("Ничья!\n");
		}
	}
	if (game_mode == 0) {
		system("cls");
		printf("Введите имя игрока 1: ");
		gets_s(name1, 49);
		printf("Введите имя игрока 2: ");
		gets_s(name2, 49);
		printf("Играют %s и %s\n", name1, name2);
		Sleep(1000);
		if (map_size == 3) {
			map_place();
			if ((WIN == 0) and (move == 9))
				printf("Ничья!\n");
		}
	}
	if (map_size == 5) {
		map_place5();
		if ((WIN == 0) and (move == 25))
			printf("Ничья!\n");
	}
}