#include <stdio.h>

int main() {
    char E1[8], E2[14], E3[8], E4[14];
    int DI, DF, HI, MI, SI, HF, MF, SF, TIS, TFS, dias, horas, mins, segs;
    // DI = Dia Inicial | DF = Dia Final | HI = Hora Inicial | HF = Hora Final | MI = Minuto Inicial | MF = Minuto Final
    // SI = Segundo Inicial | SF = Segundo Final | TIS = Tempo Inicial total em Segundos | TFS = Tempo Final total em Segundos
    // dias = Dias de evento | horas = Horas de evento | mins = Minutos de evento | segs = Segundos de evento

    // fgets(XX é a variável onde ele salva, XX a quantidade de caracteres max, XX é de onde ele receberá os dados)
    fgets(E1, 8, stdin);
    fgets(E2, 14, stdin);
    fgets(E3, 8, stdin);
    fgets(E4, 14, stdin);

    // sscanf(XX é a variável a ser lida, "XX %d" os dados a serem lidos - o que tiver em %d será armazenado na variável, XX é a variável
    //        que armazenará o dado lido)
    sscanf(E1, "Dia %d", &DI);
    sscanf(E2, "%d : %d : %d", &HI, &MI, &SI);
    sscanf(E3, "Dia %d", &DF);
    sscanf(E4, "%d : %d : %d", &HF, &MF, &SF);

    // Tempo Inicial total convertido pra segundos
    TIS = ((HI * 3600) + (MI * 60) + SI);

    // Se o dia de inicio = dia de final, somente passa o tempo final para segundos totais
    if (DI == DF) {
        TFS = ((HF * 3600) + (MF * 60) + SF);
    } else {
    // Se os dias forem diferentes, calcula a diferença de dias em segundos e adiciona ao tempo final total
        TFS = (((DF - DI) * 86400) + (HF * 3600) + (MF * 60) + SF);
    }

    // Calcula a quantidade de dias do evento, sendo 86400 a quantidade de segundos de 24h (1 dia)
    dias = ((TFS - TIS) / 86400);
    // Calcula a quantidade de horas do evento, sendo 3600 a quantidade de segundos de 1h
    horas = ((TFS - TIS) / 3600);
    if (dias != 0) {
    // Se os dias forem diferentes de 0, remove 24 horas do total de horas calculado
        horas = (horas - (dias * 24));
    }
    // Se os minutos iniciais forem menores que os minutos finais, apenas subtrai o final do inicial
    if (MI < MF) {
        mins = (MF - MI);
        // Se os segundos iniciais forem maiores que os finais, remove 1 minuto dos minutos totais
        if (SI > SF) {
            mins--;
        }
    } else {
    // Se não houver nenhuma das condições acima, apenas calcula com base nos segundos totais de inicio e final
        mins = (((TFS - TIS) % 3600) / 60);
    }
    // Calcula os segundos com base nos segundos totais de inicio e final
    segs = (((TFS - TIS) % 3600) % 60);

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", mins);
    printf("%d segundo(s)\n", segs);

    return 0;
}
