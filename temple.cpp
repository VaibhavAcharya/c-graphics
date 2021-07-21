#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawRiver () {
	int i, rx, ry;
	setcolor(CYAN);

	line(0, 0, 0, 420);
	line(160, 0, 160, 420);

	for (i = 0; i < 50; i++) {
		rx = random(160);
		ry = random(420);

		line(rx, ry, rx, ry + 4);
	}
}

void drawHut () {
	int ry;
	setcolor(LIGHTRED);

	outtextxy(350, 250, "Jai Shree Ram");

	line(300, 200, 500, 200);
	line(300, 400, 500, 400);
	line(300, 200, 300, 400);
	line(500, 200, 500, 400);
	line(350, 300, 350, 400);
	line(450, 300, 450, 400);
	line(350, 300, 450, 300);

	line(400, 200, 400, 150);

	if (random(2)) { ry = 140; } else { ry = 160; }

	line(400, 150, 420, ry);
	line(420, ry, 440, 150);
}

void drawSun () {
	int rr;
	setcolor(BROWN);

	circle(500, 50, 25);

	setcolor(YELLOW);
	if (random(2)) { rr = 30; } else { rr = 35; }

	circle(500, 50, rr);
}

void main () {
	int GDriver = DETECT, GMode;
	initgraph(&GDriver, &GMode, "C:\\TURBOC3\\BGI");
	cleardevice();

	while (!kbhit()) {
		drawRiver();
		drawHut();
		drawSun();

		delay(200);
		cleardevice();
	}

	getch();
}
