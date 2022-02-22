#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Inicio função principal
int main() {                // algumas variaveis
    //VARIAVEIS DO JOGADOR
    int playerHPMax=24;
    int playerHPRecuperar=0;
    int playerHP=playerHPMax;
    int playerSPMAX=12;
    int playerSP=playerSPMAX/2;
    int playerATK=3;
    int playerAtaque=0;
    int fogoQueima=0;
    int level=18;
    int experiencia18=0;
    int experiencia18MAX=100;
    int armadura=1;
    int capacete=1;
    int espada=2;
    int ouro=100;
    int playerDefBuff=0;
    int playerDefMax=capacete+armadura;
    int playerDef=playerDefMax;
    //FIM VARIAVEIS JOGADOR//

    //VARIAVEIS INIMIGO
    int inimigoHP=0;
    int inimigoHPMax=0;
    int inimigoSP=0;
    int inimigoSPMAX=0;
    int inimigoATK=0;
    int inimigoAtaque=0;
    int inimigoDef=0;
    //FIM VARIAVEIS INIMIGO//

    int perderDef=0;
    int pularVez=0;
    int batalha=0;
    int menuInicial=1;
    int comecarJogo=0;
    int tutorial=1;
    int jogo=1;
    int limite=4;
    int dialogo=0;
    int venceu=0;
    int escolhaMorte=0;
    int escolhaInicial=0;
    int escolha=0;
    int subEscolha=0;
    int vezInimigo=0;
    int vezJogador=1;
    int carregarInfo=0;
    int efeito=0;
    int tirarDano=0;
    int transformacao=0;
    int randomAta=0;
    int efeitoAta=0;
    int caminhoEscolha=0;
    int caminhoEscolhaDireita=0;
    int escolherCaminho=0;
    int inimigo=0;
    int levelInimigo=0;
    int dormir=0;
    int naoPodeIr=0;
    int ferreiro=0;
    int proximaBatalha=0;
    int escolhaFerreiro=0;
    int floresta=0;
    int bar=0;

    int i=0;
    srand(time(NULL));

    //Inicio do loop do jogo
    while(jogo==1){

        //inicio menu
        if (menuInicial==1){
            printf("Digite 1 para JOGAR\nDigite 2 para ler as INSTRUCOES\nDigite 3 para conhecer a historia.\n\n");
            scanf("%d",&escolhaInicial);

            //inicio escolha 1
            if(escolhaInicial==1){
               comecarJogo=1;
               menuInicial=0;
               }//fim escolha 1//

            //inicio escolha 2
            if(escolhaInicial==2){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Voce deve digitar os numeros indicados para o seu personagem executar uma acao.\n\n");
                printf("Voce pode atacar e usar ataques especiais durante os turnos.\n\n");
                printf("Voce começa com metade da sua energia especial pois quando elevada ao maximo, possui um ataque poderoso.\n\n");
                printf("Ataque que possuem um asterisco (*) no nome de seu ataque causa dano por turno.\n\n");
                printf("Ao se curar(+), voce nao passa o turno.\n\n");
                printf("Ao se defender, sua defesa sera multiplicada por 3.\n\n");
                printf("Ao se defender, voce nao podera usar nos proximos dois turnos, mas ganha 1 SP ao usar.\n\n");
                printf("Ataques que usam todo SP ignoram a defesa.\n\n");
                printf("Outros ataques que tambem ignoram a defesa serao simbolizados(-).\n\n");
                printf("Voce recupera energia especial(SP) por turno.\n\n");
                printf("Voce ganhara experiencia e ouro ao vencer batalhas.\n\n");
                printf("Voce pode equipar diferentes espadas e armaduras que aumentam diferentes atributos.\n\n");
                printf("Voce nao possui tempo para jogar, portanto, se perdeu alguma informacao, basta rolar para cima.\n\n");
            }// fim escolha 2//

            //Inicio escolha 3
            if(escolhaInicial==3){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Georgia e um guerreiro promissor do coliseu.\n\n");
                printf("Voce ganha dinheiro e sobrevive batalhando contra outros guerreiros.\n\n");
                printf("Atualmente, ele participa no evento principal que acontece uma vez por semana.\n\n");
                printf("Severino e o seu companheiro de treino.\n\n");
                printf("Voce aprendeu a usar magia de fogo com seu pai.\n\n");
                printf("Seu pai e um bruxo que sempre o desprezou.\n\n");
                printf("Assim, Georgia comecou a batalhar muito cedo para se tornar independente.\n\n");
                printf("Georgia tem como objetivo superar seu pai, conseguindo o que seu pai buscou a vida inteira.\n\n");
                printf("O pai de Georgia buscou a vida inteira pela VIDA ETERNA.\n\n");
            }//FIM ESCOLHA 3//

        } //fim menu

        //Começo JOGO
        if (comecarJogo==1){

            //Começa dialogo com severino
            if (tutorial==1){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("   CAPITULO I\n\n");sleep(2);
                printf("COLISEU: SEMANA 14\n\n");sleep(2);
                printf("Severino: Vamos Georgia, acorde!\n");sleep(2);
                printf("Severino: Sua luta ja vai comecar.\n");sleep(1);
                printf("Severino: Que tal praticar um pouco antes da batalha?\n");sleep(2);

                //info batalha
                playerHP=playerHPMax;
                inimigoHP=1000;
                inimigoSP=1;
                tutorial=2;
                //FIM INFO BATALHA//

            }//FIM DIALOGO COM SEVERINO//

            //Começa batalha tutorial
            if(batalha==0){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Georgia            VS        Boneco de pau\n");
                printf("%d HP | %d/%d SP              %d HP | %d SP\n\n",playerHP, playerSP, playerSPMAX, inimigoHP,inimigoSP);sleep(1);


                //Inicio apresentação do sistema de ataque especial
                if(tutorial==3){
                    printf("Para usar ataques especiais, digite 2\n");
                    printf("2=Especial\n\n");
                    scanf("%d",&escolha);

                    //inicio escolha 2 - Ela fica antes para ser liberado essa parte quando o looping começar novamente
                    if(escolha==2){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("Energia: %d SP\n",playerSP);
                        printf("1=Giro de espada(-6 SP)\n");
                        scanf("%d",&subEscolha);

                        //inicio subescolha 1
                        if(subEscolha==1){
                            playerAtaque=999;
                            playerSP-=5;
                            vezInimigo=1;
                        }//FIM SUBESCOLHA 1//

                    }//FIM ESCOLHA 2//

                }//FIM SISTEMA DE ATAQUE ESPECIAL//

                //Inicio apresentação ataque simples
                if(tutorial==2){
                    printf("Para atacar, digite 1\n");
                    printf("1=Atacar\n\n");
                    scanf("%d",&escolha);

                    //Inicio escolha 1
                    if(escolha==1){
                        playerAtaque=100;
                        tutorial=3;
                        vezInimigo=1;
                    }//FIM ESCOLHA 1

                }//FIM APRESENTAÇÃO ATAQUE SIMPLES//

                //Inicio digite uma opçao valida
                if(escolha<0 || escolha>2 || subEscolha<0 || subEscolha>1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("DIGITE UMA OPCAO VALIDA");sleep(2);

                }//FIM DIGITE UMA OPÇÃO VÁLIDA//

                //Inicio vez inimigo - Boneco de pau
                if(vezInimigo==1 && inimigoHP>0){
                    printf("\n");
                    printf("Boneco de pau recebeu %d de dano.\n",playerAtaque);sleep(2);
                    inimigoHP-=playerAtaque;
                    playerAtaque=0;
                    escolha=0;
                    subEscolha=0;
                    printf("\n");
                    if(inimigoHP>0){
                        printf("Boneco de pau nao sabe atacar.\n");
                    }
                    else{
                        printf("***Boneco de pau foi cortado***.\n");
                    }
                    sleep(2);
                    vezInimigo=0;
                }//FIM ATAQUE INIMIGO - BONECO DE PAU//

                //inicio do fim do tutorial
                if(inimigoHP<=0){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Severino: Voce quebrou o boneco...\n\n");sleep(2);
                    printf("Georgia: ...\n\n");sleep(2);
                    printf("Severino: Voce ja esta bem aquecido, agora vamos para sua luta.\n\n");sleep(2);
                    batalha=1;
                    carregarInfo=1;
                    tutorial=0;
                }//Fim do fim do tutorial

            }//FIM DA BATALHA  TUTORIAL//

            // ---------------------------------------------------------BATALHA 2--------------------------------------------------------------------------------
            //Inicio da batalha de verdade
            if(batalha==1){

                //------Inicio do carregamento das informações do inimigo Cracken---------
                if(carregarInfo==1){
                    //Resetar atributos player
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);
                    //Fim resetar atributos player//

                    //efeitos
                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;
                    //FIM EFEITOS//

                    //Inimigo
                    vezInimigo=0;
                    inimigo=1;
                    inimigoHPMax=35;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=8;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=4;
                    inimigoAtaque=0;
                    inimigoDef=1;
                    levelInimigo=20;
                    //FIM INIMIGO//

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("COLISEU: SEMANA 14\n\n");sleep(2);
                    printf("BATALHA 21\n\n");sleep(2);
                    printf("Georgia                VS             Cracken\n\n");
                    printf("level: %d                           Level: %d\n\n", level, levelInimigo);sleep(3);

                }//FIM DAS INFORMAÇÕES DO INIMIGO CRACKEN//--------------------

                //------Inicio do carregamento das informações do inimigo LOBO---------
                if(carregarInfo==2){
                    //Resetar atributos player
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);
                    //Fim resetar atributos player//

                    //efeitos
                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;
                    //FIM EFEITOS//

                    //Inimigo
                    vezInimigo=0;
                    inimigo=2;
                    inimigoHPMax=15;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=2;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=5;
                    inimigoAtaque=0;
                    inimigoDef=0;
                    levelInimigo=10;
                    //FIM INIMIGO//

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS                Lobo\n");
                    printf("level: %d                           Level: %d\n",level, levelInimigo);sleep(3);

                }//FIM DAS INFORMAÇÕES DO INIMIGO LOBO//--------------------

                //------Inicio do carregamento das informações do inimigo BEBADO---------
                if(carregarInfo==3){
                    //Resetar atributos player
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);
                    //Fim resetar atributos player//

                    //efeitos
                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;
                    //FIM EFEITOS//

                    //Inimigo
                    vezInimigo=0;
                    inimigo=3;
                    inimigoHPMax=20;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=5;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=3;
                    inimigoAtaque=0;
                    inimigoDef=0;
                    levelInimigo=10;
                    //FIM INIMIGO//

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS             Desconhecido\n");
                    printf("level: %d                                Level: %d\n",level, levelInimigo);sleep(3);
                    carregarInfo=0;

                }//FIM DAS INFORMAÇÕES DO INIMIGO BEBADO//--------------------

                //------Inicio do carregamento das informações do inimigo RAGNAR---------
                if(carregarInfo==4){
                    //Resetar atributos player
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);
                    //Fim resetar atributos player//

                    //efeitos
                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;
                    //FIM EFEITOS//

                    //Inimigo
                    vezInimigo=0;
                    inimigo=4;
                    inimigoHPMax=50;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=10;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=5;
                    inimigoAtaque=0;
                    inimigoDef=2;
                    levelInimigo=30;
                    //FIM INIMIGO//

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("COLISEU: SEMANA 15\n\n");sleep(2);
                    printf("BATALHA 22\n\n");sleep(2);
                    printf("Georgia                VS             Ragnar\n");
                    printf("level: %d                          Level: %d\n",level, levelInimigo);sleep(3);
                    carregarInfo=0;

                }//FIM DAS INFORMAÇÕES DO INIMIGO ragnar//--------------------

                //------Inicio do carregamento das informações do inimigo ESPECIAL---------
                if(carregarInfo==5){
                    //Resetar atributos player
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);
                    //Fim resetar atributos player//

                    //efeitos
                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;
                    //FIM EFEITOS//

                    //Inimigo
                    vezInimigo=0;
                    inimigo=5;
                    inimigoHPMax=1000;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=5;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=9;
                    inimigoAtaque=0;
                    inimigoDef=1;
                    levelInimigo=999;
                    //FIM INIMIGO//

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS             Dragao Negro\n");
                    printf("level: %d                          Level: %d\n",level, levelInimigo);sleep(3);
                    carregarInfo=0;

                }//FIM DAS INFORMAÇÕES DO INIMIGO ESPECIAL//--------------------

                carregarInfo=0;     //VARIAVEL PARA NAO CARREGAR NOVAMENTE AS INFORMAÇÕES
                escolha=0;
                subEscolha=0;
                efeito=0;
                inimigoAtaque=0;
                playerAtaque=0;
                tirarDano=0;
                randomAta=1;

                //Inicio informações inimigo 1 - CRACKEN
                if(inimigo==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS             Cracken\n");
                    printf("%d/%d HP | %d/%d SP            %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                    printf("Paladino                            Guerreiro\n\n");
                    sleep(1);
                }//FIM DAS INFORMAÇÕES DO INIMIGO 1//

                //Inicio informações inimigo 2 - LOBO
                if(inimigo==2){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS                Lobo\n");
                    printf("%d/%d HP | %d/%d SP          %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                    printf("Paladino                      Animal Selvagem\n\n");
                    sleep(1);
                }//FIM DAS INFORMAÇÕES DO INIMIGO 2//

                //Inicio informações inimigo 3 - BEBADO
                if(inimigo==3){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS             Desconhecido\n");
                    printf("%d/%d HP | %d/%d SP               %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                    printf("Paladino                                    Bebado\n\n");
                    sleep(1);
                }//FIM DAS INFORMAÇÕES DO INIMIGO 3 - BEBADO//

                //Inicio informações inimigo 4 - RAGNAR
                if(inimigo==4){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS            Ragnar\n");
                    printf("%d/%d HP | %d/%d SP         %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                    printf("Paladino                             Viking\n\n");
                    sleep(1);
                }//FIM DAS INFORMAÇÕES DO INIMIGO 4 - RAGNAR//

                //Inicio informações inimigo 5 - ESPECIAL
                if(inimigo==5){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Georgia                VS             Dragao Negro\n");
                    printf("%d/%d HP | %d/%d SP              %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                    printf("Paladino                                    Dragao\n\n");
                    sleep(1);
                }//FIM DAS INFORMAÇÕES DO INIMIGO 5 - ESPECIAL//

                //Inicio da vez do jogador
                if(vezJogador==1){
                    printf("O que deseja fazer?\n\n");
                    printf("1=Atacar\n");
                    printf("2=Especial\n");
                    printf("3=Defender\n");
                    printf("4=Informacoes\n\n");
                    scanf("%d",&escolha);

                    //começa escolha 1
                    if(escolha==1){
                        playerAtaque=playerATK;
                        vezInimigo=1;
                        tirarDano=1;
                    }//fim escolha  1

                    //inicio escolha 2
                    if(escolha==2){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("Energia: %d SP\n\n",playerSP);
                        printf("1=Giro de espada.(-6 SP)\n");
                        printf("2=Feitiço de fogo(-3 SP) *%d turnos. -\n", fogoQueima);
                        printf("3=Curar.(-2 SP) +\n");
                        printf("4=ESPADA FLAMEJANTE!(-12 SP)\n");
                        printf("5=Voltar.\n");
                        scanf("%d",&subEscolha);

                        //inicio subescolha 4 - ataque lendario
                        if(subEscolha==4){

                            //Se o jogador tiver energia ele pode atacar
                            if(playerSP>=12){
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Voce segura a sua espada firme.\n\n");
                                sleep(2);
                                printf("Voce fecha os olhos e respira suavemente.\n\n");
                                sleep(2);
                                printf("A espada exala fogo.\n\n");
                                sleep(2);
                                printf("ESPAAAAAAAAAAADA!!!!\n\n");
                                sleep(2);
                                printf("FLAMEJANTEEEEEEE!!!!\n\n");
                                sleep(2);
                                printf("Voce corte e queima seu inimigo.\n\n");
                                playerAtaque=(playerATK*4)+inimigoDef;
                                playerSP=playerSP-12;
                                vezInimigo=1;
                                fogoQueima=fogoQueima+2;
                                tirarDano=1;
                                sleep(2);
                            }//FIM DO SE TIVER ENERGIA//

                            //Se nao tiver energia, aparece essa mensagem
                            else{
                                printf("\n");
                                printf("VOCE NAO POSSUI SP SUFICIENTE\n");
                                sleep(1);
                                vezInimigo=0;
                            }//FIM DO SE NAO TIVER ENERGIA//

                        }//FIM SUBESCOLHA 4//

                        //inicio subescolha 1 - ataque forte
                        if(subEscolha==1){

                            //Se o jogador tiver energia ele pode atacar
                            if(playerSP>=6){
                                playerAtaque=playerATK*2.5;
                                playerSP-=6;
                                vezInimigo=1;
                                tirarDano=1;
                            }//FIM DO SE TIVER ENERGIA//

                            //Se nao tiver energia, aparece essa mensagem
                            else{
                                printf("\n");
                                printf("VOCE NAO POSSUI SP SUFICIENTE");
                                sleep(1);
                                vezInimigo=0;
                            }//FIM DO SE NAO TIVER ENERGIA//

                        }//FIM SUBESCOLHA 1//

                        //Inicio subescolha 2 - queimar
                        if(subEscolha==2){
                            if(playerSP>=3){
                                printf("\n");
                                printf("VOCE QUEIMA SEU INIMIGO!!!\n\n");
                                playerSP-=4;
                                fogoQueima=fogoQueima+3;
                                vezInimigo=1;
                                sleep(2);
                            }
                            //Inicio se nao tiver energia para queimar
                            else{
                                printf("\n");
                                printf("VOCE NAO POSSUI SP SUFICIENTE");
                                sleep(1);
                                vezInimigo=0;
                            }//FIM SE NAO TIVER ENERGIA PARA QUEIMAR

                        }//FIM SUB ESCOLHA 2//

                        //inicio sub escolha 3 - curar
                        if(subEscolha==3){

                            //Se o jogador tiver energia ele pode curar
                            if(playerSP>=2){
                                playerHPRecuperar=(playerHPMax*0.3);
                                playerHP+=playerHPRecuperar;
                                playerSP-=2;
                                printf("Georgia curou %d de vida.\n",playerHPRecuperar);sleep(2);
                                if(playerHP>=playerHPMax){
                                    playerHP=playerHPMax;
                                }
                                vezInimigo=0;

                            }//FIM DO SE O JOGADOR TIVER ENERGIA ELE PODE SE CURAR//

                            //SE NAO TIVER ENERGIA, NAO PODE E APARECE ESSA MENSAGEM
                            else{
                                printf("\n");
                                printf("VOCE NAO POSSUI SP SUFICIENTE");
                                sleep(2);
                                vezInimigo=0;
                            }//FIM DA MENSAGEM DE NAO PODE CURAR//

                        }//FIM SUBESCOLHA 3//

                        //inicio sub escolha 5 - voltar
                        if(subEscolha==5){
                            vezInimigo=0;
                        }//FIM SUBESCOLHA 5//

                    } //FIM ESCOLHA 2//

                    //Inicio escolha 3      - Buff de defesa - 1 Round de Colldown
                    if(escolha==3){
                        //Inicio Só pode usar se o playerBuff for 0, pq quando ativar, irá acrescentar 2 na variável dele
                        if(playerDefBuff==0){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            playerDef=playerDefMax*5;
                            playerDefBuff=3;
                            playerSP=playerSP+1;
                            printf("Georgia aumentou sua defesa para %d.\n\n",playerDef);sleep(2);
                            printf("Georgia aumentou 1 SP.\n\n");sleep(2);
                            vezInimigo=1;
                        }//FIM SÓ PODE USAR SE O PLAYERBUFF FOR 0//

                        else{
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Voce nao pode fazer isso agora.\n");sleep(2);
                            vezInimigo=0;
                        }

                    }//FIM ESCOLHA 3//

                    //Inicio escolha 4
                    if(escolha==4){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("LEVEL: %d | Seu level.\n\n",level);
                        printf("Experiencia: %d/%d | Sua experiencia para subir de  level.\n\n",experiencia18,experiencia18MAX);
                        printf("Vida: %d/%d HP | Se a sua vida chegar a 0, VOCE MORRE! Voce pode recuperar apos perder a metade.\n\n",playerHP, playerHPMax);
                        printf("Energia: %d/%d SP | Usada para ataques especiais ou para curar. Pode multiplicar o seu ataque ou causar danos por turno.\n\n",playerSP,playerSPMAX);
                        printf("Ataque: %d ATK | Quantidade de dano que seu ataque causa nos inimigos, porem, sera amortecido pela defesa deles. \n\n",playerATK);
                        printf("Defesa: %d DEF | Usado para amortecer ataques de inimigos, porem, nem todos.\n\n",playerDef);
                        printf("Espada: Level %d | Aumenta %d ATK\n\n",espada,espada);
                        printf("Armadura: Level %d | Aumenta %d DEF\n\n",armadura,armadura);
                        printf("Capacete: Level %d  | Aumenta %d DEF\n\n",capacete,capacete);
                        printf("Escudo: Level 1  | Multiplica 5x a sua defesa ao se DEFENDER e ganha 1 SP.\n\n");
                        printf("Ouro: %d | Seu dinheiro.\n\n",ouro);
                        printf("Digite 1 para voltar\n\n");

                        scanf("%d",&subEscolha);

                        //inicio opcao voltar
                        if(subEscolha>=1){
                            vezInimigo=0;
                        }//FIM OPÇÃO VOLTAR//

                    }//FIM ESCOLHA 4//

                     //Inicio opção invalida
                    if(escolha<0 || escolha>4 || subEscolha<0 || subEscolha>5){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("DIGITE UMA OPCAO VALIDA");sleep(1);
                        vezInimigo=0;

                    }//FIM OPÇÃO INVALIDA//
                }//FIM VEZ PLAYER//

                //Tirar DANOS
                if(tirarDano==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    playerAtaque=playerAtaque-inimigoDef;
                    printf("Seu inimigo recebeu %d de dano.\n\n",playerAtaque);sleep(2);
                    inimigoHP-=playerAtaque;
                }//FIM TIRAR DANOS//

                //VEZ INIMIGO ------------------------------------------------
                if(vezInimigo==1 && inimigoHP>0){

                    //Ataques do inimigo 1 - Cracken -------------------------
                    if(inimigo==1){
                        if(transformacao==1){
                            printf("Cracken carregou sua energia.\n\n");sleep(2);
                            printf("Cracken esta com seu SP cheio.\n\n");sleep(2);
                            inimigoSP=inimigoSPMAX;
                            transformacao=-1;
                        }

                        //Comeca ataque SP=8
                        if(inimigoSP==8 && inimigoHP>0){
                            inimigoAtaque=(inimigoATK*3.5);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken segura a espada com as duas maos(8 SP).\n\n");sleep(3);
                            printf("CRACKEN USA DECAPTACAO!!!! -\n\n");sleep(2);
                            inimigoSP=inimigoSP-8;   //PERDA DE SP DO INIMIGO
                            randomAta=0;

                            //Inicio mensagem decaptação caso morra.
                            if(playerHP<=((inimigoATK*3))){
                                printf("VOCE FOI DECAPTADO!\n\n");sleep(2);
                            }//FIM DECAPTAÇÃO//

                        }//FIM ATAQUE SP=8//

                        //Inicio recarga de energia
                        if(inimigoHP<=20 && inimigoSP>=3 && transformacao==0 && inimigoSP<8){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken concentra toda sua energia.\n\n");sleep(2);
                            printf("Cracken perde 3 HP.\n\n");sleep(1);
                            printf("Cracken perde 3 SP.\n\n");sleep(1);
                            inimigoHP=inimigoHP-3;
                            inimigoSP=inimigoSP-3;
                            transformacao=1;
                        }//FIM RECARGA DE ENERGIA//

                        //Inicio inimigo pode atacar se tiver HP
                        if(inimigoHP>0 && vezInimigo==1 && randomAta==1){

                            //SISTEMA DE ALEATORIEDADE DO ATAQUE DO INIMIGO
                            i = rand() % 7;

                            //Inicio ataque 7
                            if(i==7){
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken acerta sua mao.\n\n");sleep(1);
                                printf("Seu ataque e diminuido.\n\n");sleep(1);
                                efeitoAta=3;
                            }//FIM ATAQUE 7//

                            //inicio ataque 5
                            if(i==5){
                                inimigoAtaque=0;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Voce rolou.\n\n");sleep(2);
                                printf("Cracken errou o ataque.\n\n");sleep(2);
                                printf("Voce ataca Cracken por tras.\n\n");sleep(2);
                                printf("Cracken perde %d HP.\n\n", (playerATK-inimigoDef));
                                inimigoHP=inimigoHP-(playerATK-inimigoDef);
                            }//FIM ATAQUE 5//

                            //inicio ataque 1
                            if(i==1){
                                inimigoAtaque=(inimigoATK*1.5)-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken atacou voce com a espada.\n\n");sleep(2);
                            }//FIM ATAQUE 1//

                            //inicio ataque 6
                            if(i==6){
                                inimigoAtaque=inimigoATK-2;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken chutou voce por baixo. - \n\n");sleep(2);
                            }//FIM ATAQUE 6//

                            //Inicio ataque 2
                            if(i==2){

                                //Inicio ataque 2 especial
                                if(inimigoSP>=5){
                                    inimigoAtaque=inimigoATK*2.5-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken salta\n\n");sleep(2);
                                    printf("Cracken acerta voce com a espada de cima para baixo(5 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-5;
                                }//FIM ATAQUE 2 ESPECIAL//

                                //Inicio ataque 2 normal
                                else{
                                    inimigoAtaque=1;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken da um tapa na sua cara. -\n\n");sleep(2);
                                    printf("Sua moral cai.\n\n");sleep(2);
                                    printf("Voce perde 1 SP\n\n");
                                    playerSP=playerSP-1;
                                }//FIM ATAQUE 2 NORMAL//

                            }//FIM ATAQUE 2//

                            //Inicio ataque 3
                            if(i==3){
                                //Inicio aaque 3 especial
                                if(inimigoSP>=5){
                                    inimigoAtaque=0;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken ri de voce\n\n");sleep(2);
                                    printf("Sua moral cai.\n\n");sleep(2);
                                    printf("Voce perde 1 SP.\n\n");sleep(2);
                                    printf("Cracken diz que voce e patetico.\n\n");sleep(2);
                                    printf("Voce fica enfurecido e se aproxima\n\n");sleep(2);
                                    printf("Voce empurra Cracken no chao.\n\n");sleep(2);
                                    printf("Cracken joga areia na sua cara.\n\n");sleep(2);
                                    printf("Voce fica cego.\n\n");sleep(2);
                                    printf("Cracken acerta voce com a sua espada de baixo para cima(5 SP). -\n\n");sleep(2);
                                    playerSP=playerSP-1;
                                    inimigoAtaque=inimigoATK*2;
                                    inimigoSP=inimigoSP-5;
                                }//FIM ATAQUE 3 ESPECIAL//

                                //Inicio ataque 3 normal
                                else{
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("Cracken te da um soco. \n\n");sleep(2);
                                } //FIM ATAQUE 3 NORMAL//

                            }//FIM ATAQUE 3

                            //Inicio ataque 4
                            if(i==4){

                                //Inicio ataque especial 4
                                if(inimigoSP>=4){
                                    inimigoAtaque=2;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken te empurra para o chao(4 SP). \n\n");sleep(2);
                                    printf("Voce perde a sua vez. \n\n");sleep(2);
                                    inimigoSP=inimigoSP-4;
                                    pularVez=2;
                                }//FIM ATAQUE ESPECIAL 4//

                                //Inicio ataque normal 4
                                else{
                                    inimigoAtaque=inimigoATK-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken te da uma voadora de dois pes. \n\n");sleep(2);
                                    printf("Seu equipamento fica desajeitado. \n\n");sleep(2);
                                    printf("Voce perde a sua defesa. \n\n");sleep(2);
                                    perderDef=3;
                                }//FIM ATAQUE NORMAL 4

                            }//FIM ATAQUE 4//

                            //Inicio ataque 0
                            if(i==0){

                                //Inicio ataque 0 especial
                                if(inimigoSP>=6){
                                    inimigoAtaque=inimigoATK*2.5-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken usa giro de espada(6 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-6;
                                }//FIM ATAQUE 0 ESPECIAL//

                                //Inicio ataque 0 normal
                                else{
                                    inimigoAtaque=inimigoATK-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Cracken ataca voce.\n\n");sleep(2);
                                }//FIM ATAQUE 0 NORMAL

                            }//FIM ATAQUE 0

                        }//FIM DO INIMIGO PODE ATACAR//

                    }//FIM ATAQUE INIMIGO 1 - CRACKEN //

                    //Ataques do inimigo 4 - RAGNAR -------------------------
                    if(inimigo==4){

                        //Inicio inimigo pode atacar se tiver HP
                        if(inimigoHP>=20 && vezInimigo==1 && randomAta==1){

                            //SISTEMA DE ALEATORIEDADE DO ATAQUE DO INIMIGO
                            i = rand() % 5;

                            //inicio ataque 0
                            if(i==0){
                                inimigoAtaque=0;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Voce rolou.\n\n");sleep(2);
                                printf("Ragnar errou o ataque.\n\n");sleep(2);
                                printf("Voce ataca Ragnar por tras.\n\n");sleep(2);
                                printf("Ragnar perde %d HP.\n\n", (playerATK-inimigoDef));
                                inimigoHP=inimigoHP-(playerATK-inimigoDef);
                            }//FIM ATAQUE 0//

                            //inicio ataque 1
                            if(i==1){
                                inimigoAtaque=(inimigoATK*1.5)-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Ragnar ataca voce com o machado. \n\n");sleep(2);
                            }//FIM ATAQUE 1//

                            //inicio ataque 2
                            if(i==2){
                                inimigoAtaque=inimigoATK-1;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Ragnar chuta voce por baixo. - \n\n");sleep(2);
                            }//FIM ATAQUE 2//

                            //Inicio ataque 3
                            if(i==3){

                                //Inicio ataque 3 especial
                                if(inimigoSP>=8){
                                    inimigoAtaque=inimigoATK*3-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Ragnar carrega o seu machado com eletricidade.\n\n");sleep(2);
                                    printf("Ragnar acerta voce com um raio.(8 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-8;
                                }//FIM ATAQUE 2 ESPECIAL//

                                //Inicio ataque 3 normal
                                else{
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Ragnar diz que voce e feio.\n\n");sleep(2);
                                    printf("Sua moral cai.\n\n");sleep(2);
                                    printf("Voce perde 1 SP \n\n");
                                    playerSP=playerSP-1;
                                }//FIM ATAQUE 3 NORMAL//

                            }//FIM ATAQUE 3//

                            //Inicio ataque 4
                            if(i==4){

                                //Inicio aaque 4 especial
                                if(inimigoSP>=5){
                                    inimigoAtaque=0;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Ragnar insulta a sua mae.\n\n");sleep(2);
                                    printf("Voce fica enfurecido e se aproxima\n\n");sleep(2);
                                    printf("Ragnar joga o machado em voce.\n\n");sleep(2);
                                    printf("Ragnar pega o machado no ar.\n\n");sleep(2);
                                    printf("Ragnar acerta voce com o machado novamente.(5 SP). -\n\n");sleep(2);
                                    inimigoAtaque=inimigoATK*2;
                                    inimigoSP=inimigoSP-5;
                                }//FIM ATAQUE 4 ESPECIAL//

                                //Inicio ataque 4 normal
                                else{
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("Ragnar joga uma pedra em voce.\n\n");sleep(2);
                                } //FIM ATAQUE 4 NORMAL//

                            }//FIM ATAQUE 4

                            //Inicio ataque 5
                            if(i==5){

                                //Inicio ataque 5 especial
                                if(inimigoSP>=6){
                                    inimigoAtaque=inimigoATK*2.5-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Ragnar usa giro de machado(6 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-6;
                                }//FIM ATAQUE 5 ESPECIAL//

                                //Inicio ataque 5 normal
                                else{
                                    inimigoAtaque=inimigoATK-1;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Ragnar morde voce. -\n\n");sleep(2);
                                }//FIM ATAQUE 5 NORMAL

                            }//FIM ATAQUE 5

                        }//FIM DO INIMIGO PODE ATACAR//

                    }//FIM ATAQUE INIMIGO 4 - RAGNAR //

                    //Ataques do inimigo 2 - LOBO --------------------------------
                    if(inimigo==2){

                        //Inicio inimigo pode atacar se tiver HP
                        if(inimigoHP>0 && vezInimigo==1 && randomAta==1){

                            //Inicio ataque 3 especial
                            if(inimigoSP==2){
                                inimigoAtaque=inimigoATK*2;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Lobo pula em voce\n\n");sleep(2);
                                printf("Lobo morde seu pescoco.(2 SP).\n\n");sleep(2);
                                inimigoSP=inimigoSP-2;
                            }//FIM ATAQUE 2 ESPECIAL//

                            //Inicio ataque 3 normal
                            else{
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Lobo pula em voce.\n\n");sleep(2);
                                printf("Lobo arranha voce.\n\n");sleep(2);
                            }//FIM ATAQUE 3 NORMAL//

                        }//FIM DO INIMIGO PODE ATACAR//

                    }//FIM ATAQUE INIMIGO 2 - LOBO //

                    //Ataques do inimigo 3 - BEBADO -------------------------
                    if(inimigo==3){

                        //Inicio inimigo pode atacar se tiver HP
                        if(inimigoHP>0 && vezInimigo==1 && randomAta==1){

                            //SISTEMA DE ALEATORIEDADE DO ATAQUE DO INIMIGO
                            i = rand() % 4;

                            //inicio ataque 0
                            if(i==0){
                                inimigoAtaque=0;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Voce rolou.\n\n");sleep(2);
                                printf("Desconhecido errou o ataque.\n\n");sleep(2);
                                printf("Voce ataca Desconhecido por tras.\n\n");sleep(2);
                                printf("Desconhecido perde %d HP.\n\n", (playerATK-inimigoDef));
                                inimigoHP=inimigoHP-(playerATK-inimigoDef);
                            }//FIM ATAQUE 0//

                            //inicio ataque 1
                            if(i==1){
                                inimigoAtaque=(inimigoATK*1.5)-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Desconhecido da um soco em voce. \n\n");sleep(2);
                            }//FIM ATAQUE 1//

                            //inicio ataque 2
                            if(i==2){
                                inimigoAtaque=inimigoATK-1;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Desconhecido chuta voce por baixo. - \n\n");sleep(2);
                            }//FIM ATAQUE 2//

                            //Inicio ataque 3
                            if(i==3){

                                //Inicio ataque 3 especial
                                if(inimigoSP==5){
                                    inimigoAtaque=inimigoATK*2.5;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Desconhecido quebra uma garrafa.\n\n");sleep(2);
                                    printf("Desconhecido acerta voce com a ponta garrafa quebrada.(5 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-5;
                                }//FIM ATAQUE 2 ESPECIAL//

                                //Inicio ataque 3 normal
                                else{
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Desconhecido diz que voce nunca vai conseguir conquistar uma mulher.\n\n");sleep(2);
                                    printf("Sua moral cai.\n\n");sleep(2);
                                    printf("Voce perde 1 SP\n\n");
                                    playerSP=playerSP-1;
                                }//FIM ATAQUE 3 NORMAL//

                            }//FIM ATAQUE 3//

                            //Inicio ataque 5
                            if(i==4){

                                //Inicio ataque 4 especial
                                if(inimigoSP>=3){
                                    inimigoAtaque=inimigoATK*2-playerDef;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Desconhecido joga uma cadeira em voce.(3 SP).\n\n");sleep(2);
                                    inimigoSP=inimigoSP-6;
                                }//FIM ATAQUE 5 ESPECIAL//

                                //Inicio ataque 4 normal
                                else{
                                    inimigoAtaque=inimigoATK-1;
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    printf("Desconhecido joga uma garrafa em voce. \n\n");sleep(2);
                                }//FIM ATAQUE 5 NORMAL

                            }//FIM ATAQUE 5

                        }//FIM DO INIMIGO PODE ATACAR//

                    }//FIM ATAQUE INIMIGO 3 - BEBADO //

                    //Ataques do inimigo 5 - DRAGAO -------------------------
                    if(inimigo==5){
                        //Inicio aaque 4 especial
                        if(inimigoSP==5){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Dragao Negro cospe fogo em voce\n\n");sleep(2);
                            inimigoAtaque=inimigoATK*2;
                            inimigoSP=inimigoSP-5;
                            randomAta=0;
                        }//FIM ATAQUE 4 ESPECIAL//

                        //Inicio inimigo pode atacar se tiver HP
                        if(inimigoHP>0 && vezInimigo==1 && randomAta==1){

                            //SISTEMA DE ALEATORIEDADE DO ATAQUE DO INIMIGO
                            i = rand() % 3;

                            //inicio ataque 0
                            if(i==0){
                                inimigoAtaque=0;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Voce rolou.\n\n");sleep(2);
                                printf("Dragao Negro errou o ataque.\n\n");sleep(2);
                                printf("Voce ataca Dragao Negro por tras.\n\n");sleep(2);
                                printf("Dragao Negro perde %d HP.\n\n", (playerATK-inimigoDef));
                                inimigoHP=inimigoHP-(playerATK-inimigoDef);
                            }//FIM ATAQUE 0//

                            //inicio ataque 1
                            if(i==1){
                                inimigoAtaque=(inimigoATK)-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Dragao Negro ataca voce com suas garras. \n\n");sleep(2);
                            }//FIM ATAQUE 1//

                            //Inicio ataque 2
                            if(i==2){
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("Dragao Negro ataca voce com sua cauda gigante.\n\n");sleep(2);
                            }//FIM ATAQUE 2

                            //Inicio ataque 3
                            if(i==3){
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                inimigoAtaque=inimigoATK;
                                printf("Dragao Negro comeca a voar.\n\n");sleep(2);
                                printf("Dragao Negro se joga em voce. -\n\n");sleep(2);
                            }//FIM ATAQUE 3

                        }//FIM DO INIMIGO PODE ATACAR//

                    }//FIM ATAQUE INIMIGO 5 - DRAGAO //

                    //INFORMAÇÕES DO ATAQUE DO INIMIGO

                    //Inicio correção para dano nao ser negativo
                    if(inimigoAtaque<0){
                        inimigoAtaque=0;
                    }//FIM CORREÇÃO DANO NEGATIVO//

                    printf("Voce recebeu %d de dano \n\n", inimigoAtaque);sleep(2);
                    playerHP=playerHP-inimigoAtaque;
                    i=0;
                    efeito=1;

                    //Sistema de pular a  vez do jogador
                    if(pularVez>=1){
                        vezJogador=0;
                        vezInimigo=1;
                        pularVez=pularVez-1;
                    }//FIM SISTEMA DE PULAR A VEZ DO JOGADOR

                    //Inicio trocar a vez
                    if(pularVez==0){
                        vezJogador=1;
                        vezInimigo=0;
                    }//FIM TROCAR A VEZ//

                }//FIM VEZ INIMIGO//

                 //Inicio efeitos
                if(efeito==1 && playerHP>0 && inimigoHP>0){

                    //Inicio aumentar SP para 0 se for negativo
                    if(playerSP<0){
                        playerSP=0;
                    }// FIM AUMENTAR SP PARA 0 SE FOR NEGATIVO


                    //Inicio aumentar SP Player
                    if(playerSP<playerSPMAX){
                       playerSP+=1;
                       printf("Ambos recebem +1 SP.\n\n");sleep(2);
                    }//FIM AUMENTAR SP PLAYER//

                    //Inicio queimar inimigo
                    if(fogoQueima>=1){
                        printf("\n");
                        printf("Seu inimigo esta queimando. \n\n");sleep(2);
                        printf("");
                        printf("Seu inimigo recebeu 3 de dano.\n");sleep(2);
                        inimigoHP=inimigoHP-3;
                        fogoQueima=fogoQueima-1;
                    }//FIM QUEIMAR INIMIGO//

                    //Inicio aumentar SP do inimigo
                    if(inimigoSP<inimigoSPMAX){
                        inimigoSP=inimigoSP+1;
                    }//FIM AUMENTAR SP DO INIMIGO//

                    if(perderDef>=2){
                        playerDef=playerDefMax-2;
                        perderDef=perderDef-1;
                    }

                    if(perderDef==1){
                        playerDef=playerDefMax+2;
                        perderDef-1;
                    }

                    if(efeitoAta>=2){
                        playerATK=playerATK-1;
                        efeitoAta=efeitoAta-1;
                    }

                    if(efeitoAta==1){
                        playerATK=playerATK+1;
                        efeitoAta=efeitoAta-1;
                    }

                    //Inicio player buff defesa
                    if(playerDefBuff>=1){
                        playerDefBuff=playerDefBuff-1;
                    }//FIM PLAYER BUFF DEFESA//
                    if(playerDefBuff==2){
                        playerDef=playerDefMax;
                        playerDefBuff-1;
                    }//FIM PLAYER BUFF DEFESA//

                    efeito=0;

                }//FIM EFEITOS//

                // Inicio Fim de jogo
                if(playerHP<=0 && inimigo==5){
                printf("VOCE MORREU!!!!!. \n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("Voce enxerga uma luz.\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("Voce encontra a si mesmo do futuro.\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("...\n\n");sleep(2);
                printf("Voce aprende RESSUSCITAR.\n\n");sleep(2);
                printf("FIM DO CAPITULO.\n\n");sleep(2);
                printf("CONTINUA...\n\n");sleep(2);
                break;
                }

                if(playerHP<=0){
                    printf("\n");
                    printf("VOCE MORREU!!!!!. \n\n");sleep(2);
                    printf("1 - RECOMECAR \n");
                    scanf("%d",&escolhaMorte);

                    //Inicio escolha morte
                    if(escolhaMorte>=1){

                        if(inimigo==1){
                            carregarInfo=1;
                        }

                        if(inimigo==2){
                            carregarInfo=2;
                        }

                        if(inimigo==3){
                            carregarInfo=3;
                        }

                        if(inimigo==4){
                            carregarInfo=4;
                        }

                    }//FIM ESCOLHA MORTE//

                }//FIM DO FIM DE JOGO//

                //Inicio da morte inimigo 1 - Cracken
                if(inimigoHP<=0 && inimigo==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Parabens! Voce venceu!\n\n");sleep(2);
                    printf("500 ouro recebido\n\n");sleep(2);
                    printf("75 XP recebida.\n\n");sleep(2);
                    escolha=0;
                    subEscolha=0;
                    venceu=1;
                    ouro=ouro+500;
                    experiencia18=experiencia18+75;
                    batalha=-1;
                }//Fim morte do inimigo 1 - CRACKEN//

                //Inicio da morte inimigo 2 - LOBO
                if(inimigoHP<=0 && inimigo==2){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    experiencia18=experiencia18+25;

                    //subir de level
                    if(experiencia18==experiencia18MAX){
                        level=level+1;
                        playerHPMax=playerHPMax+3;
                        experiencia18=0;
                    }//FIM SUBIR DE LEVEL//

                    printf("Parabens! Voce venceu!\n\n");sleep(2);
                    printf("25 XP recebida.\n\n");sleep(2);
                    printf("Voce subiu para o level %d.\n\n",level);sleep(2);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce anda mais um pouco.\n\n");sleep(2);
                    printf("Voce acha um saco de moedas.\n\n");sleep(2);
                    printf("100 ouro recebido.\n\n");sleep(2);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce anda mais.\n\n");sleep(2);
                    printf("Voce ve uma alcateia de lobos.\n\n");sleep(2);
                    printf("Voce volta para o inicio da trilha.\n\n");sleep(2);
                    ouro=ouro+100;

                    venceu=1;
                    escolha=-1;
                    subEscolha=-1;
                    escolherCaminho=1;
                    naoPodeIr=1;
                    batalha=-1;
                }//Fim morte do inimigo 2 - LOBO//

                //Inicio da morte inimigo 3 - Bebado
                if(inimigoHP<=0 && inimigo==3){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    experiencia18=experiencia18+25;

                    //subir de level
                    if(experiencia18==experiencia18MAX){
                        level=level+1;
                        playerHPMax=playerHPMax+3;
                        experiencia18=0;
                    }//FIM SUBIR DE LEVEL//

                    printf("Parabens! Voce venceu!\n\n");sleep(2);
                    printf("25 XP recebida.\n\n");sleep(2);
                    printf("Voce subiu para o level %d.\n\n",level);sleep(2);
                    printf("Voce rouba a carteira dele.\n\n");sleep(2);
                    printf("100 ouro recebido.\n\n");sleep(2);
                    printf("Os segurancas tiram voces do bar.\n\n");sleep(2);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce continua bebendo com seus amigos fora do bar.\n\n");sleep(2);
                    printf("Voce bebe demais.\n\n");sleep(2);

                    ouro=ouro+100;
                    experiencia18=experiencia18+25;
                    venceu=1;
                    batalha=-1;
                    escolha=-1;
                    subEscolha=-1;
                    floresta=1;

                }//Fim morte do inimigo 3 - Bebado//

                //Inicio da morte inimigo 4 - Ragnar
                if(inimigoHP<=20 && inimigo==4){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Ragnar carrega todo seu SP.\n\n");sleep(3);
                    printf("Ragnar se prepara para usar o golpe raio do trovao do ceu.(-10 SP).\n\n");sleep(3);
                    printf("O tempo fica nublado.\n\n");sleep(3);
                    printf("O ceu fica escuro.\n\n");sleep(3);
                    printf("Nuvens se formam ao redor da arena.\n\n");sleep(3);
                    printf("Todos olham para o ceu.\n\n");sleep(3);
                    printf("Um dragao esmaga Ragnar.\n\n");sleep(5);

                    carregarInfo=5;
                }//Fim morte do inimigo 4 - RAGNAR//

            }//---------------------------FIM DA BATALHA---------------------------------//

            //Começo pos batalha
            if(venceu==1){

                //começo mensagem de vitoria
                if(escolha==0){
                    escolha=0;
                    subEscolha=0;
                    escolherCaminho=0;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("O que deseja fazer?\n\n");sleep(2);
                    printf("1-Comemorar em um bar\n");
                    printf("2-Visitar um ferreiro\n");
                    printf("3-Dormir\n\n");

                    scanf("%d",&escolha);
                }//FIM COMEÇO MENSAGEM DE VITORIA

                //Inicio escolha 1 - Bar
                if(escolha==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce esta bebendo com seus companheiros.\n\n");sleep(2);
                    printf("Voce ve alguns homens peturbando a atendente\n\n");sleep(2);
                    printf("O que voce faz?\n");sleep(2);
                    printf("1-Ignora e pede mais cerveja\n");
                    printf("2-Faz uma cantada na atendente\n");
                    printf("3-Pede para os homens pararem\n");
                    printf("\n");

                    scanf("%d",&bar);
                }//FIM ESCOLHA 1 - Bar//

                //-------------------------Inicio Sub escolha 1 do bar
                if(bar==1 || floresta==1){
                    floresta=0;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce bebe mais cerveja.\n\n");sleep(2);
                    printf("Voce esta tonto.\n\n");sleep(2);
                    printf("...\n\n");sleep(2);
                    printf("Voce acorda no meio da floresta a noite.\n\n");sleep(2);
                    printf("Voce nao faz a menor ideia de como foi parar la.\n\n");sleep(2);
                    printf("Voce enxerga tres caminhos para ir.\n");sleep(2);
                    escolherCaminho=1;
                    bar=0;
                }//FIM SUB ESCOLHA 2 DO BAR//

                //Inicio escolher caminho
                if(escolherCaminho==1){
                    escolha=-1;
                    subEscolha=-1;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Por qual caminho voce vai? \n\n");sleep(2);
                    printf("1 - Direita\n");
                    printf("2 - Reto\n");
                    printf("3 - Esquerda\n");
                    printf("\n");
                    scanf("%d", &caminhoEscolha);
                }//fim escolher caminho

                //inicio caminho escolha 1(direita)
                if(caminhoEscolha==1){
                    caminhoEscolhaDireita=0;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce enxerga dois caminhos para ir.\n\n");sleep(2);
                    printf("Por qual caminho voce vai? \n\n");sleep(2);
                    printf("1 - Direita\n");
                    printf("2 - Esquerda\n\n");
                    scanf("%d", &caminhoEscolhaDireita);
                }//FIM ESCOLHER CAMINHO ESCOLHA 1(DIREITA)//

                //inicio caminho escolha 1 (direita) para direita
                if(caminhoEscolhaDireita==1 && caminhoEscolha==1){
                    if(capacete==1){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("Voce encontra um bau.\n\n");sleep(2);
                        printf("Voce encontrou CAPACETE DA FLORESTA(LEVEL 2).\n\n");sleep(2);
                        printf("Voce chega ao fim da trilha.\n\n");sleep(2);
                        printf("Voce volta para o inicio da trilha. \n\n");sleep(2);
                        capacete=2;
                        playerDefMax=capacete+armadura;
                        caminhoEscolha=0;
                    }
                }//FIM CAMINHO ESCOLHA 1(DIREITA) PARA DIREITA//

                 //inicio caminho escolha 1 (direita) para esquerda
                if(caminhoEscolhaDireita==2 && caminhoEscolha==1 || (caminhoEscolhaDireita==1 && caminhoEscolha==1 && capacete==2)){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce encontra um beco sem saida.\n\n");sleep(2);
                    printf("Voce precisa voltar.\n\n");sleep(2);
                    printf("Voce volta para o inicio da trilha. \n\n");sleep(2);
                    caminhoEscolha=0;
                }//FIM CAMINHO ESCOLHA 1 (DIREITA) PARA ESQUERDA//

                //inicio caminho escolha 2 (reto) - ir para casa
                if(caminhoEscolha==2){
                    escolha=3;
                    subEscolha=0;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce segue reto e encontra o caminho de casa.\n\n");sleep(2);;
                    printf("Voce vai para sua casa.\n\n");sleep(2);
                    caminhoEscolha=-1;
                }//FIM ESCOLHER CAMINHO ESCOLHA 2(RETO)//

                //inicio caminho escolha 3 (esquerda) - briga com lobo
                if(caminhoEscolha==3){
                    //Nao pode ir depois de bater no lobo
                    if(naoPodeIr==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Muitos lobos por ali.\n\n");sleep(2);
                    caminhoEscolha=0;
                    }//FIM NAO PODE IR//

                    else{
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce encontra um lobo.\n\n");sleep(2);
                    printf("Ele te ataca.\n\n");sleep(2);
                    carregarInfo=2;
                    batalha=1;
                    venceu=0;
                    }
                }//FIM ESCOLHER CAMINHO ESCOLHA 3(ESQUERDA)//

                //-----------------------------Inicio Sub Escolha 2
                if(bar==2){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce canta a garconete\n\n");sleep(2);
                    printf("Ela te da um tapa\n\n");sleep(2);
                    printf("Os homens comecam a rir de voce e vao embora.\n\n");sleep(2);
                    printf("Voce e expulso do bar pelos segurancas que estavam vindo.\n\n");sleep(2);
                    printf("Voce tenta ir para a casa bebendo...\n\n");sleep(2);
                    printf("Voce esta...triste. \n\n");sleep(2);
                    playerSP=0;
                    escolha=-1;
                    subEscolha=-1;
                    floresta=1;
                    bar=0;
                }//FIM SUBESCOLHA 2

                //Inicio subescolha 3
                  if(bar==3){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce pede para os homens pararem\n\n");sleep(2);
                    printf("O lider do grupo te bate\n\n");sleep(2);
                    printf("Voces comecam a brigar\n\n");sleep(2);
                    printf("\n");
                    carregarInfo=3;
                    batalha=1;
                    venceu=0;
                    bar=0;
                }//FIM SUBESCOLHA 3//

                //Inicio subescolha ferreiro
                if(escolha==2 || ferreiro==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    escolhaFerreiro=0;
                    printf("BEM-VINDO AO FERREIRO!\n\n");sleep(2);
                    printf("QUER VER NOSSO CATALOGO?\n\n");sleep(2);
                    printf("1 - Sim.\n");
                    printf("2 - Nao.\n\n");

                    scanf("%d",&subEscolha);

                    //Inicio catalogo
                    if(subEscolha==1){
                        printf("\nOS ITENS QUE TEMOS SAO:                        Seu ouro: %d\n\n", ouro);sleep(1);
                        printf("1 - ESPADA DE OURO - LEVEL 3 - 750 OURO\n");sleep(1);
                        printf("2 - ARMADURA DE CAVALEIRO - LEVEL 2 - 600 OURO\n");sleep(1);
                        printf("3 - VOLTAR\n\n");sleep(1);

                        scanf("%d",&escolhaFerreiro);

                        if((escolhaFerreiro==1 && ouro<750) || (escolhaFerreiro==2 && ouro<600)){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("VOCE NAO POSSUI OURO SUFICIENTE!\n\n");sleep(2);
                            escolhaFerreiro=0;
                        }

                        //Inicio compra espada
                        if(escolhaFerreiro==1 && ouro>=750){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("PARABENS POR TER ADQUIRIDO ESPADA DE OURO! HEHEHE.\n\n");sleep(2);
                            printf("VOLTE SEMPRE!.\n\n");sleep(2);
                            playerATK=playerATK+1;
                            espada=3;
                            ouro=ouro-750;
                            subEscolha=0;
                        }//FIM COMPRA ESPADA//

                        //Inicio compra armadura
                        if(escolhaFerreiro==2 && ouro>=600){
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("PARABENS POR TER ADQUIRIDO ARMADURA DE CAVALEIRO! HEHEHE.\n\n");sleep(2);
                            printf("VOLTE SEMPRE!.\n\n");sleep(2);
                            armadura=2;
                            playerDefMax=capacete+armadura;
                            ouro=ouro-600;
                            subEscolha=0;
                        }//FIM COMPRA ARMADURA

                        //Inicio voltar
                        if(escolhaFerreiro==3){
                            escolha=2;
                            subEscolha=0;
                        }//FIM VOLTAR//

                    }//FIM CATALOGO//

                    //Inicio subescolha 2 antes de dormir - Voltar
                    if(subEscolha==2 && proximaBatalha==0){
                        escolha=0;
                    }//FIM SUBESCOLHA 2 ANTES DE DORMIR

                    //Inicio sub escolha 2 depois que dorme - Voltar
                    if(subEscolha==2 && proximaBatalha==1){
                        escolha=-1;
                    }//FIM SUBESCOLHA 2 DEPOIS QUE DORME//

                }//FIM ESCOLHA 2 - FERREIRO//

                //Inicio escolha 3 - Dormir
                if(escolha==3){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce chega em casa cansado.\n\n");sleep(2);
                    printf("Voce deita.\n\n");sleep(2);
                    printf("Voce dorme.\n\n");sleep(2);
                    printf("...\n\n");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("COLISEU: SEMANA 15\n\n");sleep(2);
                    printf("Severino: Vamos Georgia, acorde!\n\n");sleep(1);
                    printf("Severino: Sua luta ja vai comecar.\n\n");sleep(1);
                    proximaBatalha=1;
                    escolha=-1;
                }//FIM ESCOLHA 3 - DORMIR//

                //Inicio proxima batalha
                if(proximaBatalha==1){
                    escolherCaminho=0;
                    escolha=-1;
                    subEscolha=-1;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Severino: Que tal passar no ferreiro?\n\n");sleep(2);
                    printf("1 - Sim.\n");
                    printf("2 - Nao.\n\n");

                    scanf("%d",&subEscolha);

                    //inicio ir pro ferreiro
                    if(subEscolha==1){
                        ferreiro=1;
                    }//FIM IR PRO FERREIRO//

                    //Inicio comecar proxima batalha
                    if(subEscolha==2){
                        carregarInfo=4;
                        batalha=1;
                        venceu=0;
                    }//Fim comecar proxima batalha//

                }//FIM PROXIMA BATALHA

            }//FIM POS BATALHA//

        }//FIM COMECAR JOGO//

    }//FIM LOOP DO JOGO//

return 0;
}//FIM DA FUNÇÃO PRINCIPAL



