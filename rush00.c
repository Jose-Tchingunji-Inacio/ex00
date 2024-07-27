#include <unistd.h>

void write_char(char c)
{
    write(1, &c, 1);
}

void write_line(char c, int y)
{
    int i = 0;
    while (i < y)
    {
        write_char(c);
        i++;
    }
    write_char('\n');
}

void draw_top_bottom(int x)
{
    write_char('o');
    int i = 0;
    while (i < x - 2)
    {
        write_char('-');
        i++;
    }
    if (x > 1)
        write_char('o');
    write_char('\n');
}

void draw_middle(int x)
{
    write_char('|');
    int i = 0;
    while (i < x - 2)
    {
        write_char(' ');
        i++;
    }
    if (x > 1)
        write_char('|');
    write_char('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return;

    draw_top_bottom(x);
    int i = 0;
    while (i < y - 2)
    {
        draw_middle(x);
        i++;
    }
    if (y > 1)
        draw_top_bottom(x);
}
