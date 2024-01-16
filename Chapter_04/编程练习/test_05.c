//编写一个程序,提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单位的文件大小
//程序中应计算文件的下载时间.注意,这里的一字节等于8位,使用float类型,并用/作除号.
//该程序要以下面的格式打印3个变量的值(下载速度,文件大小和下载时间),显示小数点后面两位数字
//At 18.12 megabytes per second, a file of 2.20 megabytes
//downloads in 0.97 seconds.
#include <stdio.h>

int main(void)
{
    float file,speed,seconds;

    printf("请输入你要下载的文件大小和下载速度:");
    scanf("%f %f",&file,&speed);
    seconds=file*8/speed;

    printf("At %2.2f megabytes per second,a file of %.2f megabytes\n",speed,file);
    printf("downloads in %.2f seconds\n",seconds);

    return 0;
}