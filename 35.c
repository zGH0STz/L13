/*35.cProgramma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Masiva izveidoshana , aizpildishana un nolasishana */

# include <stdio.h>
# include <math.h>

int main()
{
    double mas[101]; // izveido masiivu ar 10 elementiem
    double f = 0;
    int i;
    for(i=0; i<101; i++) // masiiva elementu inicializaacija
        {
        
        mas[i] = sqrt(f/10); // tekoshais elements tiek noteikts kaa x*x
        f = f+1;
        }
        /* paraadit "masiiva" saturu */
    f = 0;
    for (i=0; i<101; i++){
    
    printf ("%f %f\n", f/10, mas[i]);
    f= f+1;
    }
}