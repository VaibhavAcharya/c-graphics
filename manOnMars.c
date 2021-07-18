#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int dw, dh, platformSize;

void initG () {
	int GDriver = DETECT, GMode;
	initgraph(&GDriver, &GMode, "C:\\TURBOC3\\BGI");
	cleardevice();

	dw = getmaxx(); dh = getmaxy(); platformSize = dh / 4;
}

void drawPlatform () {
	int y;
	setcolor(BROWN);

	for (y = (dh - platformSize); y < dh; y++) {
		line(0, y, dw, y);
	}
}

void drawStars () {
	int x, y, rx, ry;
	setcolor(CYAN);

	for (x = 0; x < 50; x++) {
		rx = random(dw); ry = random((dh - platformSize));
		line(rx, ry, rx, ry + 2);
	}
}

void drawRocket (int x, int y, int w, int h) {
	setcolor(LIGHTBLUE);

	line(x, y + (h / 2), x + (w / 2), y);
	line(x + (w / 2), y, x + w, y + (h / 2));
	line(x, y + (h / 2), x + w, y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + (w / 2), y + h);
	line(x, y + h, x + (w / 2), y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + w, y + h);
}
void drawMan (int x, int y, int w, int h) {
	setcolor(WHITE);

	circle(x + (w / 2), y + (w / 4), w / 4);

	line(x, y + (h / 2), x + (w / 2), y + (h / 4));
	line(x + (w / 2), y + (h / 4), x + w, y + (h / 2));

	line(x + (w / 2), y + (h / 4), x + (w / 2), y + (h / 2));

	line(x, y + h, x + (w / 2), y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + w, y + h);
}
void drawTitle () {
	moveto(dw / 2, dh / 4);
	setcolor(LIGHTRED);
	outtext("Mars hai shayad lol");
}

void main () {
	int bx = 0, step_size = 10;

	initG();

	setbkcolor(BLUE);
	while (!kbhit()) {
		drawTitle();
		drawPlatform();
		drawStars();
		drawRocket(dw / 4, (dh - platformSize) - 50, 50, 50);
		drawMan(bx, (dh - platformSize) - 120, 60, 120);

		if (bx > dw) { bx = 0; } else { bx += step_size; }
		delay(200);
		cleardevice();
	}

	getch();
}