#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char nome[MAX], localidade[MAX];
    int cavalos, vitorias, participacoes;

} InfoQuadras;

typedef struct
{
    char nomeCavalo[MAX], nomeQuadra[MAX], sexo;
    int idade, NC, vitoriasjornada, vitoriasprova, campeaojornada;

} InfoCavalos;

typedef struct
{
    int NC[10], BI[10], participantes, tempo[10], min[10], seg[10], mil[10];

} InfoProvas;

typedef struct
{
    char data[MAX], local[MAX];
    int prova, jornada, primeiro, segundo, terceiro, mediatempo;
    InfoProvas IP[3];

} InfoJornadas;

void InicializaInfoQuadras (InfoQuadras IQ[])
{
    int i;
    for (i=0; i<MAX; i++)
    {
        strcpy(IQ[i].nome, "\0");
        strcpy(IQ[i].localidade, "\0");
        IQ[i].cavalos=0;
        IQ[i].vitorias=0;
        IQ[i].participacoes=0;
    }
    strcpy(IQ[0].nome, "FastFurious");
    strcpy(IQ[0].localidade, "Penca Nova");
    IQ[0].cavalos=5;
    strcpy(IQ[1].nome, "Raptors");
    strcpy(IQ[1].localidade, "Porto");
    IQ[1].cavalos=10;
    strcpy(IQ[2].nome, "Stringers");
    strcpy(IQ[2].localidade, "Lisboa");
    IQ[2].cavalos=7;
    strcpy(IQ[3].nome, "LasVegas");
    strcpy(IQ[3].localidade, "Braga");
    IQ[3].cavalos=20;
    strcpy(IQ[4].nome, "Imortais");
    strcpy(IQ[4].localidade, "Viseu");
    IQ[4].cavalos=5;
    strcpy(IQ[5].nome, "Zeus");
    strcpy(IQ[5].localidade, "Chaves");
    IQ[5].cavalos=8;
    strcpy(IQ[6].nome, "Caritas");
    strcpy(IQ[6].localidade, "Baiao");
    IQ[6].cavalos=17;
}

void InicializaInfoCavalos (InfoCavalos IC[])
{
    int i;
    for (i=0; i<MAX; i++)
    {
        strcpy(IC[i].nomeCavalo, "\0");
        strcpy(IC[i].nomeQuadra, "\0");
        IC[i].NC=0;
        IC[i].sexo=' ';
        IC[i].idade=0;
        IC[i].vitoriasjornada=0;
        IC[i].vitoriasprova=0;
        IC[i].campeaojornada=0;
    }
    strcpy(IC[0].nomeCavalo, "Violeta");
    strcpy(IC[0].nomeQuadra, "FastFurious");
    IC[0].NC=153858234;
    IC[0].sexo='f';
    IC[0].idade=15;
    strcpy(IC[1].nomeCavalo, "Jocker");
    strcpy(IC[1].nomeQuadra, "Stringers");
    IC[1].NC=237333200;
    IC[1].sexo='m';
    IC[1].idade=10;
    strcpy(IC[2].nomeCavalo, "As Das Corridas");
    strcpy(IC[2].nomeQuadra, "LasVegas");
    IC[2].NC=878565330;
    IC[2].sexo='m';
    IC[2].idade=5;
    strcpy(IC[3].nomeCavalo, "A Egua");
    strcpy(IC[3].nomeQuadra, "Raptors");
    IC[3].NC=111676200;
    IC[3].sexo='f';
    IC[3].idade=20;
    strcpy(IC[4].nomeCavalo, "Constance");
    strcpy(IC[4].nomeQuadra, "Fast Furious");
    IC[4].NC=450200100;
    IC[4].sexo='f';
    IC[4].idade=7;
    strcpy(IC[5].nomeCavalo, "O Tal");
    strcpy(IC[5].nomeQuadra, "Imortais");
    IC[5].NC=254753126;
    IC[5].sexo='m';
    IC[5].idade=8;
    strcpy(IC[6].nomeCavalo, "O Melhor");
    strcpy(IC[6].nomeQuadra, "Zeus");
    IC[6].NC=304060201;
    IC[6].sexo='m';
    IC[6].idade=10;
    strcpy(IC[7].nomeCavalo, "STAR");
    strcpy(IC[7].nomeQuadra, "Caritas");
    IC[7].NC=120160220;
    IC[7].sexo='f';
    IC[7].idade=11;
    strcpy(IC[8].nomeCavalo, "Noodle");
    strcpy(IC[8].nomeQuadra, "Sol");
    IC[8].NC=460313201;
    IC[8].sexo='m';
    IC[8].idade=5;
    strcpy(IC[9].nomeCavalo, "Estrela");
    strcpy(IC[9].nomeQuadra, "Lentos");
    IC[9].NC=678876200;
    IC[9].sexo='f';
    IC[9].idade=8;
    strcpy(IC[10].nomeCavalo, "Gang");
    strcpy(IC[10].nomeQuadra, "Lentos");
    IC[10].NC=100023563;
    IC[10].sexo='m';
    IC[10].idade=15;
    strcpy(IC[11].nomeCavalo, "Vicente");
    strcpy(IC[11].nomeQuadra, "Sol");
    IC[11].NC=500600760;
    IC[11].sexo='m';
    IC[11].idade=21;
    strcpy(IC[12].nomeCavalo, "Flor");
    strcpy(IC[12].nomeQuadra, "Stringers");
    IC[12].NC=100200300;
    IC[12].sexo='f';
    IC[12].idade=15;
    strcpy(IC[13].nomeCavalo, "Oscar");
    strcpy(IC[13].nomeQuadra, "Las Vegas");
    IC[13].NC=113456789;
    IC[13].sexo='m';
    IC[13].idade=12;
    strcpy(IC[14].nomeCavalo, "Diesel");
    strcpy(IC[14].nomeQuadra, "Caritas");
    IC[14].NC=333666777;
    IC[14].sexo='m';
    IC[14].idade=10;
    strcpy(IC[15].nomeCavalo, "Vin");
    strcpy(IC[15].nomeQuadra, "Imortais");
    IC[15].NC=333500100;
    IC[15].sexo='m';
    IC[15].idade=9;
    strcpy(IC[16].nomeCavalo, "Serra");
    strcpy(IC[16].nomeQuadra, "Raptors");
    IC[16].NC=987500200;
    IC[16].sexo='f';
    IC[16].idade=11;

}

void InicializaInfoJornadas (InfoJornadas IJ[])
{
    int i,j,k;
    for (i=0; i<15; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<10 ; k++)
            {
                strcpy(IJ[i].data, "\0");
                strcpy(IJ[i].local, "\0");
                IJ[i].prova=0;
                IJ[i].IP[j].BI[k]=0;
                IJ[i].IP[j].NC[k]=0;
                IJ[i].IP[j].participantes=0;
                IJ[i].IP[j].tempo[k]=0;
                IJ[i].IP[j].min[k]=0;
                IJ[i].IP[j].mil[k]=0;
                IJ[i].IP[j].seg[k]=0;
                IJ[i].jornada=-1;
                IJ[i].primeiro=0;
                IJ[i].segundo=0;
                IJ[i].terceiro=0;
                IJ[i].mediatempo=0;
            }
        }
    }
    strcpy(IJ[0].data, "01-janeiro-2015");
    strcpy(IJ[0].local, "Hipodromo Municipal da Maia");
    IJ[0].jornada=1;
    IJ[0].prova=2;
    IJ[0].IP[0].participantes=4;
    IJ[0].IP[0].BI[0]=11111111;
    IJ[0].IP[0].NC[0]=153858234;
    IJ[0].IP[0].min[0]=0;
    IJ[0].IP[0].seg[0]=0;
    IJ[0].IP[0].mil[0]=1;
    IJ[0].IP[0].tempo[0]=1;
    IJ[0].IP[0].BI[1]=22222222;
    IJ[0].IP[0].NC[1]=237333200;
    IJ[0].IP[0].min[1]=0;
    IJ[0].IP[0].seg[1]=2;
    IJ[0].IP[0].mil[1]=1;
    IJ[0].IP[0].tempo[1]=2001;
    IJ[0].IP[0].BI[2]=33333333;
    IJ[0].IP[0].NC[2]=878565330;
    IJ[0].IP[0].min[2]=0;
    IJ[0].IP[0].seg[2]=25;
    IJ[0].IP[0].mil[2]=1;
    IJ[0].IP[0].tempo[2]=25001;
    IJ[0].IP[0].BI[3]=44444444;
    IJ[0].IP[0].NC[3]=111676200;
    IJ[0].IP[0].min[3]=1;
    IJ[0].IP[0].seg[3]=0;
    IJ[0].IP[0].mil[3]=1;
    IJ[0].IP[0].tempo[3]=61001;
    IJ[0].IP[1].participantes=2;
    IJ[0].IP[1].BI[0]=22222222;
    IJ[0].IP[1].NC[0]=237333200;
    IJ[0].IP[1].min[0]=0;
    IJ[0].IP[1].seg[0]=0;
    IJ[0].IP[1].mil[0]=1;
    IJ[0].IP[0].tempo[0]=1;
    IJ[0].IP[1].BI[1]=33333333;
    IJ[0].IP[1].NC[1]=878565330;
    IJ[0].IP[1].min[1]=0;
    IJ[0].IP[1].seg[1]=2;
    IJ[0].IP[1].mil[1]=1;
    IJ[0].IP[1].tempo[1]=2001;
    strcpy(IJ[1].data, "01-fevereiro-2015");
    strcpy(IJ[1].local, "Hipodromo de Albufeira");
    IJ[1].jornada=2;
    IJ[1].prova=3;
    IJ[1].IP[0].participantes=3;
    IJ[1].IP[0].BI[0]=11111111;
    IJ[1].IP[0].NC[0]=153858234;
    IJ[1].IP[0].min[0]=0;
    IJ[1].IP[0].seg[0]=6;
    IJ[1].IP[0].mil[0]=1;
    IJ[1].IP[0].tempo[0]=6001;
    IJ[1].IP[0].BI[1]=22222222;
    IJ[1].IP[0].NC[1]=237333200;
    IJ[1].IP[0].min[1]=0;
    IJ[1].IP[0].seg[1]=2;
    IJ[1].IP[0].mil[1]=1;
    IJ[1].IP[0].tempo[1]=2001;
    IJ[1].IP[0].BI[2]=33333333;
    IJ[1].IP[0].NC[2]=878565330;
    IJ[1].IP[0].min[2]=0;
    IJ[1].IP[0].seg[2]=5;
    IJ[1].IP[0].mil[2]=1;
    IJ[1].IP[0].tempo[2]=5001;
    IJ[1].IP[1].participantes=2;
    IJ[1].IP[1].BI[0]=22222222;
    IJ[1].IP[1].NC[0]=237333200;
    IJ[1].IP[1].min[0]=0;
    IJ[1].IP[1].seg[0]=0;
    IJ[1].IP[1].mil[0]=1;
    IJ[1].IP[1].tempo[0]=1;
    IJ[1].IP[1].BI[1]=33333333;
    IJ[1].IP[1].NC[1]=878565330;
    IJ[1].IP[1].min[1]=0;
    IJ[1].IP[1].seg[1]=2;
    IJ[1].IP[1].mil[1]=1;
    IJ[1].IP[1].tempo[1]=2001;
    IJ[1].IP[2].participantes=2;
    IJ[1].IP[2].BI[0]=22222222;
    IJ[1].IP[2].NC[0]=237333200;
    IJ[1].IP[2].min[0]=0;
    IJ[1].IP[2].seg[0]=9;
    IJ[1].IP[2].mil[0]=1;
    IJ[1].IP[2].tempo[0]=9001;
    IJ[1].IP[2].BI[1]=33333333;
    IJ[1].IP[2].NC[1]=878565330;
    IJ[1].IP[2].min[1]=0;
    IJ[1].IP[2].seg[1]=7;
    IJ[1].IP[2].mil[1]=1;
    IJ[1].IP[2].tempo[1]=7001;
}

void MenuStats(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int opcao;
    do
    {
        OrdenaTempos(IJ);
        EncontraCampeao(IJ,n);
        vitoriaquadrascavalos(IQ,IC,IJ,n);
        system("cls");
        printf("MENU ESTATISTICAS\n");
        printf("1 - Resultados do Campeonato\n");
        printf("2 - Percentagem de  vitorias por Participante\n");
        printf("3 - Media de Tempos\n");
        printf("4 - Quadra com mais Participantes no Campeonato\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Selecionar opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            ResultCampeonato(IQ,IC,IJ,n);
            break;
        case 2:
            PercentagemVitorias(IQ,IC,IJ,n);
            break;
        case 3:
            MediaTempo(IQ,IC,IJ,n);
            break;
        case 4:
            QuadraMaisCavalo(IQ,IC,IJ,n);
            break;
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while (opcao=!0);
    return 0;
}

void EncontraCampeao(InfoJornadas IJ[], int n[])
{
    int Qjornada[10][2], temp, NCJORNADA[10][3], i, j, k, p, l, O, h, NC=0, jornada, prova, participante, a=0, tempo=0, b;
    for (O=0; O<n[2]; O++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<10; k++)
            {
                NCJORNADA[k][j]=0;
                Qjornada[k][1]=999999999;
                Qjornada[k][0]=0;
            }
        }
        for (j=0; j<3; j++)
        {
            for (k=0; k<IJ[O].IP[j].participantes; k++)
            {
                NCJORNADA[k][j]=IJ[O].IP[j].NC[k]; //preenche a matriz
            }
        }
        for (i=O; i<(O+1); i++)
        {
            for (k=0; k<IJ[i].IP[0].participantes; k++)
            {
                for (p=0; p<IJ[i].prova; p++)
                {
                    for (l=0; l<10; l++)
                    {
                        if (IJ[i].IP[0].NC[k]==NCJORNADA[l][p])
                        {
                            NC=NC+1;
                            tempo=tempo+IJ[i].IP[p].tempo[k];
                        }
                    }
                }
                if (NC==IJ[i].prova)
                {
                    Qjornada[a][0]=IJ[i].IP[0].NC[k];
                    Qjornada[a][1]=(tempo)/(IJ[i].prova);
                    a=a+1;
                }
                NC=0;
                tempo=0;
            }
            for (h=9; h>0; h--)
            {
                for (b=0; b<h; b++)
                {
                    if(Qjornada[b][1]>Qjornada[b+1][1])
                    {
                        temp=Qjornada[b][1];
                        Qjornada[b][1]=Qjornada[b+1][1];
                        Qjornada[b+1][1]=temp;
                        temp=Qjornada[b][0];
                        Qjornada[b][0]=Qjornada[b+1][0];
                        Qjornada[b+1][0]=temp;
                    }
                }
            }
            IJ[i].primeiro=Qjornada[0][0];
            IJ[i].segundo=Qjornada[1][0];
            IJ[i].terceiro=Qjornada[2][0];
        }
    }
}

void vitoriaquadrascavalos(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i, j, p, cavalo, quadra;
    for (i=0; i<MAX; i++)
    {
        IC[i].vitoriasjornada=0;
        IC[i].campeaojornada=0;
        IQ[i].vitorias=0;
        IC[i].vitoriasprova=0;
    }
    for (i=0; i<n[2]; i++)
    {
        for (j=0; j<n[1]; j++)
        {
            if(IJ[i].primeiro==IC[j].NC) cavalo=j;
            if(IJ[i].primeiro==IC[j].NC)
            {
                IC[j].vitoriasjornada=3+IC[j].vitoriasjornada;
                IC[j].campeaojornada=IC[j].campeaojornada+1;
            }
            if(IJ[i].segundo==IC[j].NC)
                IC[j].vitoriasjornada=2+IC[j].vitoriasjornada;
            if(IJ[i].terceiro==IC[j].NC)
                IC[j].vitoriasjornada=1+IC[j].vitoriasjornada;
            for (p=0; p<IJ[i].prova; p++)
            {
                if(IJ[i].IP[p].NC[0]==IC[j].NC) IC[j].vitoriasprova=IC[j].vitoriasprova+1;
            }
        }
        for (j=0; j<n[0]; j++)
        {
            if(strcmp(IC[cavalo].nomeQuadra,IQ[j].nome)==0) IQ[j].vitorias=IQ[j].vitorias+1;
        }
    }
}

void Vitorias(InfoQuadras IQ[], InfoCavalos IC[], int *quadra, int *cavalo1, int *cavalo2, int *cavalo3, int n[])
{
    int i, j, h, b, VC[MAX][2], VQ[MAX][2], temp=0;
    for(j=0; j<MAX; j++)
    {
        VQ[j][0]=0;
        VQ[j][1]=0;
        VC[j][0]=0;
        VC[j][1]=0;
    }
    for(j=0; j<n[0]; j++)
    {
        VQ[j][0]=j;
        VQ[j][1]=IQ[j].vitorias;
    }
    for(j=0; j<n[1]; j++)
    {
        VC[j][0]=j;
        VC[j][1]=IC[j].vitoriasjornada;
    }
    for (h=MAX-1; h>0; h--)
    {
        for (b=0; b<h; b++)
        {
            if(VC[b][1]<VC[b+1][1])
            {
                temp=VC[b][1];
                VC[b][1]=VC[b+1][1];
                VC[b+1][1]=temp;
                temp=VC[b][0];
                VC[b][0]=VC[b+1][0];
                VC[b+1][0]=temp;
            }
            if(VQ[b][1]<VQ[b+1][1])
            {
                temp=VQ[b][1];
                VQ[b][1]=VQ[b+1][1];
                VQ[b+1][1]=temp;
                temp=VQ[b][0];
                VQ[b][0]=VQ[b+1][0];
                VQ[b+1][0]=temp;
            }
        }
    }
    *quadra=VQ[0][0];
    *cavalo1=VC[0][0];
    *cavalo2=VC[1][0];
    *cavalo3=VC[2][0];
}

void ResultCampeonato(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int quadra, cavalo1, cavalo2, cavalo3;
    quadra=cavalo1=cavalo2=cavalo3=0;
    Vitorias(IQ,IC, &quadra, &cavalo1, &cavalo2, &cavalo3, n);
    if(IC[cavalo1].vitoriasjornada==0)
        puts("1 LUGAR: NAO EXISTE POIS TODOS OS CAVALOS FORAM DESQUALIFICADOS!");
    else
    {
        puts("1 LUGAR: \n");
        printf("CAVALO: %s \n", IC[cavalo1].nomeCavalo);
        printf("QUADRA: %s \n", IC[cavalo1].nomeQuadra);
        printf("JORNADA GANHAS: %d \n", IC[cavalo1].campeaojornada);
        printf("PROVAS GANHAS: %d \n", IC[cavalo1].vitoriasprova);
    }
    puts("");
    puts("");
    if(IC[cavalo2].vitoriasjornada==0)
        puts("2 LUGAR: NAO EXISTE POIS TODOS OS OUTROS CAVALOS FORAM DESQUALIFICADOS!");
    else
    {
        puts("2 LUGAR: \n");
        printf("CAVALO: %s \n", IC[cavalo2].nomeCavalo);
        printf("QUADRA: %s \n", IC[cavalo2].nomeQuadra);
        printf("JORNADA GANHAS: %d \n", IC[cavalo2].campeaojornada);
        printf("PROVAS GANHAS: %d \n", IC[cavalo2].vitoriasprova);
    }
    puts("");
    puts("");
    if(IC[cavalo3].vitoriasjornada==0)
        puts("3 LUGAR: NAO EXISTE POIS TODOS OS OUTROS CAVALOS FORAM DESQUALIFICADOS!");
    else
    {
        puts("3 LUGAR: \n");
        printf("CAVALO: %s \n", IC[cavalo3].nomeCavalo);
        printf("QUADRA: %s \n", IC[cavalo3].nomeQuadra);
        printf("JORNADA GANHAS: %d \n", IC[cavalo3].campeaojornada);
        printf("PROVAS GANHAS: %d \n", IC[cavalo3].vitoriasprova);
    }
    puts("");
    puts("");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuStats(IQ,IC,IJ,n);
}

void PercentagemVitorias(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int contador=0, k, i, p, h;
    float percentagem;
    puts("----------------------------------------------------------------------------------------------------------------------");
    puts("|    Participante   ||      Quadra    ||    Percentagem de vitorias    ||     Provas em que participou   ||    Vitorias   |");
    for (k=0; k<n[1]; k++)
    {
        for (i=0; i<n[2]; i++)
        {
            for (p=0; p<3; p++)
            {
                for (h=0; h<10; h++)
                {
                    if (IC[k].NC==IJ[i].IP[p].NC[h]) contador=contador+1;
                }
            }
        }
        percentagem=(IC[k].vitoriasprova*100)/contador;
        printf("|        %s         ||       %s       ||            %.2f %c            ||               %d               ||        %d     | \n", IC[k].nomeCavalo, IC[k].nomeQuadra, percentagem, '%', contador, IC[k].vitoriasprova);
        contador=0;
    }
    puts("----------------------------------------------------------------------------------------------------------------------");
    puts("");
    puts("");
    puts("");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuStats(IQ,IC,IJ,n);
}

void Preenchetempos(InfoJornadas IJ[], int n[])
{
    int i, p, k, contador;
    for (i=0; i<n[2]; i++)
    {
        IJ[i].mediatempo=0;
        contador=0;
        for (p=0; p<IJ[i].prova; p++)
        {
            for (k=0; k<IJ[i].IP[p].participantes; k++)
            {
                IJ[i].mediatempo=IJ[i].mediatempo+IJ[i].IP[p].tempo[k];
                contador=contador+1;
            }
        }
        IJ[i].mediatempo=IJ[i].mediatempo/contador;
    }
}

void MediaTempo(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int min=0, seg=0, mil=0, i, tempo=0;
    Preenchetempos(IJ,n);
    puts("-----------------------------------");
    puts("|   JORNADA  ||   MEDIA DE TEMPO  |");
    for (i=0; i<n[2]; i++)
    {
        min=mil=seg=0;
        mil=IJ[i].mediatempo%1000;
        seg=IJ[i].mediatempo/1000;
        if (seg>=60)
        {
            min=seg/60;
            seg=seg-seg*min;
        }
        printf("|     %d     ||     %02d:%02d:%02d     | \n", i+1, min, seg, mil);
    }
    puts("-----------------------------------");
    puts("");
    puts("");
    puts("");
    for (i=0; i<n[2]; i++)
    {
        tempo=tempo+IJ[i].mediatempo;
    }
    tempo=tempo/n[2];
    min=mil=seg=0;
    mil=tempo%1000;
    seg=tempo/1000;
    if (seg>=60)
    {
        min=seg/60;
        seg=seg-seg*min;
    }
    printf("A MEDIA DE TEMPO DO CAMPEONATO FOI %02d:%02d:%02d", min, seg, mil);
    puts("");
    puts("");
    puts("");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuStats(IQ,IC,IJ,n);
}

void PreencheParticipacoes(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[], int quadra[], int *contador)
{
    int i, p, k, l, j, max=0, max1=0;
    for (i=0; i<n[0]; i++)
    {
        IQ[i].participacoes=0;
    }
    for (i=0; i<n[2]; i++)
    {
        for (p=0; p<IJ[i].prova; p++)
        {
            for (k=0; k<IJ[i].IP[p].participantes; k++)
            {
                for(j=0; j<n[1]; j++)
                {
                    if (IJ[i].IP[p].NC[k]==IC[j].NC)
                    {
                        for (l=0; l<n[0]; l++)
                        {
                            if (strcmp(IC[j].nomeQuadra,IQ[l].nome)==0) IQ[l].participacoes=IQ[l].participacoes+1;
                        }
                    }
                }
            }
        }
    }
    for (i=0; i<n[0]; i++)
    {
        if(IQ[i].participacoes>=max)
        {
            if (IQ[i].participacoes>max)
            {
                max=IQ[i].participacoes;
                quadra[0]=i;
            }
            else
            {
                *contador=*contador+1;
                quadra[*contador]=i;
            }
        }
    }
}

void QuadraMaisCavalo(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int quadra[n[0]], i, contador=0, j;
    PreencheParticipacoes(IQ, IC, IJ,n, quadra, &contador);
    if (contador>0)
    {
        printf("AS QUADRAS ");
        for (i=0; i<contador+1; i++)
        {
            printf(" %s ", IQ[quadra[i]].nome, IQ[quadra[i]].participacoes);
            for (j=contador-i; j>0; j--)
                printf(",");
        }
        printf(" SAO AS COM MAIS PARTICIPACOES NO CAMPEAONATO, COM %d PARTICIPACOES! \n", IQ[quadra[0]].participacoes);
        puts("");
    }
    else
    {
        printf("A QUADRA COM MAIS PARTICIPACOES FOI A QUADRA %s COM %d PARTICIPACOES! \n", IQ[quadra[0]].nome, IQ[quadra[0]].participacoes);
        puts("");
    }
    puts("");
    puts("");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuStats(IQ,IC,IJ,n);
}

void MenuJornadas(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int opcao;
    do
    {
        OrdenaTempos(IJ);
        system("cls");
        printf("MENU GESTAO DE JORNADAS\n");
        printf("1 - Inserir Jornada\n");
        printf("2 - Consultar Resultados da Jornada por Data\n");
        printf("3 - Consultar Jornadas por Nome do Cavalo\n");
        printf("4 - Listar Todas as Jornadas\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Selecionar opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            InserirJornada(IQ,IC,IJ,n);
            break;
        case 2:
            ResultJornada(IQ,IC,IJ,n);
            break;
        case 3:
            ResultCavalos(IQ,IC,IJ,n);
            break;
        case 4:
            ListarJornada(IQ,IC,IJ,n);
            break;
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while (opcao=!0);
    return 0;
}

void LimpaJornada(InfoJornadas IJ[], int n)
{
    int i, j;
    for (i=0; i<3 ; i++)
    {
        for (j=0; j<10; j++)
        {
            strcpy(IJ[n].data, "\0");
            strcpy(IJ[n].local, "\0");
            IJ[n].prova=0;
            IJ[n].IP[i].BI[j]=0;
            IJ[n].IP[i].NC[j]=0;
            IJ[n].IP[i].participantes=0;
            IJ[n].IP[i].tempo[j]=0;
            IJ[n].IP[i].min[j]=0;
            IJ[n].IP[i].mil[j]=0;
            IJ[n].IP[i].seg[j]=0;
            IJ[n].jornada=-1;
        }
    }
}

int ConfirmData(InfoJornadas IJ[], int n, char data[])
{
    int i, x=1;
    for (i=0; i<15; i++)
    {
        if (strcmp(data,IJ[i].data)==0)
            x=0;
    }
    if (x==0)
        return 0;
    else
        return 1;
}

int ConfirmNC(InfoJornadas IJ[], int jornada, int prova, int participante, int NC)
{
    int i, x=0;
    for (i=0; i<10 ; i++)
    {
        if (NC==IJ[jornada].IP[prova].NC[i])
            x=1;
    }
    if (x==1)
        return 1;
    else
        return 0;
}

void InserirJornada(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int jornada, vezes, i, local, def=1, j, k, menu, prova, d, confirm=0, NC, confdata;
    char data[MAX];
    printf("Quantas jornadas vai inserir: \n");
    scanf("%d", &vezes);
    for (i=0; i<(vezes); i++)
    {
        system("cls");
        printf("Qual e o numero da jornada?\n");
        scanf("%d", &jornada);
        for (d=0; d<15; d++)
        {
            if (IJ[d].jornada==jornada)
                confirm=1;
        }
        IJ[jornada-1].jornada=jornada;
        if (confirm==1)
        {
            printf("Essa jornada ja foi inserida. Prima (0) para voltar ou (1) se pretender reinserir esta jornada \n");
            scanf("%d", &confirm);
            switch (confirm)
            {
            case 0:
                MenuJornadas(IQ,IC,IJ,n);
                break;
            case 1:
                LimpaJornada(IJ,jornada-1);
                break;
            default:
                printf("Essa opçao nao e valida! \n");
                break;
            }
            puts("JORNADA APAGADA! PODE INTRODUZIR OS NOVOS DADOS!");
            puts("Prima enter para continuar");
            fflush(stdin);
            getchar();
        }
        else
            n[3]=n[3]+1;
        do
        {
            system("cls");
            printf("LOCAIS DAS JORNADAS \n");
            printf("1 - Hipodromo Municipal da Maia \n");
            printf("2 - Hipodromo de Albufeira \n");
            printf("3 - Hipodromo Quinta da Granja \n");
            printf("4 - Hipodromo Municipal de Golega \n");
            printf("5 - Hipodromo Municipal de Cabeceiras de Basto \n");
            printf("6 - Hipodromo de Felgueiras \n");
            printf("7 - Centro de Treinos Stand Carmo \n");
            printf("Qual foi o local de realizacao da jornada: \n");
            scanf("%d", &local);
            switch (local)
            {
            case 1:
                strcpy(IJ[jornada-1].local,"Hipodromo Municipal da Maia");
                break;
            case 2:
                strcpy(IJ[jornada-1].local,"Hipodromo de Albufeira");
                break;
            case 3:
                strcpy(IJ[jornada-1].local,"Hipodromo Quinta da Granja");
                break;
            case 4:
                strcpy(IJ[jornada-1].local,"Hipodromo Municipal de Golega");
                break;
            case 5:
                strcpy(IJ[jornada-1].local,"Hipodromo Municipal de Cabeceiras de Basto");
                break;
            case 6:
                strcpy(IJ[jornada-1].local,"Hipodromo de Felgueiras");
                break;
            case 7:
                strcpy(IJ[jornada-1].local,"Centro de Treinos Stand Carmo");
                break;
            default:
                printf("Opcao invalida!\n");
                def=0;
                break;
            }
        }
        while(def==0);
        system("cls");
        printf("Qual a data da jornada? \n");
        printf("Exemplo: 01-janeiro-2017 \n");
        fflush(stdin);
        gets(data);
        confdata=ConfirmData(IJ, jornada-1, data);
        if (confdata==0)
        {
            do
            {
                system("cls");
                printf("JA EXISTE UMA JORNADA A SER REALIZADA NESSA DATA! \n");
                puts("");
                printf("Qual a data da jornada? \n");
                printf("Exemplo: 01-janeiro-2017 \n");
                fflush(stdin);
                gets(data);
                confdata=ConfirmData(IJ, jornada-1, data);
            }
            while(confdata==0);
        }
        strcpy(data,IJ[jornada-1].data);
        do
        {
            system("cls");
            printf("Quantas provas tem esta jornada %d? \n", jornada);
            scanf("%d", &IJ[jornada-1].prova);
            if (IJ[jornada-1].prova<=0 || IJ[jornada-1].prova>3) puts("Uma jornada nao pode ter mais que tres provas!");
        }
        while(IJ[jornada-1].prova<=0 || IJ[jornada-1].prova>3);
        for (j=0; j<IJ[jornada-1].prova; j++)
        {
            system("cls");
            do
            {
                printf("Quantos participantes tem a prova %d? \n", j+1);
                scanf("%d", &IJ[jornada-1].IP[j].participantes);
                if (IJ[jornada-1].IP[j].participantes<=0 || IJ[jornada-1].prova>10) puts("So pode haver no maximo 10 participantes!");
            }
            while(IJ[jornada-1].IP[j].participantes<=0 || IJ[jornada-1].IP[j].participantes>10);
            for (k=0; k<IJ[jornada-1].IP[j].participantes; k++)
            {
                system("cls");
                printf("Participante %d: \n", k+1);
                printf("Qual o BI do participante? \n");
                scanf("%d", &IJ[jornada-1].IP[j].BI[k]);
                do
                {
                    printf("Qual o BI do participante? \n");
                    scanf("%d", &IJ[jornada-1].IP[j].BI[k]);
                    if (IJ[jornada-1].IP[j].BI[k]<100000000 || IJ[jornada-1].IP[j].BI[k]>999999999) puts("BI invalido!");
                }
                while(IJ[jornada-1].IP[j].BI[k]<10000000 || IJ[jornada-1].IP[j].BI[k]>99999999);
                system("cls");
                printf("Qual o NC do participante? \n");
                scanf("%d", &NC);
                do
                {
                    printf("Qual o NC do participante? \n");
                    scanf("%d", &NC);
                    if (NC<100000000 || NC>999999999) puts("NC invalido!");
                }
                while(NC<100000000 || NC>999999999);
                if (ConfirmNC(IJ, jornada-1, j, k, NC)==1)
                {
                    do
                    {
                        system("cls");
                        printf("Participante %d: \n", k+1);
                        printf("Ja existe um participante com esse NC! \n");
                        printf("Um participante nao pode participar duas vezes! Insira o NC correto! \n");
                        printf("Qual o NC do participante? \n");
                        scanf("%d", &NC);
                    }
                    while (ConfirmNC(IJ, jornada-1, j, k, NC)==1);
                }
                IJ[jornada-1].IP[j].NC[k]=NC;
                system("cls");
                puts("Qual o tempo do participante?");
                printf("Minutos: \n");
                scanf("%d", &IJ[jornada-1].IP[j].min[k]);
                printf("Segundos: \n");
                scanf("%d", &IJ[jornada-1].IP[j].seg[k]);
                printf("Milisegundos: \n");
                scanf("%d", &IJ[jornada-1].IP[j].mil[k]);
                IJ[jornada-1].IP[j].tempo[k]=IJ[jornada-1].IP[j].min[k]*60*1000+IJ[jornada-1].IP[j].seg[k]*1000+IJ[jornada-1].IP[j].mil[k];
            }
        }
    }
    system("cls");
    printf("Quer voltar para o menu principal(0) ou para o menu das jornadas(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        case 1:
            MenuJornadas(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
}

void OrdenaTempos(InfoJornadas IJ[])
{
    int i, j, k, temp=0, h;
    for(i=0; i<15; i++)
    {
        for(j=0; j<3; j++)
        {
            for(h=IJ[i].IP[j].participantes-1; h>0; h--)
            {
                for(k=0; k<h; k++)
                {
                    if(IJ[i].IP[j].tempo[k]>IJ[i].IP[j].tempo[k+1])
                    {
                        temp=IJ[i].IP[j].tempo[k];
                        IJ[i].IP[j].tempo[k]=IJ[i].IP[j].tempo[k+1];
                        IJ[i].IP[j].tempo[k+1]=temp;
                        temp=IJ[i].IP[j].BI[k];
                        IJ[i].IP[j].BI[k]=IJ[i].IP[j].BI[k+1];
                        IJ[i].IP[j].BI[k+1]=temp;
                        temp=IJ[i].IP[j].NC[k];
                        IJ[i].IP[j].NC[k]=IJ[i].IP[j].NC[k+1];
                        IJ[i].IP[j].NC[k+1]=temp;
                        temp=IJ[i].IP[j].min[k];
                        IJ[i].IP[j].min[k]=IJ[i].IP[j].min[k+1];
                        IJ[i].IP[j].min[k+1]=temp;
                        temp=IJ[i].IP[j].seg[k];
                        IJ[i].IP[j].seg[k]=IJ[i].IP[j].seg[k+1];
                        IJ[i].IP[j].seg[k+1]=temp;
                        temp=IJ[i].IP[j].mil[k];
                        IJ[i].IP[j].mil[k]=IJ[i].IP[j].mil[k+1];
                        IJ[i].IP[j].mil[k+1]=temp;
                    }
                }
            }
        }
    }
}

void ResultJornada(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int jornada, i, k, j, c;
    printf("Qual e a jornada? \n");
    scanf("%d", &jornada);
    system("cls");
    printf("JORNADA %d \n", jornada);
    puts("");
    printf("DATA: %s\n", IJ[jornada-1].data);
    puts("");
    for (j=0; j<IJ[jornada-1].prova; j++)
    {
        printf("PROVA %d \n", j+1);
        puts("------------------------------------------------------------------------");
        puts("|  Cavalo   |  Idade  |  Sexo   |   Quadra  |   Jockey   |    Tempo    |");
        for (i=0; i<IJ[jornada-1].IP[j].participantes; i++)
        {
            for (k=0; k<MAX; k++)
            {
                if (IJ[jornada-1].IP[j].NC[i]==IC[k].NC) c=k;
            }
            printf("|     %s      |      %d      |    %c    |    %s   |     %d     |   %02d:%02d:%02d   | \n", IC[c].nomeCavalo, IC[c].idade, IC[c].sexo, IC[c].nomeQuadra, IJ[jornada-1].IP[j].BI[i], IJ[jornada-1].IP[j].min[i], IJ[jornada-1].IP[j].seg[i], IJ[jornada-1].IP[j].mil[i]);
        }
        puts("------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf("\n");
    }
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuJornadas(IQ,IC,IJ,n);
}

void ResultCavalos(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i, cavalo=-1, menu, NC, j, k, jornada, prova, q, teste=-1;
    char nome[MAX];
    system("cls");
    printf("Qual o nome do cavalo? \n");
    fflush(stdin);
    gets(nome);
    for (i=0; i<MAX; i++)
    {
        if (strcmp(IC[i].nomeCavalo,nome)==0) cavalo=i;
    }
    if (cavalo>=0)
    {
        for(k=0; k<15; k++)
        {
            for (q=0; q<IJ[k].prova; q++)
            {
                for (j=0; j<10; j++)
                {
                    if (IJ[k].IP[q].NC[j]==IC[cavalo].NC)
                    {
                        NC=j;
                        prova=q;
                        jornada=k;
                    }
                }
                if(prova>teste)
                {
                    printf("O cavalo %s participou na jornada %d, prova %d e obteve o tempo de %02d:%02d:%02d. Esta jornada foi realizada em %s na data %s. \n", IC[cavalo].nomeCavalo, jornada+1, prova+1, IJ[jornada].IP[prova].min[NC], IJ[jornada].IP[prova].seg[NC], IJ[jornada].IP[prova].mil[NC], IJ[jornada].local, IJ[jornada].data);
                    puts("");
                    puts("");
                    teste=prova;
                }
            }
        }
        puts("");
    }
    else
    {
        puts("Nao existe cavalo com o nome inserido (Prima enter para continuar)");
        fflush(stdin);
        getchar();
    }
    printf("Quer voltar a pesquisar por cavalos(0) ou quer ir para o menu das jornadas(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            ResultCavalos(IQ,IC,IJ,n);
            break;
        case 1:
            MenuJornadas(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
}

void ListarJornada(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i;
    system("cls"),
           puts("------------------------------------------------------------------------");
    puts("|        Jornada        |         Local         |         Data         |");
    for (i=0; i<15; i++)
        printf("|        %d         |         %s         |         %s         | \n", i+1, IJ[i].local, IJ[i].data);
    puts("------------------------------------------------------------------------");
    puts("");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuJornadas(IQ,IC,IJ,n);
}

int MenuCavalos(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int opcao;
    do
    {
        system("cls");
        printf("MENU GESTAO DE PARTICIPANTES\n");
        printf("1 - Inserir Participante\n");
        printf("2 - Eliminar Participante\n");
        printf("3 - Consultar Participante por NC de Jockey\n");
        printf("4 - Consultar Participante cujo cavalo seja a Femea mais Idosa\n");
        printf("5 - Listar Todos os Participantes\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Selecionar opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            InserirParticipante(IQ,IC,IJ,n);
            break;
        case 2:
            EliminarParticipante(IQ,IC,IJ,n);
            break;
        case 3:
            ConsultarParticipanteNC(IQ,IC,IJ,n);
            break;
        case 4:
            CavaloFemeaIdosa(IQ,IC,IJ,n);
            break;
        case 5:
            ConsultaTodosCavalos(IQ,IC,IJ,n);
            break;
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while (opcao=!0);
    return 0;
}

void InserirParticipante(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int vezes=0, i, menu, j, confirm=0, num;
    num=n[1];
    printf("Quantos participantes vai inserir: \n");
    scanf("%d", &vezes);
    for (i=num; i<(vezes+num); i++)
    {
        system("cls");
        printf("Insira o nome do cavalo: \n");
        fflush(stdin);
        gets(IC[i].nomeCavalo);
        printf("Insira o nome da quadra a que o cavalo pertence: \n");
        fflush(stdin);
        gets(IC[i].nomeQuadra);
        printf("Insira o sexo do cavalo: \n");
        fflush(stdin);
        scanf("%c", &IC[i].sexo);
        printf("Insira a idade do cavalo: \n");
        scanf("%d", &IC[i].idade);
        printf("Insira o NC do respetivo Jockey: \n");
        scanf("%d", &IC[i].NC);
        n[1]=i+1;

    }
    system("cls");
    printf("Quer voltar para o menu principal(0) ou para o menu dos participantes(1)? \n");
    scanf("%d", &menu);
    system("cls");
    do
    {
        switch (menu)
        {
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        case 1:
            MenuCavalos(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
    return 0;
}

void EliminarParticipante(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int vezes, i, j, confirm=0, menu, NC;
    printf("Quantos participantes quer apagar?: \n");
    scanf("%d", &vezes);
    for (i=0; i<vezes; i++)
    {
        system("cls");
        printf("Qual o NC do Participante?: \n");
        scanf("%d", &NC);
        for (j=0; j<MAX; j++)
        {
            if (IC[j].NC==NC)
            {
                strcpy(IC[j].nomeCavalo, "\0");
                strcpy(IC[j].nomeQuadra, "\0");
                IC[j].NC=0;
                IC[j].sexo=' ';
                IC[j].idade=0;
                confirm=1;
            }

        }
        if (confirm==0)
        {
            printf("Nao existe nenhum participante com esse NC! (Prima Enter para continuar)\n");
            getchar();
            i=i-1;
        }
        else
        {
            printf("Quadra Apagada!");
            puts("Prima enter para continuar");
            fflush(stdin);
            getchar();
        }
    }
    system("cls");
    printf("Quer voltar para o menu principal(0) ou para o menu dos participantes(1)? \n");
    scanf("%d", &menu);
    system("cls");
    do
    {
        switch (menu)
        {
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        case 1:
            MenuCavalos(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
    return 0;
}

void ConsultarParticipanteNC(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i, cavalo=-1, menu, NC;
    system("cls");
    puts("Qual o NC do participante?");
    scanf("%d", &NC);
    for (i=0; i<MAX; i++)
    {
        if (IC[i].NC==NC) cavalo=i;
    }
    if (cavalo>=0)
        printf("O particpante chama-se %s ,pertence a quadra %s ,tem %d anos e e do sexo %c. \n", IC[cavalo].nomeCavalo, IC[cavalo].nomeQuadra, IC[cavalo].idade, IC[cavalo].sexo);
    else
    {
        puts("Nao existe participante com o NC inserido (Prima enter para continuar)");
        fflush(stdin);
        getchar();
    }
    printf("Quer voltar a pesquisar por participantes(0) ou quer ir para o menu dos participantes(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            ConsultarParticipanteNC(IQ,IC,IJ,n);
            break;
        case 1:
            MenuCavalos(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
}

void CavaloFemeaIdosa(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i, idade=0, egua;
    for (i=0; i<MAX; i++)
    {
        if (IC[i].sexo=='f' || IC[i].sexo=='F')
        {
            if (IC[i].idade>idade)
            {
                idade=IC[i].idade;
                egua=i;
            }
        }
    }
    printf("A egua mais idoda pertence a quadra %s, chama-se %s, tem %d anos e pertence ao Jockey com o NC: %d. \n", IC[egua].nomeQuadra, IC[egua].nomeCavalo, IC[egua].idade, IC[egua].NC);
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuCavalos(IQ,IC,IJ,n);
}

void ConsultaTodosCavalos (InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i;
    system("cls"),
           puts("---------------------------------------------------------------------------------");
    puts("|   Nome do Participante   |    Quadra    |    Idade   |    Sexo    |    NC     |");
    for (i=0; i<n[1]; i++)
        printf("|      %s       |       %s       |       %d       |      %c      |       %d       | \n", IC[i].nomeCavalo, IC[i].nomeQuadra, IC[i].idade, IC[i].sexo, IC[i].NC);
    puts("---------------------------------------------------------------------------------");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuCavalos(IQ,IC,IJ,n);
}

void MenuQuadras(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int opcao;
    do
    {
        system("cls");
        printf("MENU GESTAO DE QUADRAS\n");
        printf("1 - Inserir Quadra\n");
        printf("2 - Eliminar Quadra\n");
        printf("3 - Consultar Quadra por nome\n");
        printf("4 - Consultar Quadra com mais cavalos\n");
        printf("5 - Listar Todas as Quadras\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Selecionar opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            InserirQuadras(IQ,IC,IJ,n);
            break;
        case 2:
            EliminarQuadras(IQ,IC,IJ,n);
            break;
        case 3:
            ConsultaQuadra(IQ,IC,IJ,n);
            break;
        case 4:
            QuadraCavalos(IQ,IC,IJ,n);
            break;
        case 5:
            ConsultaTodasQuadra(IQ,IC,IJ,n);
            break;
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while (opcao=!0);
    return 0;
}

int ConfirmIgual(InfoQuadras IQ[],int j)
{
    int i, confirm=0;
    for (i=0; i<j; i++)
    {
        if (strcmp(IQ[j].nome,IQ[j-1-i].nome)==0)
            confirm=1;
    }
    return confirm;
}

void InserirQuadras(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int vezes=0, i, menu, j, confirm=0, num;
    num=n[0];
    printf("Quantas quadras vai inserir: \n");
    scanf("%d", &vezes);
    for (i=num; i<(vezes+num); i++)
    {
        system("cls");
        printf("Insira o nome da quadra: \n");
        fflush(stdin);
        gets(IQ[i].nome);
        confirm=ConfirmIgual(IQ,i);
        if (confirm==1)
        {
            printf("Nome ja escolhido! (Pressione Enter para continuar) \n");
            i=i-1;
            fflush(stdin);
            getchar();
        }
        else
        {
            printf("Insira a localidade da quadra: \n");
            fflush(stdin);
            gets(IQ[i].localidade);
            printf("Insira a quantidade de cavalos: \n");
            scanf("%d", &IQ[i].cavalos);
        }
        n[0]=i+1;
    }
    system("cls");
    printf("Quer voltar para o menu principal(0) ou para o menu das quadras(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        case 1:
            MenuQuadras(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
    return 0;
}

int EliminarQuadras(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int vezes, i, j, confirm=0, menu;
    char nomeq[MAX];
    printf("Quantas quadras quer apagar?: \n");
    scanf("%d", &vezes);
    for (i=0; i<vezes; i++)
    {
        system("cls");
        printf("Qual o nome da quadra?: \n");
        fflush(stdin);
        gets(nomeq);
        for (j=0; j<MAX; j++)
        {
            if (strcmp(IQ[j].nome,nomeq)==0)
            {
                strcpy(IQ[j].nome, "\0");
                strcpy(IQ[j].localidade, "\0");
                IQ[j].cavalos=0;
                confirm=1;
            }

        }
        if (confirm==0)
        {
            printf("Nao existe nenhuma quadra com esse nome! (Prima Enter para continuar)\n");
            getchar();
            i=i-1;
        }
        else
        {
            printf("Quadra Apagada!");
            puts("Prima enter para continuar");
            fflush(stdin);
            getchar();
        }
    }
    system("cls");
    printf("Quer voltar para o menu principal(0) ou para o menu das quadras(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            MenuPrincipal(IQ,IC,IJ,n);
            break;
        case 1:
            MenuQuadras(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
    return 0;
}

void ConsultaQuadra(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    char nome[MAX];
    int i, quadra=-1, menu, confirm=0, j;
    puts("Qual o nome da quadra?");
    fflush(stdin);
    gets(nome);
    for (i=0; i<MAX; i++)
    {
        if (strcmp(IQ[i].nome,nome)==0) quadra=i;
    }
    if (quadra>=0)
        printf("A quadra chama-se %s ,com origem em %s e tem %d cavalos. \n", IQ[quadra].nome, IQ[quadra].localidade, IQ[quadra].cavalos);
    else
    {
        puts("Nao existe quadra com esse nome (Prima enter para continuar)");
        fflush(stdin);
        getchar();
        MenuQuadras(IQ,IC,IJ,n);
    }
    puts("----------------------------------------------------------------------------------");
    puts("|   Nome dos Cavalos da Quadra   |    Sexo    |    Idade    |     NC do Jockey    |");
    for (i=0; i<MAX; i++)
    {
        if (strcmp(nome,IC[i].nomeQuadra)==0)
        {
            printf("|     %s      |    %c    |    %d     |     %d      | \n", IC[i].nomeCavalo, IC[i].sexo, IC[i].idade, IC[i].NC);
            confirm=1;
        }
    }
    if (confirm==0) puts("Nao existem cavalos associados a esta quadra.");
    puts("----------------------------------------------------------------------------------");
    printf("\n Quer voltar a pesquisar por quadras(0) ou quer ir para o menu das quadras(1)? \n");
    scanf("%d", &menu);
    do
    {
        switch (menu)
        {
        case 0:
            ConsultaQuadra(IQ,IC,IJ,n);
            break;
        case 1:
            MenuQuadras(IQ,IC,IJ,n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(menu!=-1);
}

void QuadraCavalos (InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i, cavalos=0, quadra;
    for (i=0; i<MAX; i++)
    {
        if (IQ[i].cavalos>cavalos)
        {
            cavalos=IQ[i].cavalos;
            quadra=i;
        }
    }
    printf("A quadra com mais cavalos e a quadra %s, com origem em %s e %d cavalos. \n", IQ[quadra].nome, IQ[quadra].localidade, IQ[quadra].cavalos);
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuQuadras(IQ,IC,IJ,n);
}

void ConsultaTodasQuadra(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int i;
    system("cls"),
           puts("------------------------------------------------------------------");
    puts("|   Nome da Quadra   |    Localidade    |    Numero de Cavalos   |");
    for (i=0; i<n[0]; i++)
        printf("|       %s        |        %s        |        %d        | \n", IQ[i].nome, IQ[i].localidade, IQ[i].cavalos);
    puts("------------------------------------------------------------------");
    puts("Prima enter para continuar");
    fflush(stdin);
    getchar();
    system("cls");
    MenuQuadras(IQ,IC,IJ,n);
}

void MenuPrincipal(InfoQuadras IQ[], InfoCavalos IC[], InfoJornadas IJ[], int n[])
{
    int opcao;
    do
    {
        system("cls");
        printf("MENU PRINCIPAL\n");
        printf("1 - Gestao de Quadras\n");
        printf("2 - Gestao de Participantes\n");
        printf("3 - Gestao de Jornadas\n");
        printf("4 - Estatisticas\n");
        printf("0 - Sair\n");
        printf("Selecionar opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
        case 1:
            MenuQuadras(IQ,IC,IJ,n);
            break;
        case 2:
            MenuCavalos(IQ,IC,IJ,n);
            break;
        case 3:
            MenuJornadas(IQ,IC,IJ,n);
            break;
        case 4:
            MenuStats(IQ,IC,IJ,n);
            break;
        case 0:
            exit(MenuPrincipal);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while (opcao=!0);
}

int main()
{
    int n[3] = {7,17,2};
    InfoQuadras IQ[MAX];
    InfoCavalos IC[MAX];
    InfoJornadas IJ[15];
    InicializaInfoQuadras(IQ);
    InicializaInfoCavalos(IC);
    InicializaInfoJornadas(IJ);
    MenuPrincipal(IQ,IC,IJ,n);
    return 0;
}
