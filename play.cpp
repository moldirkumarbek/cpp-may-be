#include <string.h> 
#include <stdio.h>

using namespace std;
 
char    trains[10][10], start_station[10][10], end_station[10][10], start_time[10][10], end_time[10][10];
 
int price[10], i = 0, j = 0, k = 0, l = 0, x = 0;
 
void set( void );
 
void search( void );
 
void sum( void );
 
void sort( void );
 
void edit( void );
 
void del( void );
 
int main( void )
 
{
 
    int o;
 
    for ( o = 1; o != 0; o )
 
    {
 
        printf( "\n------------------------------------------------\n" );
 
        printf( "----------wellcome----------" );
 
        printf( "\n------------------------------------------------\n" );
 
        printf( "          1.set               \n" );
 
        printf( "          2.search             \n" );
 
        printf( "          3.sum                \n" );
 
        printf( "          4.sort               \n" );
 
        printf( "          5.edit               \n" );
 
        printf( "          6.del                \n" );
 
        printf( "          0.exit               \n" );
 
        printf( "choose one of here" );
 
        scanf( "%d", &o );
 
        if ( o == 1 )
 
            set();
 
        else if ( o == 2 )
 
            search();
 
        else if ( o == 3 )
 
            sum();
 
        else if ( o == 4 )
 
            sort();
 
        else if ( o == 5 )
 
            edit();
 
        else if ( o == 6 )
 
            del();
 
        else if ( o == 0 )
 
            break;
 
        else
 
            printf( "inter correcte # \n" );
 
    }
 
}
 
void set( void )
 
{
 
    printf( "inter number of login:" );
 
    scanf( "%d", &i );
 
    if ( i <= 0 || i > 10 )
 
    {
 
        printf( "\n----------celecte number from 1 to 10!----------\n" );
 
        return;
 
    }
 
    i = i + x;
 
    for ( j = x; j < i; j++ )
 
    {
 
        ++x;
 
        printf( "number of �����:" );
 
        scanf( "%s", &trains[j] );
 
        printf( "������:" );
 
        scanf( "%s", &start_station[j] );
 
        printf( "��������� ���:" );
 
        scanf( "%s", &end_station[j] );
 
        printf( "����� ������ �����:" );
 
        scanf( "%s", &start_time[j] );
 
        printf( "������ �����:" );
 
        scanf( "%s", &end_time[j] );
 
        printf( "����� ������:" );
 
        scanf( "%d", &price[j] );
 
    }
 
    printf( "\n----------���������� �����----------n\n" );
 
}
 
 
void search( void )
 
{
 
    char    search[10];
 
    int search1;
 
    k = 0;
 
    if ( x == 0 )
 
    {
 
        printf( "\n----------�������� ������� ���������!----------\n" );
 
        return;
 
    }
 
    printf( "\n--------------------------------\n" );
 
    printf( "----------������� �����----------" );
 
    printf( "\n--------------------------------\n" );
 
    printf( "          1.�����\n" );
 
    printf( "          2.������� ����\n" );
 
    printf( "          3.������� ����\n" );
 
    printf( "          4.������� ������\n" );
 
    printf( "          5.���� ������\n" );
 
    printf( "          6.����� ������\n" );
 
    printf( "write the search number:" );
 
    scanf( "%d", &l );
 
    if ( x == 0 )
 
    {
 
        printf( "\n----------�������� ������� ���----------\n" );
 
    }else if ( l == 1 )
 
    {
 
        printf( "������� ���������:" );
 
        scanf( "%s", search );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = strcmp( search, trains[i] );
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                {
 
                    printf( "\n-------------------------------------------------------------\n" );
 
                    printf( "������ �������" );
 
                    printf( "\n-------------------------------------------------------------\n" );
 
                }
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����!----------n\n", k );
 
    }else if ( l == 2 )
 
    {
 
        printf( "�������� ��������:" );
 
        scanf( "%s", search );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = strcmp( search, start_station[i] );
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                    printf( "\n�������\n" );
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����----------n\n", k );
 
    }else if ( l == 3 )
 
    {
 
        printf( "\n������� ���:" );
 
        scanf( "%s", search );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = strcmp( search, end_station[i] );
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                    printf( "\n�������\n" );
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����----------n\n", k );
 
    }else if ( l == 4 )
 
    {
 
        printf( "���� ������:" );
 
        scanf( "%s", search );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = strcmp( search, start_time[i] );
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                    printf( "\n-------------------------------------------------------------\n" );
 
                printf( "�������" );
 
                printf( "\n-------------------------------------------------------------\n" );
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����----------n\n", k );
 
    }else if ( l == 5 )
 
    {
 
        printf( "\n������� ������:" );
 
        scanf( "%s", search );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = strcmp( search, end_time[i] );
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                    printf( "\n-------------------------------------------------------------\n" );
 
                printf( "�������" );
 
                printf( "\n-------------------------------------------------------------\n" );
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����----------n\n", k );
 
    }else if ( l == 6 )
 
    {
 
        printf( "\n����� ������:" );
 
        scanf( "%d", &search1 );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            j = search1 == price[i] ? 0 : 1;
 
            if ( j == 0 )
 
            {
 
                ++k;
 
                if ( k == 1 )
 
                    printf( "\n-------------------------------------------------------------\n" );
 
                printf( "�������" );
 
                printf( "\n-------------------------------------------------------------\n" );
 
                printf( "%-8s ", trains[i] );
 
                printf( "%-10s ", start_station[i] );
 
                printf( "%-10s ", end_station[i] );
 
                printf( "%-12s ", start_time[i] );
 
                printf( "%-12s ", end_time[i] );
 
                printf( "%-8d", price[i] );
 
                printf( "\n" );
 
            }
 
        }
 
        printf( "\n----------����----------n\n", k );
 
    }else
 
        printf( "\n����� ��� ������� ���������\n" );
 
}
 
void sum( void )
 
{
 
    if ( x != 0 )
 
    {
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        printf( "������� ������ �����" );
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            printf( "%-8d ", i + 1 );
 
            printf( "%-8s ", trains[i] );
 
            printf( "%-10s ", start_station[i] );
 
            printf( "%-10s ", end_station[i] );
 
            printf( "%-12s ", start_time[i] );
 
            printf( "%-12s ", end_time[i] );
 
            printf( "%-8d", price[i] );
 
            printf( "\n" );
 
        }
 
    }
 
    printf( "\n----------������� ���----------\n", x );
 
}
 
 
void sort( void )
 
{
 
    char    sort[1][10];
 
    int sort1;
 
    if ( x == 0 )
 
    {
 
        printf( "\n----------������ ������!----------\n" );
 
        return;
 
    }
 
    printf( "\n--------------------------------\n" );
 
    printf( "----------���� ����� ----------" );
 
    printf( "\n--------------------------------\n" );
 
    printf( "          1.�����\n" );
 
    printf( "          2.������� �����\n" );
 
    printf( "          3.���� ����\n" );
 
    printf( "          4.������� ������\n" );
 
    printf( "          5.���� ������\n" );
 
    printf( "          6.����� ������\n" );
 
    printf( "\n���� ������� ���������:" );
 
    scanf( "%d", &k );
 
    if ( k == 1 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = strcmp( trains[i], trains[j + 1] );
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else if ( k == 2 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = strcmp( start_station[i], start_station[j + 1] );
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else if ( k == 3 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = strcmp( end_station[i], end_station[j + 1] );
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else if ( k == 4 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = strcmp( start_time[i], start_time[j + 1] );
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else if ( k == 5 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = strcmp( end_time[i], end_time[j + 1] );
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else if ( k == 6 )
 
    {
 
        for ( i = 0; i < x; i++ )
 
            for ( j = i; j < x - 1; j++ )
 
            {
 
                l = price[i] > price[j + 1] ? 1 : 0;
 
                if ( l > 0 )
 
                {
 
                    strcpy( sort[0], trains[i] );
 
                    strcpy( trains[i], trains[j + 1] );
 
                    strcpy( trains[j + 1], sort[0] );
 
                    strcpy( sort[0], start_station[i] );
 
                    strcpy( start_station[i], start_station[j + 1] );
 
                    strcpy( start_station[j + 1], sort[0] );
 
                    strcpy( sort[0], end_station[i] );
 
                    strcpy( end_station[i], end_station[j + 1] );
 
                    strcpy( end_station[j + 1], sort[0] );
 
                    strcpy( sort[0], start_time[i] );
 
                    strcpy( start_time[i], start_time[j + 1] );
 
                    strcpy( start_time[j + 1], sort[0] );
 
                    strcpy( sort[0], end_time[i] );
 
                    strcpy( end_time[i], end_time[j + 1] );
 
                    strcpy( end_time[j + 1], sort[0] );
 
                    sort1      = price[i];
 
                    price[i]    = price[j + 1];
 
                    price[j + 1]    = sort1;
 
                }
 
            }
 
    }else
 
        printf( "\n----------������� �����!----------n\n" );
 
 
    printf( "\n-------------------------------------------------------------\n" );
 
    printf( "�������" );
 
    printf( "\n-------------------------------------------------------------\n" );
 
    for ( i = 0; i < x; i++ )
 
    {
 
        printf( "%-8s ", trains[i] );
 
        printf( "%-10s ", start_station[i] );
 
        printf( "%-10s ", end_station[i] );
 
        printf( "%-12s ", start_time[i] );
 
        printf( "%-12s ", end_time[i] );
 
        printf( "%-8d", price[i] );
 
        printf( "\n" );
 
    }
 
}
 
 
void edit( void )
 
{
 
    if ( x != 0 )
 
    {
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        printf( "�������" );
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            printf( "%-8d ", i + 1 );
 
            printf( "%-8s ", trains[i] );
 
            printf( "%-10s ", start_station[i] );
 
            printf( "%-10s ", end_station[i] );
 
            printf( "%-12s ", start_time[i] );
 
            printf( "%-12s ", end_time[i] );
 
            printf( "%-8d", price[i] );
 
            printf( "\n" );
 
        }
 
        printf( "\n----------------------------------\n" );
 
        printf( "----------�������----------" );
 
        printf( "\n----------------------------------\n" );
 
    }
 
    if ( x == 0 )
 
        printf( "\n----------������ ���!----------\n" );
 
    else{
 
        printf( "\n�������� ���������:" );
 
        scanf( "%d", &j );
 
        if ( j >= 1 && j <= x )
 
        {
 
            printf( "\n--------------" );
 
            printf( "\n  1.�����      " );
 
            printf( "\n  2.���� ����    " );
 
            printf( "\n  3.���� ����    " );
 
            printf( "\n  4.������� ������  " );
 
            printf( "\n  5.������� ������  " );
 
            printf( "\n  6.����� ������      " );
 
            printf( "\n--------------" );
 
            printf( "\nn�������� ���������:" );
 
            scanf( "%d", &k );
 
            if ( k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 )
 
            {
 
                printf( "\n��������� ���������:" );
 
                if ( k == 1 )
 
                {
 
                    scanf( "%s", &trains[j - 1] );
 
                    printf( "\n----------����� ��������----------\n" );
 
                }else if ( k == 2 )
 
                {
 
                    scanf( "%s", &start_station[j - 1] );
 
                    printf( "\n----------����� ��������----------\n" );
 
                }else if ( k == 3 )
 
                {
 
                    scanf( "%s", &end_station[j - 1] );
 
                    printf( "\n---------����� ��������-----------\n" );
 
                }else if ( k == 4 )
 
                {
 
                    scanf( "%s", &start_time[j - 1] );
 
                    printf( "\n----------����� ��������----------\n" );
 
                }else if ( k == 5 )
 
                {
 
                    scanf( "%s", &end_time[j - 1] );
 
                    printf( "\n----------����� ��������----------\n" );
 
                }else  {
 
                    scanf( "%d", &price[j - 1] );
 
                    printf( "\n----------����� ��������----------\n" );
 
                }
 
            }else
 
                printf( "\n----------�������� �����!----------\n" );
 
        }else
 
            printf( "\n----------����� ������� ����!----------\n" );
 
    }
 
}
 
 
void del( void )
 
{
 
    if ( x != 0 )
 
    {
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        printf( "�������" );
 
        printf( "\n----------------------------------------------------------------------\n" );
 
        for ( i = 0; i < x; i++ )
 
        {
 
            printf( "%-8d ", i + 1 );
 
            printf( "%-8s ", trains[i] );
 
            printf( "%-10s ", start_station[i] );
 
            printf( "%-10s ", end_station[i] );
 
            printf( "%-12s ", start_time[i] );
 
            printf( "%-12s ", end_time[i] );
 
            printf( "%-8d", price[i] );
 
            printf( "\n" );
 
        }
 
        printf( "\n----------------------------------\n" );
 
        printf( "----------���----------" );
 
        printf( "\n----------------------------------\n" );
 
        printf( "\n��� ������:" );
 
        scanf( "%d", &j );
 
    }
 
    if ( x == 0 )
 
        printf( "\n----------���������!----------\n" );
 
    else if ( j < x && j > 0 )
 
    {
 
        for (; j < x + 1; j++ )
 
        {
 
            strcpy( trains[j - 1], trains[j] );
 
            strcpy( start_station[j - 1], start_station[j] );
 
            strcpy( end_station[j - 1], end_station[j] );
 
            strcpy( start_time[j - 1], start_time[j] );
 
            strcpy( end_time[j - 1], end_time[j] );
 
            price[j - 1] = price[j];
 
        }
 
        x = x - 1;
 
        printf( "\n----------����� ��������!----------\n" );
 
    }else if ( j == x )
 
    {
 
        x = x - 1;
 
        printf( "\n----------����� ��������!----------\n" );
 
    }else
 
        printf( "\n----------����� ���!----------\n" );
 
}
