#include<stdio.h>            //<>是指在标准库中找
#include<unistd.h>
#include "func.h"              //""是指在当前目录下找
#include"various.h"
int main(int argc, const char *argv[])
{
	init_data();
	print_board();
	mouse_doing();
/*
	save_bg(512, 367);
	draw_cursor(512, 367);
	sleep(1);
	restore_bg(512, 367);
	draw_cursor(612, 300);
*/

//	fb_circle(500, 400, 100, 0x00ffff00);
/*
	fb_line(0, 0, fb_v.w-1, fb_v.h-1, 0x00ff00ff);
	fb_line(fb_v.w-1, 0, 0, fb_v.h-1, 0x00ccff00);
	fb_line(300, fb_v.h-1, 400, 0, 0x00ff00bb);
*/

/*
	int i, j;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			fb_one_pixel(500+i, 300+j, 0x0000ff00);
		}
	}
*/

	return 0;
}
