/*34.cProgramma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Masiva izveidoshana , aizpildishana un nolasishana */

# include <stdio.h>

int main()
{
    int mas[101]; // izveido masiivu ar 10 elementiem
    int i;
    for(i=0; i<101; i++) // masiiva elementu inicializaacija
        {
        mas[i] = i*i; // tekoshais elements tiek noteikts kaa x*x
        }
        /* paraadit "masiiva" saturu */
    
    for (i=0; i<101; i++){
    printf ("%d %d\n", i, mas[i]);
    }
}

