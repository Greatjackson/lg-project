//#include<stdio.h>
//extern fbscr_t fb_v;
#include<stdio.h>
#include<stdlib.h>
#include"various.h"

int fb_one_pixel(int x, int y, u32_t color)
{
	*((u32_t *)fb_v.memo+x+y*fb_v.w) = color;                //(u32_t)强制类型转换为4个字节
	return 0;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int fb_line(int x1, int y1, int x2, int y2, u32_t color)
{
	int dx = x2-x1;
	int dy = y2-y1;
	int inc = ((dx*dy) > 0 ? 1 : -1);
	int p = 0;
	if(abs(dx) > abs(dy))
	{
		if(dx < 0)
		{
			swap(&x1, &x2);
			swap(&y1, &y2);
			dx = -dx;
			dy = -dy;
		}
		dy = abs(dy);
		p = 2*dy-dx;
		while(x1 <= x2)
		{
			fb_one_pixel(x1, y1, color);
			x1++;
			if(p<0)
			{
				p += 2*dy;
			}
			else
			{
				y1 += inc;
				p += 2*(dy-dx);
			}
		}
	}
	else
	{	
		if(dy < 0)
		{
			swap(&x1, &x2);
			swap(&y1, &y2);
			dx = -dx;
			dy = -dy;
		}
		dx = abs(dx);
		p = 2*dx-dy;
		while(y1 <= y2)
		{
			fb_one_pixel(x1, y1, color);
			y1++;
			if(p<0)
			{
				p += 2*dx;
			}
			else
			{
				x1 += inc;
				p += 2*(dx-dy);
			}
	    }
	}
	return 0;
}
int fb_circle(int x0, int y0, int r, u32_t color)
{
	int x = 0;
	int y = r;
	int p = 3-2*r;

	while(x <= y)
	{

	#if 0
		fb_one_pixel(x0+x, y0+y, color);
		fb_one_pixel(x0+y, y0+x, color);
		
		fb_one_pixel(x0+x, y0-y, color);
		fb_one_pixel(x0+y, y0-x, color);
		
		fb_one_pixel(x0-x, y0+y, color);
		fb_one_pixel(x0-y, y0+x, color);
		
		fb_one_pixel(x0-x, y0-y, color);
		fb_one_pixel(x0-y, y0-x, color);
	#endif

		fb_line(x0+x, y0+y, x0-x, y0+y,color);
		fb_line(x0+y, y0+x, x0-y, y0+x,color);
		fb_line(x0+x, y0-y, x0-x, y0-y,color);
		fb_line(x0+y, y0-x, x0-y, y0-x,color);

		if(p < 0)
		{
			p += 4*x+6; 
		}
		else
		{
			p += 4*(x-y)+10;
			y--;
		}
		x++;
	}
	return 0;

}
