#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX=21
#Define I=1
#Define V=5
#Define X=10
#Define L=50
#Define C=100
#Define D=500
#Define M=1000

//Prototypes
void DecimalToRomain(Nb: int);
void RomainToDecimal (char *nb[])

int main()
{
    int dDc=0;
    int iTemp=1;
    char cRm[]=" ";

    do
      {
        printf("Bienvenue sur le Probgramme de convertisseur\n");
        printf("Choisir votre mode de conversion\n");
        printf("Saisir 1 pour du décimal vers romain\n");
        printf("Saisir 2 pour du romain vers décimal\n");
        printf("Saisir 0 pour quitter\n");
        scanf("%d", &iTemp);
        fflush(str)
      }while ((iTemp!2) || (iTemp!1)|| (iTemp!0));

        printf("Saisir votre nombre\n");
      switch (iTemp)
      {
        case 1:
            do
            {
                scanf("%d", &dDc);
                fflush(str)
            } while ((dDc>3999) || (dDc<0);
            DecimalToRomain(dDc);
        break;

        case 2:
            scanf("%s", cRm);
            RomainToDecimal(cRm);

      }




    return 0;
}

void decimaltoromain(nb: int)
{
    //initialisation
    int cpt=1;
    char cTemp[4];
    char cResult[MAX];

    //gestion des milliers
    if (nb>=1000)
    {
        do
        {
            nb -= 1000;
            cTemp[cpt] = "M";
            cpt++;
        } while (nb>1000);
        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            cTemp[cpt]=" ";
        }
    }

    //gestion des Centaines
    if ((nb>=100) & (nb<1000))
    {
        cpt =1;
        do
        {
            if ((cpt!4)||(cpt!5)||(cpt!9))
            {
                strcat(cTemp, "C");
            }
            else if (cpt=4);
            {
                cTemp="CD";
            }
            else if (cpt=5);
            {
                cTemp="D"
            }
            else if (cpt=9);
            {
                cTemp="CM"
            }
            cpt++
        } while (nb<100);

        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            cTemp[cpt]=" ";
        }

    }

    //gestion des Dizaines
    if ((nb>=10) & (nb<100))
    {
        cpt =1;
        do
        {
            if ((cpt!4)||(cpt!5)||(cpt!9))
            {
                strcat(cTemp, "X");
            }
            else if (cpt=4);
            {
                cTemp="XL";
            }
            else if (cpt=5);
            {
                cTemp="L"
            }
            else if (cpt=9);
            {
                cTemp="XC"
            }
            cpt++
        } while (nb<100);

        strcat (cResult, cTemp);

        //reinitialisation
        for (cpt=1; cpt<4; cpt++)
        {
            cTemp[cpt]=" ";
        }

    }


    //gestion des Unités
    if ((nb>=1) & (nb<10))
    {
        cpt =1;
        do
        {
            if ((cpt!4)||(cpt!5)||(cpt!9))
            {
                strcat(cTemp, "I");
            }
            else if (cpt=4);
            {
                cTemp="IV";
            }
            else if (cpt=5);
            {
                cTemp="V"
            }
            else if (cpt=9);
            {
                cTemp="IX"
            }
            cpt++
        } while (nb<100);

        strcat (cResult, cTemp);


        printf("%d vaut %s\n",nb,cResult );
    }

}

void RomainToDecimal (char *nb[])
{
    //Initialisation
    int dResult=0;
    int dCpt=1;
    int dTemp=0;
    int dTemp2=0;

    for (cpt=1, cpt<strlen(nb), cpt++)
    {
        switch (nb[cpt])
        {
            case "I", "i":
                dTemp2 = I;
            break;
            case "V", "v":
                dTemp2 = V;
                break;
            case "X", "x":
                dTemp2 = X;
                break;
            case "L", "l":
                dTemp2 = L;
                break;
            case "C", "c":
                dTemp2 = C;
                break;
            case "D", "d":
                dTemp2 = D;
                break;
            case "M", "m":
                dTemp2 = M;
                break;
        }

        if ((dTemp<temp2) || (dTemp<>0))
        {
            dResult += dTemp2;
        }

        else
        {
            dResult = dResult-dTemp*2+temp2;
        }

        dTemp = dTemp2;
    }

    printf("%s vaut %d\n",nb,dResult )
}
