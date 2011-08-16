#include<stdio.h>
#include"func.h"
#include<stdlib.h>
#include<fcntl.h>
#include<linux/fb.h>
#include<sys/ioctl.h>
int init_data(void)
{
	int fd = 0;
	struct fb_var_screeninfo fb_var;
	fd = open("/dev/fb0", O_RDWR); 
	if(fd < 0)
	{
		perror("open fb0");
		exit(0);
	}
	if(ioctl(fd, FBIOGET_VSCREENINFO, &fb_var) < 0)
	{
		perror("ioctl");
		exit(0);
	}
	printf("w=%d\th=%d\tbpp=%d\n", fb_var.xres,fb_var.yres,fb_var.bits_per_pixel);
	return 0;
}
