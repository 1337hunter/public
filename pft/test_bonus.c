#include "libft/libft.h"
#include "ftprintf.h"
#include "string.h"
#include <stdio.h>

void    test_bonus(void)
{
    int wat;
    int wwat;
    printf("~~~~~~~~~~~BONUS~~~~~~~~~~~~~~~~\n");
    printf("1___________________\n");
    wat = ft_printf("|%12x|\n", 33);
    wwat = printf("|%12x|\n", 33);
    if (wwat != wat)
        return ;
    printf("2___________________\n");
    wat = ft_printf("|%012x|\n", 66);
    wwat = printf("|%012x|\n", 66);
    if (wwat != wat)
        return ;
    printf("3___________________\n");
    wat = 0;
    wwat = 0;
    ft_printf("|1%n|\n", &wat);
    printf("|1%n|\n", &wwat);
    printf("ft_ = %d\nstd = %d\n", wat, wwat);
    if (wwat != wat)
        return ;
    printf("4___________________\n");
    ft_printf("21%n\n", &wat);
    printf("21%n\n", &wwat);
    printf("ft_ = %d\nstd = %d\n", wat, wwat);
    if (wwat != wat)
        return ;
    signed char ftch1;
    signed char stdch1;
    printf("5_____________________________________________________________________________________________________________________________________________________________________________\n");
    ft_printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890%hhn\n", &ftch1);
       printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890%hhn\n", &stdch1);
    printf("ft_ = %d\nstd = %d\n", ftch1, stdch1);
    if (stdch1 != ftch1)
        return ;
    printf("6___________________\n");
    
    short int ftshi;
    short int stdshi;
    ft_printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%hn\n", &ftshi);
    printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%hn\n", &stdshi);
    printf("ft_ = %hhd\nstd = %hhd\n", ftshi, stdshi);
    if (ftshi != stdshi)
        return ;
    printf("7___________________\n");
    ft_printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%n\n", &wat);
    printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%n\n", &wwat);
    printf("ft_ = %d\nstd = %d\n", wat, wwat);
    if (wwat != wat)
        return ;
    printf("8___________________\n");
    ft_printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%n\n", &wat);
    printf("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%n\n", &wwat);
    printf("ft_ = %d\nstd = %d\n", wat, wwat);
    if (wwat != wat)
        return ;
    printf("9___________________\n");
    long int std1;
    long int ft1;
    ft_printf("0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%ln\n", &ft1);
       printf("0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%ln\n", &std1);
    printf("ft_ = %ld\nstd = %ld\n", ft1, std1);
    if (ft1 != std1)
        return ;
    printf("10___________________\n");
    long long int std2;
    long long int ft2;
    ft_printf("0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%lln\n", &ft2);
       printf("0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789%lln\n", &std2);
    printf("ft_ = %lld\nstd = %lld\n", ft2, std2);
    if (ft2 != std2)
        return ;
    printf("11___________________\n");
    wat = ft_printf("|%u|\n", 0);
    wwat = printf("|%u|\n", 0);
    if (wwat != wat)
        return ;
    printf("12___________________\n");
    wat = ft_printf("|% -32.32f|\n", 1236.123);
    wwat = printf("|% -32.32f|\n", 1236.123);
    if (wwat != wat)
        return ;
    printf("13___________________\n");
    wat = ft_printf("|% .*f|\n", 1, 1236.123);
    wwat = printf("|% .*f|\n",1, 1236.123);
    if (wwat != wat)
        return ;
    printf("14___________________\n");
    wat = ft_printf("|% .*f|\n", 0, 1236.123);
    wwat = printf("|% .*f|\n", 0, 1236.123);
    if (wwat != wat)
        return ;
    printf("15___________________\n");
    wat = ft_printf("|% .*f|\n", 56, 1236.0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789);
    wwat = printf("|% .*f|\n", 56, 1236.0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789);
    if (wwat != wat)
        return ;
    printf("16___________________\n");
    wat = ft_printf("|% .*f|\n", 56, 1236.0123456789);
    wwat = printf("|% .*f|\n", 56, 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("17___________________\n");
    wat = ft_printf("|% .1f|\n",  1236.0123456789);
    wwat = printf("|% .1f|\n",  1236.0123456789);
    if (wwat != wat)
        return ;
    printf("18___________________\n");
    wat = ft_printf("|%+.f|\n",  1236.0123456789);
    wwat = printf("|%+.f|\n",  1236.0123456789);
    if (wwat != wat)
        return ;
    printf("19___________________\n");
    wat = ft_printf("|%+.f|\n",  -1236.0123456789);
    wwat = printf("|%+.f|\n",  -1236.0123456789);
    if (wwat != wat)
        return ;
    printf("20___________________\n");
    wat = ft_printf("|%+014.f|\n",  -1236.0123456789);
    wwat = printf("|%+014.f|\n",  -1236.0123456789);
    if (wwat != wat)
        return ;
    printf("21___________________\n");
    wat = ft_printf("|%+014.f|\n",  1236.0123456789);
    wwat = printf("|%+014.f|\n",  1236.0123456789);
    if (wwat != wat)
        return ;
    printf("22___________________\n");
    wat = ft_printf("|%+*.*f|\n",10, 10,  1236.0123456789);
    wwat = printf("|%+*.*f|\n",10, 10,  1236.0123456789);
    if (wwat != wat)
        return ;
    printf("23___________________\n");
    wat = ft_printf("|%#*.*f|\n",10, 10,  1236.0123456789);
    wwat = printf("|%#*.*f|\n",10, 10,  1236.0123456789);
    if (wwat != wat)
        return ;
    printf("23___________________\n");
    wat = ft_printf("|%#.f|\n", 1236.0123456789);
    wwat = printf("|%#.f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("24___________________\n");
    wat = ft_printf("|%.f|\n", 1236.0123456789);
    wwat = printf("|%.f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("25___________________\n");
    wat = ft_printf("|%+15.5f|\n", 1236.0123456789);
    wwat = printf("|%+15.5f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("26___________________\n");
    wat = ft_printf("|% 15.5f|\n", 1236.0123456789);
    wwat = printf("|% 15.5f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("27___________________\n");
    wat = ft_printf("|% 15.5f|\n", -1236.0123456789);
    wwat = printf("|% 15.5f|\n", -1236.0123456789);
    if (wwat != wat)
        return ;
    printf("28___________________\n");
    wat = ft_printf("|% 015.5f|\n", -1236.0123456789);
    wwat = printf("|% 015.5f|\n", -1236.0123456789);
    if (wwat != wat)
        return ;
    printf("29___________________\n");
    wat = ft_printf("|%+015.5f|\n", 1236.0123456789);
    wwat = printf("|%+015.5f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("30___________________\n");
    wat = ft_printf("|% 015.5f|\n", 1236.0123456789);
    wwat = printf("|% 015.5f|\n", 1236.0123456789);
    if (wwat != wat)
        return ;
    printf("31___________________\n");
    wat = ft_printf("|% 015.10f|\n", 0123456789120456789.0123456789);
    wwat =   printf("|% 015.10f|\n", 0123456789120456789.0123456789);
    if (wwat != wat)
        return ;
    printf("33___________________\n");
    wat = ft_printf("|%f|\n", 0.0);
    wwat =   printf("|%f|\n", 0.0);
    if (wwat != wat)
        return ;
    printf("34___________________\n");
    wat = ft_printf("|%- 6.2f|\n", -1.0 / 0.0);
    wwat =   printf("|%- 6.2f|\n", -1.0 / 0.0);
    printf("ft_ = %d\nstd = %d\n", wat, wwat);
    if (wwat != wat)
        return ;
    printf("35___________________\n");
    wat = ft_printf("|%+.2f|\n", 1.0 / 0.0);
    wwat =   printf("|%+.2f|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("36___________________\n");
    wat = ft_printf("|%-+20.2f|\n", 1.0 / 0.0);
    wwat =   printf("|%-+20.2f|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("37___________________\n");
    wat = ft_printf("|%- 20.2f|\n", 1.0 / 0.0);
    wwat =   printf("|%- 20.2f|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("38___________________\n");
    wat = ft_printf("|%- 20.2f|\n", -1.0 / 0.0);
    wwat =   printf("|%- 20.2f|\n", -1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("39___________________\n");
    wat = ft_printf("|%f|\n", -0.0 / 0.0);
    wwat =   printf("|%f|\n", -0.0 / 0.0);
    printf("40___________________\n");
    wat = ft_printf("|%5f|\n", +0.0 / 0.0);
    wwat =   printf("|%5f|\n", +0.0 / 0.0);
    printf("41___________________\n");
    wat = ft_printf("|%-012f|\n", +0.0 / 0.0);
    wwat =   printf("|%-012f|\n", +0.0 / 0.0);
    printf("42___________________\n");
    wat = ft_printf("|%-012.123f|\n", 0.0 / 0.0);
    wwat =   printf("|%-012.123f|\n", 0.0 / 0.0);
    printf("43___________________\n");
    wat = ft_printf("|%+f|\n", 0.0 / 0.0);
    wwat =   printf("|%+f|\n", 0.0 / 0.0);
    printf("44___________________\n");
    wat = ft_printf("|%- 5f|\n", 0.0 / 0.0);
    wwat =   printf("|%- 5f|\n", 0.0 / 0.0);
    printf("45___________________\n");
    wat = ft_printf("|%5f|\n", -1.0 / 0.0);
    wwat =   printf("|%5f|\n", -1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("46___________________\n");
    wat = ft_printf("|%5f|\n", 1.0 / 0.0);
    wwat =   printf("|%5f|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("47___________________\n");
    wat = ft_printf("|%+ 5f|\n", 1.0 / 0.0);
    wwat =   printf("|%+ 5f|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("48___________________\n");
    wat = ft_printf("|%+ 5g|\n", 1.0 / 0.0);
    wwat =   printf("|%+ 5g|\n", 1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("49___________________\n");
    wat = ft_printf("|%+ 5g|\n", -1.0 / 0.0);
    wwat =   printf("|%+ 5g|\n", -1.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("50___________________\n");
    wat = ft_printf("|%+ 5g|\n", 0.0 / 0.0);
    wwat =   printf("|%+ 5g|\n", 0.0 / 0.0);
    if (wwat != wat)
        return ;
    printf("51___________________\n");
    wat = ft_printf("|%-f|\n", 0.000000002);
    wwat =   printf("|%-f|\n", 0.000000002);
    if (wwat != wat)
        return ;
    printf("51___________________\n");
    wat = ft_printf("|%-g|\n", 0.000000002);
    wwat = printf("|%-g|\n", 0.000000002);
    if (wwat != wat)
        return ;
    printf("52___________________\n");
    wat = ft_printf("|%#-.3g|\n", 0.0000003);
    wwat =   printf("|%#-.3g|\n", 0.0000003);
    printf("wwat = %d\nwat = %d\n", wwat, wat);
    if (wwat != wat)
        return ;
    printf("53___________________\n");
    wat = ft_printf("|%#-.g|\n", 0.0000003);
    wwat =   printf("|%#-.g|\n", 0.0000003);
    printf("wwat = %d\nwat = %d\n", wwat, wat);
    if (wwat != wat)
        return ;
    printf("54___________________\n");
    wat = ft_printf("|%-.6g|\n", 0.0000003000);
    wwat =   printf("|%-.6g|\n", 0.0000003000);
    printf("wwat = %d\nwat = %d\n", wwat, wat);
    if (wwat != wat)
        return ;
    printf("55___________________\n");
    wat = ft_printf("|%-.6g|\n", 0.0000003456);
    wwat =   printf("|%-.6g|\n", 0.0000003456);
    if (wwat != wat)
        return ;
    printf("56___________________\n");
    wat = ft_printf("|%-g|\n", 0.0000003456);
    wwat =   printf("|%-g|\n", 0.0000003456);
    if (wwat != wat)
        return ;
    printf("57___________________\n");
    wat = ft_printf("|%-g|\n", 0.000000345651216110050451165405644061);
    wwat =   printf("|%-g|\n", 0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("58___________________\n");
    wat = ft_printf("|%#-g|\n", 0.000000345651216110050451165405644061);
    wwat =   printf("|%#-g|\n", 0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("59___________________\n");
    wat = ft_printf("|%# -g|\n", 0.000000345651216110050451165405644061);
    wwat =   printf("|%# -g|\n", 0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("60___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.000000345651216110050451165405644061);
    wwat =   printf("|%#+-g|\n", 0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("61___________________\n");
    wat = ft_printf("|%#+-g|\n", -0.000000345651216110050451165405644061);
    wwat =   printf("|%#+-g|\n", -0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("62___________________\n");
    wat = ft_printf("|%#+-.1g|\n", -0.000000345651216110050451165405644061);
    wwat =   printf("|%#+-.1g|\n", -0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("63___________________\n");
    wat = ft_printf("|%#+-.3g|\n", -0.000000345651216110050451165405644061);
    wwat =   printf("|%#+-.3g|\n", -0.000000345651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("64___________________\n");
    wat = ft_printf("|%#+-.2g|\n", -0.000000389943651216110050451165405644061);
    wwat =   printf("|%#+-.2g|\n", -0.000000389943651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("65___________________\n");
    wat = ft_printf("|%#+-g|\n", -0.000000999943651216110050451165405644061);
    wwat =   printf("|%#+-g|\n", -0.000000999943651216110050451165405644061);
    if (wwat != wat)
    printf("65.1___________________\n");
    wat = ft_printf("|%#+-g|\n", -0.0000000999943651216110050451165405644061);
    wwat =   printf("|%#+-g|\n", -0.0000000999943651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("66___________________\n");
    wat = ft_printf("|%#+-.g|\n", -0.000000985943651216110050451165405644061);
    wwat =   printf("|%#+-.g|\n", -0.000000985943651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("67___________________\n");
    wat = ft_printf("|%#+-.10g|\n", -0.000000985943651216110050451165405644061);
    wwat =   printf("|%#+-.10g|\n", -0.000000985943651216110050451165405644061);
    printf("wwat = %d\nwat = %d\n", wwat, wat);
    if (wwat != wat)
        return ;
    
    printf("68___________________\n");
    wat = ft_printf("|%#+-.40g|\n", -0.000000985943651216110050451165405644061);
    wwat =   printf("|%#+-.40g|\n", -0.000000985943651216110050451165405644061);
    if (wwat != wat)
        return ;
    printf("69___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.000010001);
    wwat =   printf("|%#+-g|\n", 0.000010001);
    if (wwat != wat)
        return ;
    printf("70___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.00001000);
    wwat =   printf("|%#+-g|\n", 0.00001000);
    if (wwat != wat)
        return ;
    printf("71___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.000000000000000000000000000000000000019);
    wwat =   printf("|%#+-g|\n", 0.000000000000000000000000000000000000019);
    if (wwat != wat)
        return ;
    printf("72___________________\n");
    wat = ft_printf("|%-g|\n", 0.000000000000000000000000000000000000019);
    wwat =   printf("|%-g|\n", 0.000000000000000000000000000000000000019);
    if (wwat != wat)
        return ;
    printf("73___________________\n");
    wat = ft_printf("|%-.g|\n", 0.000000000000000000000000000000000000014);
    wwat =   printf("|%-.g|\n", 0.000000000000000000000000000000000000014);
    if (wwat != wat)
        return ;
    printf("74___________________\n");
    wat = ft_printf("|%-.g|\n", 0.000000000000000000000000000000000000019);
    wwat =   printf("|%-.g|\n", 0.000000000000000000000000000000000000019);
    if (wwat != wat)
        return ;
    printf("75___________________\n");
    wat = ft_printf("|%-.g|\n", 0.000000000000000000000000000000000000099);
    wwat =   printf("|%-.g|\n", 0.000000000000000000000000000000000000099);
    if (wwat != wat)
        return ;
    printf("76___________________\n");
    wat = ft_printf("|%-6.g|\n", 0.000000000000000000000000000000000000099);
    wwat =   printf("|%-6.g|\n", 0.000000000000000000000000000000000000099);
    if (wwat != wat)
        return ;
    printf("77___________________\n");
    wat = ft_printf("|%-6.g|\n", 0.0000019);
    wwat =   printf("|%-6.g|\n", 0.0000019);
    if (wwat != wat)
        return ;
    printf("78___________________\n");
    wat = ft_printf("|%-12g|\n", 0.00000144);
    wwat =   printf("|%-12g|\n", 0.00000144);
    if (wwat != wat)
        return ;
    printf("79___________________\n");
    wat = ft_printf("|%#-g|\n", 0.00000144);
    wwat =   printf("|%#-g|\n", 0.00000144);
    if (wwat != wat)
        return ;
    printf("80___________________\n");
    wat = ft_printf("|%#-g|\n", 0.00000199);
    wwat =   printf("|%#-g|\n", 0.00000199);
    if (wwat != wat)
        return ;
    printf("81___________________\n");
    wat = ft_printf("|%+-g|\n", 0.00000199);
    wwat =   printf("|%+-g|\n", 0.00000199);
    if (wwat != wat)
        return ;
    printf("82___________________\n");
    wat = ft_printf("|%+-12.g|\n", 0.00000199);
    wwat =   printf("|%+-12.g|\n", 0.00000199);
    if (wwat != wat)
        return ;
    printf("83___________________\n");
    wat = ft_printf("|% -12.g|\n", 0.00000199);
    wwat =   printf("|% -12.g|\n", 0.00000199);
    if (wwat != wat)
        return ;
    printf("85___________________\n");
    wat = ft_printf("|%# -12.g|\n", 0.00000199);
    wwat =   printf("|%# -12.g|\n", 0.00000199);
    if (wwat != wat)
        return ;
    printf("86___________________\n");
    wat = ft_printf("|%# -*.*g|\n",16, 8, 0.00000199);
    wwat =   printf("|%# -*.*g|\n",16, 8, 0.00000199);
    if (wwat != wat)
        return ;
    printf("87___________________\n");
    wat = ft_printf("|%# -*.2g|\n",16, 0.00000189);
    wwat =   printf("|%# -*.2g|\n",16, 0.00000189);
    if (wwat != wat)
        return ;
    printf("87___________________\n");
    wat = ft_printf("|%#-*.2g|\n",16, 0.0000018);
    wwat =   printf("|%#-*.2g|\n",16, 0.0000018);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.1g|\n",16, 0.0000018);
    wwat =   printf("|%#-*.1g|\n",16, 0.0000018);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.1g|\n",16, 0.0000098);
    wwat =   printf("|%#-*.1g|\n",16, 0.0000098);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.1g|\n",16, 0.00000999991999);
    wwat =   printf("|%#-*.1g|\n",16, 0.00000999991999);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.1g|\n",16, 0.00000919991999);
    wwat =   printf("|%#-*.1g|\n",16, 0.00000919991999);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.2g|\n",16, 0.00000999991999);
    wwat =   printf("|%#-*.2g|\n",16, 0.00000999991999);
    if (wwat != wat)
        return ;
    printf("88___________________\n");
    wat = ft_printf("|%#-*.3g|\n",16, 0.00000999991999);
    wwat =   printf("|%#-*.3g|\n",16, 0.00000999991999);
    if (wwat != wat)
        return ;
    printf("89___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.0);
    wwat =   printf("|%#+-g|\n", 0.0);
    if (wwat != wat)
        return ;
    printf("90___________________\n");
    wat = ft_printf("|%#+-g|\n", -0.0);
    wwat =   printf("|%#+-g|\n", -0.0);
    if (wwat != wat)
        return ;
    printf("90.1___________________\n");
    wat = ft_printf("|%#+-g|\n", 0.0);
    wwat =   printf("|%#+-g|\n", 0.0);
    if (wwat != wat)
        return ;
   printf("91___________________\n");
   wat = ft_printf("|%-g|\n", 1234567.123);
   wwat =   printf("|%-g|\n", 1234567.123);
if (wwat != wat)
        return ;
    printf("92___________________\n");
    wat = ft_printf("|%-.9g|\n", 12345678.66);
    wwat =   printf("|%-.9g|\n", 12345678.66);
if (wwat != wat)
        return ;
    printf("93___________________\n");
    wat = ft_printf("|%-.8g|\n", 12345.688);
    wwat =   printf("|%-.8g|\n", 12345.688);
    if (wwat != wat)
        return ;
    printf("94___________________\n");
    wat =  ft_printf("|%-.8g|\n", 123456789.688);
    wwat =    printf("|%-.8g|\n", 123456789.688);
    if (wwat != wat)
        return ;
    printf("95___________________\n");
    wat = ft_printf("|%-.8g|\n", 0.0000068888888);
    wwat =   printf("|%-.8g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("96___________________\n");
    wat =  ft_printf("|%-.7g|\n", 0.0000068888888);
    wwat =    printf("|%-.7g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("97___________________\n");
    wat =  ft_printf("|%-.6g|\n", 0.0000068888888);
    wwat =    printf("|%-.6g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("98___________________\n");
    wat =  ft_printf("|%-.5g|\n", 0.0000068888888);
    wwat =    printf("|%-.5g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("99___________________\n");
    wat =  ft_printf("|%-.4g|\n", 0.0000068888888);
    wwat =    printf("|%-.4g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("100___________________\n");
    wat =  ft_printf("|%-.3g|\n", 0.0000068888888);
    wwat =    printf("|%-.3g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("101___________________\n");
    wat =  ft_printf("|%-.2g|\n", 0.0000068888888);
    wwat =    printf("|%-.2g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("102___________________\n");
    wat =  ft_printf("|%-.1g|\n", 0.0000068888888);
    wwat =    printf("|%-.1g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("103___________________\n");  
    wat =  ft_printf("|%-.0g|\n", 0.0000068888888);
    wwat =    printf("|%-.0g|\n", 0.0000068888888);
    if (wwat != wat)
        return ;
    printf("104___________________\n");
    wat =  ft_printf("|%-.5g|\n", 288888888.0);
    wwat =    printf("|%-.5g|\n", 288888888.0);

    printf("105___________________\n");
    wat =  ft_printf("|%-.4g|\n", 288888888.0);
    wwat =    printf("|%-.4g|\n", 288888888.0);
    if (wwat != wat)
        return ;
    printf("106___________________\n");
    wat =  ft_printf("|%-.3g|\n", 288888888.0);
    wwat =    printf("|%-.3g|\n", 288888888.0);
    if (wwat != wat)
        return ;
    printf("107___________________\n");
    wat =  ft_printf("|%-.2g|\n", 288888888.0);
    wwat =    printf("|%-.2g|\n", 288888888.0);
    if (wwat != wat)
        return ;    
    printf("108___________________\n");
    wat =  ft_printf("|%-.1g|\n", 288888888.0);
    wwat =    printf("|%-.1g|\n", 288888888.0);
    if (wwat != wat)
        return ;
    printf("109___________________\n");
    wat =  ft_printf("|%-.0g|\n", 288888888.0);
    wwat =    printf("|%-.0g|\n", 288888888.0);
    if (wwat != wat)
        return ;
    printf("110___________________\n");
    wat =  ft_printf("|%-.1g|\n", 999999999.0);
    wwat =    printf("|%-.1g|\n", 999999999.0);
    if (wwat != wat)
        return ;
    printf("111___________________\n");
    wat =  ft_printf("|%-.2g|\n", 999999999.0);
    wwat =    printf("|%-.2g|\n", 999999999.0);
    if (wwat != wat)
        return ;
    printf("112___________________\n");
    wat =  ft_printf("|%-.3g|\n", 999999999.0);
    wwat =    printf("|%-.3g|\n", 999999999.0);
    if (wwat != wat)
        return ;
    printf("113___________________\n");
    wat =  ft_printf("|%-.4g|\n", 999999999.0);
    wwat =    printf("|%-.4g|\n", 999999999.0);
    if (wwat != wat)
        return ;
    printf("114___________________\n");
    wat =  ft_printf("|%#-.9g|\n", 999999999.0);
    wwat =    printf("|%#-.9g|\n", 999999999.0);
    if (wwat != wat)
        return ;
    printf("115___________________\n");
    wat =  ft_printf("|%-g|\n", 0.00000999999999999333);
    wwat =    printf("|%-g|\n", 0.00000999999999999333);
    if (wwat != wat)
        return ;
    printf("115.1___________________\n");
    wat =  ft_printf("|%-g|\n", 0.0000999999999999333);
    wwat =    printf("|%-g|\n", 0.0000999999999999333);
    if (wwat != wat)
        return ;
    printf("116___________________\n");
    wat =  ft_printf("|%#-g|\n", 0.00000999999999999333);
    wwat =    printf("|%#-g|\n", 0.00000999999999999333);
    if (wwat != wat)
        return ;
    printf("96___________________\n");
    wat =  ft_printf("|%#-.13g|\n", 0.000999999999999333);
    wwat =    printf("|%#-.13g|\n", 0.000999999999999333);
   // if (wwat != wat)
        //return ;
    printf("97.0___________________\n");
    wat =  ft_printf("|%#-.15g|\n", 0.0009999999999993);
    wwat =    printf("|%#-.15g|\n", 0.0009999999999993);
    if (wwat != wat)
        return ;
    printf("97.1___________________\n");
    wat =  ft_printf("|%#-.15g|\n", 0.00009999999999993);
    wwat =    printf("|%#-.15g|\n", 0.00009999999999993);
    if (wwat != wat)
        return ;
    printf("97.2___________________\n");
    wat =  ft_printf("|%#-.15g|\n", 0.009999999999993);
    wwat =    printf("|%#-.15g|\n", 0.009999999999993);
    if (wwat != wat)
        return ;
    printf("97.3.0___________________\n");
    wat =  ft_printf("|%#-.15g|\n", 0.09999999999993666);
    wwat =    printf("|%#-.15g|\n", 0.09999999999993666);
    if (wwat != wat)
        return ;
    printf("97.3.1___________________\n");
    wat =  ft_printf("|%-.15g|\n", 0.9999999999993666);
    wwat =    printf("|%-.15g|\n", 0.9999999999993666);
    if (wwat != wat)
        return ;
    printf("97.3.2___________________\n");
    wat =  ft_printf("|%-.15g|\n", 9.999999999993666);
    wwat =    printf("|%-.15g|\n", 9.999999999993666);
    if (wwat != wat)
        return ;
    printf("98___________________\n");
    wat =  ft_printf("|%#-.13g|\n", 99999999999933.0);
    wwat =    printf("|%#-.13g|\n", 99999999999933.0);
    if (wwat != wat)
        return ;
    printf("99___________________\n");
    wat =  ft_printf("|%-13g|\n", 99999999999933.0);
    wwat =    printf("|%-13g|\n", 99999999999933.0);
    if (wwat != wat)
        return ;
    printf("100___________________\n");
    wat =  ft_printf("|%#-13g|\n", 99999999999933.0);
    wwat =    printf("|%#-13g|\n", 99999999999933.0);
    if (wwat != wat)
        return ;
    //if (wwat != wat)
      //  return ;
    // flags: -, 0, ., *, num;
    // convs: c, s, p, d, i, u, x, X, %;
    // convs bonus: n, f, g, e;
    // flags bonus: l, ll, h, hh, #, ' ', +;
}