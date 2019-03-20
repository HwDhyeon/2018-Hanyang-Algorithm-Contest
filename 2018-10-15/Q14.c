// 1761 : 숫자 야구 



#include <stdio.h>
#include <stdbool.h>
 
int feedback[111][9];
bool pass;
bool fullPass;
int cnt;
int i, j, k, x;

int main()
{
    int N;
    scanf("%d", &N);
 
    for(i = 1; i <= N; ++i)
    {
        int num;
        scanf("%d%d%d", &num, &feedback[i][4], &feedback[i][5]);
        feedback[i][1] = num / 100;
        feedback[i][2] = (num) / 10 % 10;
        feedback[i][3] = num % 10;
    }
 
    for (i = 1; i <= 9; ++i)
    {
        for (j = 1; j <= 9; ++j)
        {
            if (i == j)
                continue;
            for (k = 1; k <= 9; ++k)
            {
                if (i == k)
                    continue;
                if (j == k)
                    continue;
                 
                fullPass = true;
                for (x = 1; x <= N; ++x) // feedback for loop
                {
                    pass = false;
                    if (feedback[x][4] == 3) //답이 나온 경우이므로
                    {
                        printf("1\n");
                        return 0;
                    }
                    if (feedback[x][4] == 2)
                    {
                        if (feedback[x][5] == 0)
                        {
                            //두개는 같아야하고 하나는 없어야 함
                            if (i == feedback[x][1] && j == feedback[x][2])
                            {
                                if (k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][2] && k == feedback[x][3])
                            {
                                if (i != feedback[x][1])
                                    pass = true;
                            }
                            else if (i == feedback[x][1] && k == feedback[x][3])
                            {
                                if (j != feedback[x][2])
                                    pass = true;
                            }
                        }
                    }
                    if (feedback[x][4] == 1)
                    {
                        if (feedback[x][5] == 0)
                        {
                            //1개만 동일한 자리에 있고 나머지는 없어야 함
                            if (i == feedback[x][1])
                            {
                                if (j != feedback[x][2] && j != feedback[x][3] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i != feedback[x][1] && i != feedback[x][3] && k != feedback[x][1] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && j != feedback[x][1] && j != feedback[x][2])
                                    pass = true;
                            }
                        }
                        else if (feedback[x][5] == 1)
                        {
                            //하나는 동일한 자리 하나는 다른자리에 있어야 하고 하나는 없어야 함
                            if (i == feedback[x][1])
                            {
                                if (j == feedback[x][3])
                                {
                                    if (k != feedback[x][2])
                                        pass = true;
                                }
                                else if (k == feedback[x][2])
                                {
                                    if (j != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i == feedback[x][3])
                                {
                                    if (k != feedback[x][1])
                                        pass = true;
                                }
                                else if (k == feedback[x][1])
                                {
                                    if (i != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i == feedback[x][2])
                                {
                                    if (j != feedback[x][1])
                                        pass = true;
                                }
                                else if (j == feedback[x][1])
                                {
                                    if (i != feedback[x][2])
                                        pass = true;
                                }
                            }
                        }
                        else
                        {
                            //3개 다 있어야 하는데 한개 빼고 나머지는 위치가 달라야 함
                            if (i == feedback[x][1])
                            {
                                if (j == feedback[x][3] && k == feedback[x][2])
                                    pass = true;
                            }
                            else if (j == feedback[x][2])
                            {
                                if (i == feedback[x][3] && k == feedback[x][1])
                                    pass = true;
                            }
                            else if (k == feedback[x][3])
                            {
                                if (i == feedback[x][2] && j == feedback[x][1])
                                    pass = true;
                            }
                        }
                    }
                    if (feedback[x][4] == 0)
                    {
                        if (feedback[x][5] == 0)
                        {
                            //걍 하나라도 있으면 안됨
                            if ((i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3]) &&
                                (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3]) &&
                                (k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3]))
                                pass = true;
 
                        }
                        else if (feedback[x][5] == 1)
                        {
                            //1개 있어야 하고 위치가 달라야 함
                            if (i == feedback[x][2] || i == feedback[x][3])
                            {
                                if (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3] &&
                                    k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (j == feedback[x][1] || j == feedback[x][3])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3] &&
                                    k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                    pass = true;
                            }
                            else if (k == feedback[x][1] || k == feedback[x][2])
                            {
                                if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3] &&
                                    j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3])
                                    pass = true;
                            }
                        }
                        else if (feedback[x][5] == 2)
                        {
                            //2개 있어야 하는데 위치가 달라야 함
                            if (i == feedback[x][2] || i == feedback[x][3])
                            {
                                if (j == feedback[x][1] || j == feedback[x][3])
                                {
                                    if (k != feedback[x][1] && k != feedback[x][2] && k != feedback[x][3])
                                        pass = true;
                                }
                                else if (k == feedback[x][1] || k == feedback[x][2])
                                {
                                    if (j != feedback[x][1] && j != feedback[x][2] && j != feedback[x][3])
                                        pass = true;
                                }
                            }
                            else if (j == feedback[x][1] || j == feedback[x][3])
                            {
                                if (k == feedback[x][1] || k == feedback[x][2])
                                {
                                    if (i != feedback[x][1] && i != feedback[x][2] && i != feedback[x][3])
                                        pass = true;
                                }
                            }
                        }
                        else //feedback[x][5] == 3
                        {
                            //3개 다 있어야 하는데 다 위치가 달라야 함
                            if (i == feedback[x][2] || i == feedback[x][3])
                            if (j == feedback[x][1] || j == feedback[x][3])
                            if (k == feedback[x][1] || k == feedback[x][2])
                                pass = true;
                        }
                    }
                    if (!pass)
                        fullPass = false;
                    if (!fullPass)
                        break;
                }//end feedback for loop
 
                if (fullPass)
                    cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
