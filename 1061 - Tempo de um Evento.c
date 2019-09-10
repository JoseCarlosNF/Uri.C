#include <stdio.h>

int main(){
    // Variaveis de entrada
    int
        diaInicio, horaInicio, minutoInicio, segundoInicio,
        diaFim,    horaFim,    minutoFim,    segundoFim;
    
    // Variaveis de manipulacao logica
    int
        segundosTotais, minutosTotaisEmSegundos,
        horasTotaisEmSegundos, diasTotaisEmSegundos,
        tempoTotalEmSegundos;

    // Variaveis da apresentacao final
    int
        duracaoDias, duracaoHoras, duracaoMinutos, duracaoSegundos;
    
    // Entradas
    // ==> Inicio <==
    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d\n",
        &horaInicio, &minutoInicio, &segundoInicio
    );
    // ==> Fim <==
    scanf("Dia %d",&diaFim);
    scanf("%d : %d : %d\n",
        &horaFim, &minutoFim, &segundoFim
    );

    // >=> Logica: Transformar tudo em segundos.
    segundosTotais = (60 - segundoInicio + segundoFim);
    minutosTotaisEmSegundos = (60 - minutoInicio - 1 + minutoFim) * 60;
    horasTotaisEmSegundos = (24 - horaInicio - 1 + horaFim) * 3600;
    diasTotaisEmSegundos = (diaFim - diaInicio - 1) * 86400;

    // Tempo total em segundos
    tempoTotalEmSegundos
        = segundosTotais
        + minutosTotaisEmSegundos
        + horasTotaisEmSegundos
        + diasTotaisEmSegundos;
    
    // Duracoes: Pega os restos.
    duracaoDias = tempoTotalEmSegundos / 86400;
    duracaoHoras = (tempoTotalEmSegundos % 86400) / 3600;
    duracaoMinutos = ((tempoTotalEmSegundos % 86400) % 3600) / 60;
    duracaoSegundos = ((tempoTotalEmSegundos % 86400) % 3600) % 60;

    // Apresentação Final
    printf("%d dia(s)\n", duracaoDias);
    printf("%d hora(s)\n", duracaoHoras);
    printf("%d minuto(s)\n", duracaoMinutos);
    printf("%d segundo(s)\n", duracaoSegundos);
    return 0;
}
