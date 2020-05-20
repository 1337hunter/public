#include "libft/libft.h"
#include "ftprintf.h"
#include "string.h"
#include <stdio.h>

int siple_example(void)
{
    if (5 > 3)
        return (1);
    return (0);
}

void    test_mandatory(void)
{
    int wat;
    int wwat;

    printf("~~~~~~~~~~~PRINT WAT?~~~~~~~~~~~~\n");
    wat = ft_printf("|%%|\n");
    wwat = printf("|%%|\n");
    if (wwat != wat)
    {
        write(1, "1: KO\n", 6);
        return ;
    }
    write(1, "2-------------------\n", 21);
    wat = ft_printf("|%5c|\n", 100);
    wwat = printf("|%5c|\n", 100);
    if (wwat != wat)
    {
        write(1, "2: KO\n", 6);
        return ;
    }
    write(1, "3-------------------\n", 21);
    wat = ft_printf("|%-10.7s|\n", "12345");
    wwat = printf("|%-10.7s|\n", "12345");
    if (wwat != wat)
    {
        write(1, "3: KO\n", 6);
        return ;
    }
    write(1, "4-------------------\n", 21);
    wat = ft_printf("|%10.7s|\n", "12345");
    wwat = printf("|%10.7s|\n", "12345");
    if (wwat != wat)
    {
        write(1, "4: KO\n", 6);
        return ;
    }
    write(1, "5-------------------\n", 21);
    wat = ft_printf("|%-*.*s|\n",12, 3, "12345");
    wwat = printf("|%-*.*s|\n",12, 3, "12345");
    if (wwat != wat)
    {
        write(1, "5: KO\n", 6);
        return ;
    }
    printf("6-------------------\n");
    wat = ft_printf("|%-*.s|\n",12, "12345");
    wwat = printf("|%-*.s|\n",12, "12345");
    if (wwat != wat)
    {
        write(1, "6: KO\n", 6);
        return ;
    }
    write(1, "7-------------------\n", 21);
    wat = ft_printf("|%-*.3s|\n",12, "12345");
    wwat = printf("|%-*.3s|\n",12, "12345");
    if (wwat != wat)
    {
        write(1, "7: KO\n", 6);
        return ;
    }
    write(1, "8-------------------\n", 21);
    wat = ft_printf("|%-8.3s|\n", "12345");
    wwat = printf("|%-8.3s|\n", "12345");
    if (wwat != wat)
    {
        write(1, "8: KO\n", 6);
        return ;
    }
    write(1, "9-------------------\n", 21);
    wat = ft_printf("|%*.3s|\n",12, "12345");
    wwat = printf("|%*.3s|\n",12, "12345");
    if (wwat != wat)
    {
        write(1, "9: KO\n", 6);
        return ;
    }
    write(1, "10-----------------\n", 21);
    wat = ft_printf("|%p|\n", &wat);
    wwat = printf("|%p|\n", &wat);
    if (wwat != wat)
    {
        write(1, "10: KO\n", 6);
        return ;
    }
     write(1, "11-----------------\n", 21);
    wat = ft_printf("|%-20p|\n", &wat);
    wwat = printf("|%-20p|\n", &wat);
    if (wwat != wat)
    {
        write(1, "11: KO\n", 6);
        return ;
    }
    write(1, "12-----------------\n", 21);
    wat = ft_printf("|%*p|\n", 20, &wat);
    wwat = printf("|%*p|\n", 20, &wat);
    if (wwat != wat)
    {
        write(1, "12: KO\n", 6);
        return ;
    }
    printf("13___________________|\n");
    wat = ft_printf("|%-*p|\n", 20, &wat);
    wwat = printf("|%-*p|\n", 20, &wat);
    if (wwat != wat)
    {
        write(1, "13: KO\n", 6);
        return ;
    }
    printf("14___________________|\n");
    wat = ft_printf("|%*.*p|\n", 20, 5, (void*)0);
    wwat = printf("|%*p|\n", 20, (void*)0);
    if (wwat != wat)
    {
        write(1, "14: KO\n", 7);
    }
     printf("15___________________|\n");
    wat = ft_printf("|%*.*p|\n", 1, 5, (void*)0);
    wwat = printf("|%*p|\n", 1, (void*)0);
    printf("16___________________|\n");
    wat = ft_printf("|%p11|\n", (void*)1);
    wwat = printf("|%p11|\n", (void*)1);
    if (wwat != wat)
    {
        write(1, "16: KO\n", 7);
    }
    printf("17___________________|\n");
    wat = ft_printf("|%p|%s|%s|\n", &siple_example, "123", "A");
    wwat = printf("|%p|%s|%s|\n", &siple_example, "123", "A");
    if (wwat != wat)
    {
        write(1, "17: KO\n", 7);
    }
    printf("18___________________|\n");
    wat = ft_printf("|%d|\n", 123);
    wwat = printf("|%d|\n", 123);
    if (wwat != wat)
    {
        write(1, "18: KO\n", 7);
    }
    printf("20___________________|\n");
    wat = ft_printf("|%-.5d|\n", -123);
    wwat = printf("|%-.5d|\n", -123);
    if (wwat != wat)
    {
        write(1, "20: KO\n", 7);
    }
    printf("21___________________|\n");
    wat = ft_printf("|%06d|\n", -123);
    wwat = printf("|%06d|\n", -123);
    if (wwat != wat)
    {
        write(1, "21: KO\n", 7);
    }
    printf("22___________|\n");
    wat = ft_printf("|%-12d|\n", -123);
    wwat = printf("|%-12d|\n", -123);
    if (wwat != wat)
    {
        write(1, "22: KO\n", 7);
    }
    printf("23___________|\n");
    wat = ft_printf("|%+.12d|\n", 123);
    wwat = printf("|%+.12d|\n", 123);
    if (wwat != wat)
    {
        write(1, "23: KO\n", 7);
    }
    printf("24___________|\n");
    wat = ft_printf("|% 12.8d|\n", -123);
    wwat = printf("|% 12.8d|\n", -123);
    if (wwat != wat)
    {
        write(1, "24: KO\n", 7);
    }
    printf("25___________|\n");
    wat = ft_printf("|%+12.8d|\n", -123);
    wwat = printf("|%+12.8d|\n", -123);
    if (wwat != wat)
    {
        write(1, "25: KO\n", 7);
    }
    printf("26___________\n");
    wat = ft_printf("|%05.10d|\n", -123);
    wwat = printf("|%05.10d|\n", -123);
    if (wwat != wat)
    {
        write(1, "26: KO\n", 7);
    }
    printf("27___________\n");
    wat = ft_printf("|%5.10d|\n", -123);
    wwat = printf("|%5.10d|\n", -123);
    if (wwat != wat)
    {
        write(1, "27: KO\n", 7);
    }
    ft_printf("27___________\n");
    wat = ft_printf("|%6.5d|\n", -123);
    wwat = printf("|%6.5d|\n", -123);
    if (wwat != wat)
    {
        write(1, "27: KO\n", 7);
    }
    ft_printf("28___________\n");
    wat = ft_printf("|%3.5d|\n", -123);
    wwat = printf("|%3.5d|\n", -123);
    if (wwat != wat)
    {
        write(1, "28: KO\n", 7);
    }
    ft_printf("29___________\n");
    wat = ft_printf("|% 3.5d|\n", 123);
    wwat = printf("|% 3.5d|\n", 123);
    if (wwat != wat)
    {
        write(1, "29: KO\n", 7);
    }
    ft_printf("30___________\n");
    wat = ft_printf("|% 10.5d|\n", 123);
    wwat = printf("|% 10.5d|\n", 123);
    if (wwat != wat)
    {
        write(1, "30: KO\n", 7);
    }
    ft_printf("31___________\n");
    wat = ft_printf("|%+10.5d|\n", 123);
    wwat = printf("|%+10.5d|\n", 123);
    if (wwat != wat)
    {
        write(1, "31: KO\n", 7);
    }
    ft_printf("32___________\n");
    wat = ft_printf("|%-+10.5d|\n", 123);
    wwat = printf("|%-+10.5d|\n", 123);
    if (wwat != wat)
    {
        write(1, "32: KO\n", 7);
    }
    ft_printf("33___________\n");
    wat = ft_printf("|%-+10.5d|\n", -123);
    wwat = printf("|%-+10.5d|\n", -123);
    if (wwat != wat)
    {
        write(1, "33: KO\n", 7);
    }
    ft_printf("34___________\n");
    wat = ft_printf("|%0*.10d|\n", 20, -123);
    wwat = printf("|%020.10d|\n", -123);
    if (wwat != wat)
    {
        write(1, "34: KO\n", 7);
    }
    ft_printf("35___________\n");
    wat = ft_printf("|% 0*.10d|\n", 30, -123);
    wwat = printf("|% 0*.10d|\n", 30, -123);
    if (wwat != wat)
    {
        write(1, "35: KO\n", 7);
    }
    ft_printf("~~~~~~~~~~~~~~~~~Test %%i~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~Test %%i~~~~~~~~~~~~~~~~~~\n");
    ft_printf("36___________\n");
    wat = ft_printf("|%+0*.10i|%c\n", 20, -123, 0);
    wwat = printf("|%+0*.10d|%c\n", 20, -123, 0);
    if (wwat != wat)
    {
        write(1, "36: KO\n", 7);
    }
    printf("37___________________|\n");
    wat = ft_printf("|%-.5i|\n", -123);
    wwat = printf("|%-.5d|\n", -123);
    if (wwat != wat)
        return ;
    printf("38___________________|\n");
    wat = ft_printf("|%06i|\n", -123);
    wwat = printf("|%06i|\n", -123);
    if (wwat != wat)
        return ;
    printf("39___________|\n");
    wat = ft_printf("|%-12i|\n", -123);
    wwat = printf("|%-12i|\n", -123);
    if (wwat != wat)
        return ;
    printf("40___________|\n");
    wat = ft_printf("|%+.12i|\n", 123);
    wwat = printf("|%+.12i|\n", 123);
    if (wwat != wat)
        return ;
    printf("41___________|\n");
    wat = ft_printf("|% 12.8i|\n", -123);
    wwat = printf("|% 12.8i|\n", -123);
    if (wwat != wat)
        return ;
    printf("42___________|\n");
    wat = ft_printf("|%+12.8i|\n", -123);
    wwat = printf("|%+12.8i|\n", -123);
    if (wwat != wat)
        return ;
    printf("43___________\n");
    wat = ft_printf("|%05.10i|\n", -123);
    wwat = printf("|%05.10i|\n", -123);
    if (wwat != wat)
        return ;
    printf("44___________\n");
    wat = ft_printf("|%5.10i|\n", -123);
    wwat = printf("|%5.10i|\n", -123);
    if (wwat != wat)
        return ;
    ft_printf("45___________\n");
    wat = ft_printf("|%6.5i|\n", -123);
    wwat = printf("|%6.5i|\n", -123);
    if (wwat != wat)
        return ;
    ft_printf("46___________\n");
    wat = ft_printf("|%3.5i|\n", -123);
    wwat = printf("|%3.5i|\n", -123);
    if (wwat != wat)
        return ;
    ft_printf("47___________\n");
    wat = ft_printf("|% 3.5i|\n", 123);
    wwat = printf("|% 3.5i|\n", 123);
    if (wwat != wat)
        return ;
    ft_printf("48___________\n");
    wat = ft_printf("|% 10.5i|\n", 123);
    wwat = printf("|% 10.5i|\n", 123);
    if (wwat != wat)
        return ;
    ft_printf("49___________\n");
    wat = ft_printf("|%+10.5i|\n", 123);
    wwat = printf("|%+10.5i|\n", 123);
    if (wwat != wat)
        return ;
    ft_printf("50___________\n");
    wat = ft_printf("|%-+10.5i|\n", 123);
    wwat = printf("|%-+10.5i|\n", 123);
    if (wwat != wat)
        return ;
    ft_printf("51___________\n");
    wat = ft_printf("|%-+10.5i|\n", -123);
    wwat = printf("|%-+10.5i|\n", -123);
    if (wwat != wat)
        return ;
    ft_printf("52___________\n");
    wat = ft_printf("|%0*.10i|\n", 20, -123);
    wwat = printf("|%0*.10i|\n", 20, -123);
    if (wwat != wat)
        return ;
    ft_printf("53___________\n");
    wat = ft_printf("|% 0*.10i|\n", 20, -123);
    wwat = printf("|% 0*.10i|\n", 20, -123);
    if (wwat != wat)
        return ;
    ft_printf("54___________\n");
    wat = ft_printf("|%-+*.10i|%c\n", 20, -123, 0);
    wwat = printf("|%-+*.10i|%c\n", 20, -123, 0);
    if (wwat != wat)
        return ;
    ft_printf("~~~~~~~~~~~~~~~~~Test %%uu~~~~~~~~~~~~~~~~~~~\n");
    ft_printf("55___________\n");
    wat = ft_printf("|%*.10u|\n", 20, -123);
    wwat = printf("|%*.10u|\n", 20, -123);
    if (wwat != wat)
        return ;
    ft_printf("56___________\n");
    wat = ft_printf("|%-*.10u|%c\n", 20, 123, 0);
    wwat = printf("|%-*.10u|%c\n", 20, 123, 0);
    if (wwat != wat)
        return ;
    ft_printf("57___________\n");
    wat = ft_printf("|% *.10u|%c\n", 20, 123, 0);
    wwat = printf("|%*.10u|%c\n", 20, 123, 0);
    if (wwat != wat)
        return ;
    ft_printf("58___________\n");
    wat = ft_printf("|%u|%c\n", 20);
    wwat = printf("|%u|%c\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("59___________\n");
    wat = ft_printf("|% .10u|%c\n", 20);
    wwat = printf("|% .10u|%c\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("60___________\n");
    wat = ft_printf("|%010u|%c\n", 20);
    wwat = printf("|%010u|%c\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("61___________\n");
    wat = ft_printf("|%010.4u|%c\n", 20);
    wwat = printf("|%010.4u|%c\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("62___________\n");
    wat = ft_printf("|%-010.4u|\n", 20);
    wwat = printf("|%-010.4u|\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("63___________\n");
    wat = ft_printf("|%-10.6u|\n", 20);
    wwat = printf("|%-10.6u|\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("64___________\n");
    wat = ft_printf("|% u|\n", 20);
    wwat = printf("|% u|\n", 20);
    if (wwat != wat)
        return ;
    ft_printf("65___________\n");
    wat = ft_printf("|%+u|\n", 21);
    wwat = printf("|%+u|\n", 21);
    if (wwat != wat)
        return ;
    ft_printf("66___________\n");
    wat = ft_printf("|%-010u|\n", 21);
    wwat = printf("|%-010u|\n", 21);
    if (wwat != wat)
        return ;
    if (wwat != wat)
        return ;
    ft_printf("~~~~~~~~~~~~~~~~~Test %%xx~~~~~~~~~~~~~~~~~~~\n");
    ft_printf("66___________\n");
    wat = ft_printf("|%x|\n", 42);
    wwat = printf("|%x|\n", 42);
    if (wwat != wat)
        return ;
    ft_printf("67___________\n");
    wat = ft_printf("|%-12x|\n", 42);
    wwat = printf("|%-12x|\n", 42);
    if (wwat != wat)
        return ;
    ft_printf("68___________\n");
    wat = ft_printf("|%-012x|\n", 42);
    wwat = printf("|%-012x|\n", 42);
    if (wwat != wat)
        return ;
    ft_printf("69___________\n");
    wat = ft_printf("|%012x|\n", 42);
    wwat = printf("|%012x|\n", 42);
    if (wwat != wat)
        return ;
    ft_printf("69___________\n");
    wat = ft_printf("|%012x|\n", 42);
    wwat = printf("|%012x|\n", 42);
    if (wwat != wat)
        return ;
    ft_printf("69___________\n");
    wat = ft_printf("|%#012x|\n", 33);
    wwat = printf("|%#012x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("70___________\n");
    wat = ft_printf("|%0#12.4x|\n", 33);
    wwat = printf("|%0#12.4x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("71___________\n");
    wat = ft_printf("|%#12.x|\n", 33);
    wwat = printf("|%#12.x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("72___________\n");
    wat = ft_printf("|%#12.x|\n", 33);
    wwat = printf("|%#12.x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("73___________\n");
    wat = ft_printf("|% x|\n", 33);
    wwat = printf("|% x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("74___________\n");
    wat = ft_printf("|%x|\n", 33);
    wwat = printf("|%x|\n", 33);
    if (wwat != wat)
        return ;
    ft_printf("74___________\n");
    wat = ft_printf("|%12x|\n", 33);
    wwat = printf("|%12x|\n", 33);
    if (wwat != wat)
        return ;
    wat = ft_printf("|%012x|\n", 66);
    wwat = printf("|%012x|\n", 66);
    if (wwat != wat)
        return ;
        
    
    // flags: -, 0, ., *, num;
    // convs: c, s, p, d, i, u, x, X, %;
    // convs bonus: n, f, g, e;
    // flags bonus: l, ll, h, hh, #, ' ', +;
}
