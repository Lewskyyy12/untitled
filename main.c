#include <stdio.h>
#include <math.h>

void ImieNazwisko(){
    printf("Dawid Lewanodwski");
    printf("Dawid\nLewanodwski");
    printf("Dawid\n");
    printf("Lewandowski\n");

}
void SumaPierwszych3(){
    printf("Suma pierwszych 3: %d \n",31+29+31);
}
void SumaPierwszych10(){
    int suma=0;
    for(int i=1;i<=10;i++){
        suma+=i;
    }
    printf("Suma pierwszych 10: %d \n", suma);
}

void IlorazPierwszych10(){
    int Iloraz =1;
    for(int i=1;i<=10;i++){
        Iloraz=Iloraz*i;
    }
    printf("Iloraz pierwszych 10: %d \n", Iloraz);
}

void StanKonta(){
    double Stan=1000;
    for(int i=1;i<=3;i++)
    {
        Stan=Stan*1.06;
        printf("Stan konta po %d roku: %f \n", i, Stan);
    }
}

void ZnakProgramowanie(){
    char i = 191;
    printf("+---------------+ \n");
    printf("| Programowanie | \n");
    printf("+---------------+ \n");
}

void Twarz(){
    printf("   ///// \n");
    printf("  +\"\"\"\"\"+ \n");
    printf(" (| o o |) \n");
    printf("   | ^ | \n");
    printf("  | '-' | \n");
    printf("  +-----+ \n");
}

void ImieNazwisko2(){
    printf("****                                    *     *                \n");
    printf("*    *                          *       *     *                \n");
    printf("*    *                                  *     *               \n");
    printf("*    *    ***   *            *  *   *****     *       *****    *            *     ***  \n");
    printf("*    *      *   *            *  *  *    *     *      *     *   *            *       * \n");
    printf("*    *   ****   *      *     *  *  *    *     *      *******   *      *     *    **** \n");
    printf("*    *  *   *    *    * *   *   *  *    *     *      *          *    * *   *    *   * \n");
    printf("*    *  *  **     *  *   * *    *  *    *     *      *     *     *  *   * *     *  ** \n");
    printf("****    *** *      *      *     *   *****     *****   *****       *      *      *** *\n");

}

void ImitacjaObrazu(){

    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("||||||||*************************\n");
    printf("||||||||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("|||||||||||||||||||||||||||||||||\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@||@@@@@@@\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@|||||||||\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@||#######\n");

}

void RysowanieDomu(){
    printf("      + \n");
    printf("     + +\n");
    printf("    +   +\n");
    printf("   +-----+\n");
    printf("   | .-. |\n");
    printf("   | | | |\n");
    printf("   +-+-+-+\n");
}

void ZwierzeWcaleNiePodobne(){
    printf(" /\\_/\\ -----\n");
    printf("( ' ' ) / Hello \\ \n");
    printf("(  -  ) < Junior |\n");
    printf(" | | |  \\ Coder!/\n");
    printf("(__|__) -----\n");
}

void Nazwiska(){
    printf("Nowak \nSzostakowski \nBiedron \n");
}

void limeryk(){
    printf("Pewien dzialacz imieniem Mao \nnarozrabial w Chinach niemao. \nDobrze o nim pisao\nusluzne ,,Zenmin Zypan'',\nbo sie bardzo tego Mao bao.\n");
}

void ZmiennaPrzecinkowa(){
    float liczba;
    scanf("%f", &liczba);
    if(liczba >=0) printf("%.2f\n",liczba);
    else printf("%.2f\n",liczba*-1);

}
void DzielenieLiczb(){
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    if(b==0)
        printf("Nie mozna dzielic przez 0");
    else
        printf("Wynik dzielenia: %f", a/b);

}

void ZnajdzPierwiastek(){
    float a,b;
    do {
        printf("Podaj a: ");
        scanf("%f",&a);
        if(a==0) printf("a musi byc rozne od zera!! \n");
    }while(a==0);
    printf("Podaj b: ");
    scanf("%f",&b);
    printf("Miejsce zerowe to: %.2f", -b/a);

}
float Max(float a, float b){
    if(a>=b)
        return a;
    else
        return b;
}

float Min(float a, float b){
    if(a<=b)
        return a;
    else
        return b;
}

void MinMax() {
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float wynik = Max(a, b);
    printf("Max %f", Max(wynik, c));
    wynik = Min(a,b);
    printf(" i min %f", Min(wynik,c));
}

void PoleTrojkata(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float PoleTrojkata=(a+b+c)/2;
    if(a<=b+c || b<=a+c || c<=a+b) printf("Pole trojkata to: %f", PoleTrojkata);
    else printf("To nie sa boki trojkata! Koncze program.");

}

void WczytywanieA(){
    int a;
    long long int suma=0;
    scanf("%d",&a);
    for(int i=0; i<a;i++){
        int in;
        scanf("%d", &in);
        suma=suma+in;
    }
    printf("Suma = %lld",suma);
}
void WczytywanieB(){
    int a;
    long long int suma=1;
    scanf("%d",&a);
    for(int i=0; i<a;i++){
        int in;
        scanf("%d",&in);
        suma = suma*in;
    }
    printf("Suma = %lld",suma);
}
void WczytywanieC(){
    int a;
    float suma=0;
    scanf("%d",&a);
    for(int i=0; i<a;i++) {
        float in;
        scanf("%f",&in);
        if(in<0)
            suma = suma + (in*(-1));
        else
            suma = suma + in;
    }
    printf("Suma = %f",suma);
}
float bezwzgledna(float bezw){
    if(bezw>0) return bezw;
    else return (-1)*bezw;
}
void WczytywanieD(){
    int a;
    float suma=0;
    scanf("%d",&a);
    for(int i=0; i<a;i++) {
        float in;
        scanf("%f",&in);
        suma = suma + sqrt(bezwzgledna(in));
    }
    printf("Suma = %f",suma);
}

void WczytywanieE(){
    int a;
    float suma=1;
    scanf("%d",&a);
    for(int i=0; i<a;i++){
        float in;
        scanf("%f",&in);
        suma = suma* bezwzgledna(in);
    }
    printf("Suma = %f",suma);
}

void WczytywanieF(){
    int a;
    float suma=0;
    scanf("%d",&a);
    for(int i=0; i<a;i++) {
        float in;
        scanf("%f",&in);
        suma = suma + pow(in,2);
    }
    printf("Suma = %f",suma);
}

void WczytywanieG(){
    int a;
    float suma=1;
    float suma2=0;
    scanf("%d",&a);
    for(int i=0; i<a;i++){
        float in;
        scanf("%f",&in);
        suma = suma*in;
        suma2=suma2+in;
    }
    printf("Suma = %f",suma+suma2);
}
void WczytywanieH(){
    int a;
    float suma=0;
    scanf("%d",&a);
    for(int i=1; i<=a;i++){
        float in;
        scanf("%f",&in);
        if(i%2==1)
            suma = suma+in;
        else
            suma = suma - in;
    }
    printf("Suma = %f",suma);
}
int silnia(int a){
    if(a==1) return 1;
        else {
        int suma = 1;
        for(int i=1;i<=a;i++) {
            suma= suma*i;
        }
        return suma;
    }
}

void WczytywanieI(){
    int a;
    float suma=0;
    scanf("%d",&a);
    for(int i=1; i<=a;i++){
        float in;
        scanf("%f",&in);
        if(i%2==1)
            suma = suma- in/silnia(i);
        else
            suma = suma + in/silnia(i);
    }
    printf("Suma = %f",suma);
}

void IleWczytNieparzyste(){
    int a, licznik=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int in;
        scanf("%d",&in);
        if(in%2==1) licznik++;
    }
    printf("Zostalo wczytane %d liczb nieparzystych", licznik);

}

void IlePodzielnych3Nie5(){
    int n, licznik=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b;
        scanf("%d",&b);
        if(b%3==0){
            if(b%5!=0) licznik+=b;
        }
    }
    printf("%d",licznik);
}

void CzyKwadratParzystej() {
    int n, licznik=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int liczba;
        scanf("%d", &liczba);
        int liczymy=(int)(sqrt(liczba));
        if((liczymy*liczymy)==liczba && liczymy%2==0) licznik+=liczba;
    }

    printf("%d",licznik);
}

void NieparzysteParzyste() {
    int n, licznik=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d",&liczba);
        if(i%2!=0 && liczba%2==0) licznik+=liczba;
    }

    printf("%d",licznik);
}

void NiepaNieu(){
    int n,licznik=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d",&liczba);
        if(liczba%2==0  && liczba>=0) licznik+=liczba;
    }

    printf("%d",licznik);
}

void Podwojone(){
    int n,licznik=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d",&liczba);
        if(liczba>0) licznik+=liczba*2;
    }

    printf("%d",licznik);


}

void IleUjemdoda(){
    int n,licznikP=0,licznikM=0,licznik0=  0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d",&liczba);
        if(liczba>0) licznikP++;
        if(liczba<0) licznikM++;
        if(liczba==0) licznik0++;
    }

    printf("%d dodatnich, %d ujemnych, %d zer",licznikP,licznikM,licznik0);


}

void NajmniejNajwieksz(){
    int n,min,max;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d",&liczba);
        if(i == 1){
            min=liczba;
            max=liczba;
        }
        if(liczba>max) max=liczba;
        if(liczba<min) min=liczba;
    }

    printf("Min = %d, Max = %d", min,max);


}

void ParyLiczb(){
    int n,a,b;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int liczba;
        scanf("%d", &liczba);
        if (i == 1) b = liczba;
        else {
            a = b;
            b = liczba;
            if (a > 0 && b > 0) printf("Para (%d, %d)", a, b);

        }
    }
}

int main() {
    // Sekwencyjne Wczytywanie
    // ImieNazwisko();
    // SumaPierwszych3();
    // SumaPierwszych10();
    // IlorazPierwszych10();
    // StanKonta();
    // ZnakProgramowanie();
    // Twarz();
    // ImieNazwisko2();
    //ImitacjaObrazu();
    //RysowanieDomu();
    //ZwierzeWcaleNiePodobne();
    //Nazwiska();
    //limeryk();
    //Proste Obliczenia
    //ZmiennaPrzecinkowa();
    //DzielenieLiczb();
    //ZnajdzPierwiastek();
    //MinMax();
    //PoleTrojkata();
    //Iteracyjne Wczytywanie Damych
    //WczytywanieA();
    //WczytywanieB();
    //WczytywanieC();
    //WczytywanieD();
    //WczytywanieE();
    //WczytywanieF();
    //WczytywanieG();
    //WczytywanieH();
    //WczytywanieI();
    // Polaczenie instrukcji iteracyjnej i warunkowej
    //IleWczytNieparzyste();
    //IlePodzielnych3Nie5();
    //CzyKwadratParzystej();
    //NieparzysteParzyste();
    //NiepaNieu();
    //Podwojone();
    //IleUjemdoda();
    //NajmniejNajwieksz();
    ParyLiczb();




    return 0;
}