/*32.cProgramma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Programma faktoriaalu apreekjiniem faktoriaalus reekjina veselu skaitlju rindaam skaitlju faktoriaals ljoti strauji aug */

# include <stdio.h>
# include <limits.h>
# include <string.h>

int main()
{
    int num , i, a; // num -- skaitlis
    int i_in = 0 ;
    double reizinajums = 1; // faktorials no 0! = 1
    double reizinajums_0 = 0;
    char str[20];
    double value = (double)-1;
    char str2[] = "1.#INF";

    printf("Ievadam veselu skaitli: ");
    scanf("%d", &num);

    for ( i=1 ;  i<=num ;  i++ )
        {

        reizinajums = reizinajums * i;
        
        sprintf(str, "%g", reizinajums);
        
        int a = strcmp(str, str2);
        
        printf("//%d\n",a);
        if (a == 1){
            reizinajums_0 = reizinajums;
            i_in = i;
            
        }
   
   
        } 
    printf("Skaitlja %d faktorials ir: %g \n",num, reizinajums);
    printf("lielakais faktorials ir %d ta iznakums ir %g ", i_in, reizinajums_0 );
 
    /*programa spēj apreiķinat tikai lidz 170 faktorialim*/

}