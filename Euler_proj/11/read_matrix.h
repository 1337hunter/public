void 
{
	        while(1)
        {
                while (1)
                {
                        tmpi = read(table, &tmpc, 1);
                        if (tmpi == 0)
                        {
                                break;
                        }
                        if (tmpc == '\n')     /*Все работает!*/
                        {
                                s++;
                                break;
                        }
                        if (tmpc != ' ')
                        {
                                buf[k] = tmpc - '0';
                                k++;
                        }
                        else
                        {
                                break;
                        }
                }
                if (tmpi == 0)
                {
                        break;
                }
                c++;
                pwr = 0;
                if ( k > 0)
                {
                        while (k--)
                        {
                                tb[j] += buf[k] * epwr(pwr);
                                pwr++;
                        }

                }
                l = 0;
                while (l < 8)
                {
                        buf[l] = 0;
                        l++;
                }
                j++;
                k = 0;
        }
}
