/*32.cProgramma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Programma faktoriaalu apreekjiniem faktoriaalus reekjina veselu skaitlju rindaam skaitlju faktoriaals ljoti strauji aug */

# include <stdio.h>

int main()
{
unsigned long num , i; // num -- skaitlis
unsigned long reizinajums = 1; // faktorials no 0! = 1

 printf("Ievadam veselu skaitli: ");
 scanf("%d", &num);

 for ( i=1 ; i<=num ; i++ )
{
reizinajums = reizinajums * i;
} // Izvadee ir kljuuda. Labo to!
 printf("Skaitlja %d faktorials ir: %d",num, reizinajums);
 /* Peograma spēj izpildit faktorizaciju lidz 12 */
}