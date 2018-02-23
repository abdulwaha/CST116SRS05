// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

	using namespace std;

	int main()
	{
		char date1[10], date2[10];
		int y1, m1, d1, y2, m2, d2;
		int day, mon, year;

		cout << "Enter both dates in YYYY-MM-DD YYYY-MM-DD format: ";
		cin >> date1;
		cin >> date2;

		y1 = 1000 * ((int)date1[0] - 48) + 100 * ((int)date1[1] - 48) + 10 * ((int)date1[2] - 48) + ((int)date1[3] - 48);
		m1 = 10 * ((int)date1[5] - 48) + ((int)date1[6] - 48);
		d1 = 10 * ((int)date1[8] - 48) + ((int)date1[9] - 48);

		y2 = 1000 * ((int)date2[0] - 48) + 100 * ((int)date2[1] - 48) + 10 * ((int)date2[2] - 48) + ((int)date2[3] - 48);
		m2 = 10 * ((int)date2[5] - 48) + ((int)date2[6] - 48);
		d2 = 10 * ((int)date2[8] - 48) + ((int)date2[9] - 48);

		mon = m1;
		day = d1;
		year = y1;

		if ((y1 >= 1901) | (y1 <= 2099) | (y2 >= 1901) | (y2 <= 2099)) {
			int run = 1;
			while (run == 1) {
				cout << year << '-' << mon << '-' << day << endl;
				if ((mon == 1) | (mon == 3) | (mon == 5) | (mon == 7) | (mon == 8) | (mon == 10) | (mon == 12)) {
					if (day == 31) {
						day = 1;
						if (mon == 12) {
							mon = 1;
							year = year + 1;
						}
						else {
							mon = mon + 1;
						}
					}
					else {
						day = day + 1;
					}
				}
				else if ((mon == 4) | (mon == 6) | (mon == 9) | (mon == 11)) {
					if (day == 30) {
						day = 1;
						mon = mon + 1;
					}
					else {
						day = day + 1;
					}
				}
				else if (mon == 2) {
					if (year % 4 == 0) {
						if (day == 29) {
							day = 1;
							mon = mon + 1;
						}
						else {
							day = day + 1;
						}
					}
					else {
						if (day == 28) {
							day = 1;
							mon = mon + 1;
						}
						else {
							day = day + 1;
						}
					}
				}
				if ((year == y2) & (mon == m2) & (day == d2)) {
					run = 0;
				}
			}

		}
	} 