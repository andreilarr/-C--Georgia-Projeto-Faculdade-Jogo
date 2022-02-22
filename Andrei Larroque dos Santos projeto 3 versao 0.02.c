#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Inicio função principal
int main() {                // algumas variaveis
    //VARIAVEIS DO JOGADOR
    int playerHPMax=24;
    int playerHPRecuperar=0;
    int playerHP=0;
    int playerSPMAX=12;
    int playerSP=playerSPMAX/2;
    int playerATK=3;
    int playerAtaque=0;
    int playerDef=2;
    int fogoQueima=0;
    int level=0;
    int experiencia=0;
    int experienciaMax=0;
    int armadura=0;
    int capacete=0;
    int espada=0;
    int ouro=0;
    int playerDefBuff=0;
    int playerDefMax=2;
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
    int transformacao=1;
    int randomAta=0;
    int efeitoAta=0;
    int caminhoEscolha=0;
    int caminhoEscolhaDireita=0;
    int caminhoEscolhaReto=0;
    int caminhoEscolhaEsquerda=0;
    int escolherCaminho=0;

    int i=0;
    srand(time(NULL));

    //Inicio do loop do jogo
    while(jogo==1){

        //inicio menu
        if (menuInicial==1){
            printf("Digite 1 para JOGAR\nDigite 2 para ler as INSTRUCOES\n\n");
            scanf("%d",&escolhaInicial);

            //inicio escolha 1
            if(escolhaInicial==1){
               comecarJogo=1;
               menuInicial=0;
               }//fim escolha 1//

            //inicio escolha 2
            else{
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Voce deve digitar os numeros indicados para o seu personagem executar uma acao.\n\n");
                printf("Voce pode atacar e usar ataques especiais durante os turnos.\n\n");
                printf("Voce começa com metade da sua energia especial pois quando elevada ao maximo, possui um ataque poderoso.\n\n");
                printf("Ataque que possuem um asterisco (*) no nome de seu ataque causa dano por turno.\n\n");
                printf("Voce pode se curar quando estiver com menos da metade de sua vida.\n\n");
                printf("Ao se curar(+), voce nao passa o turno.\n\n");
                printf("Ao se defender, sua defesa sera multiplicada por 3 e voce nao podera usar a defesa nos proximos dois turnos.\n\n");
                printf("Ataques que usam todo SP ignoram a defesa.\n\n");
                printf("Outros ataques que tambem ignoram a defesa serao simbolizados(-).\n\n");
                printf("Voce recupera energia especial(SP) por turno.\n\n");
                printf("Voce ganhara experiencia e ouro ao vencer batalhas.\n\n");
                printf("Voce pode equipar diferentes espadas e armaduras que aumentam diferentes atributos.\n\n");
                printf("Voce nao possui tempo para jogar, portanto, se perdeu alguma informacao, basta rolar para cima.\n\n");
            }// fim escolha 2//
        } //fim menu

        //Começo JOGO
        if (comecarJogo==1){

            //Começa dialogo com severino
            if (tutorial==1){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("COLISEU: SEMANA 74\n\n");
                sleep(2);
                printf("Severino: Vamos georgia, acorde!\n");
                sleep(2);
                printf("Severino: Sua luta ja vai comecar.\n");
                sleep(1);
                printf("Severino: Que tal praticar um pouco antes da batalha?\n");
                sleep(2);

                //info batalha
                batalha=1;
                playerHP=playerHPMax;
                inimigoHP=1000;
                inimigoSP=1;
                tutorial=2;
                //FIM INFO BATALHA//

            }//FIM DIALOGO COM SEVERINO//

            //Começa batalha tutorial
            if(batalha==1){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Georgia            VS        Boneco de pau\n");
                printf("%d HP | %d/%d SP                %d HP | %d SP\n\n",playerHP, playerSP, playerSPMAX, inimigoHP,inimigoSP);
                sleep(1);

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
                    printf("DIGITE UMA OPCAO VALIDA");
                    sleep(1);
                }//FIM DIGITE UMA OPÇÃO VÁLIDA//

                //Inicio vez inimigo - Boneco de pau
                if(vezInimigo==1 && inimigoHP>0){
                    printf("\n");
                    printf("Boneco de pau recebeu %d de dano.\n",playerAtaque);
                    inimigoHP-=playerAtaque;
                    playerAtaque=0;
                    escolha=0;
                    subEscolha=0;
                    sleep(1);
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
                    printf("Severino: Voce quebrou o boneco...\n\n");
                    sleep(2);
                    printf("Georgia: ...\n\n");
                    sleep(2);
                    printf("Severino: Voce ja esta bem aquecido, agora vamos para sua luta.\n\n");
                    sleep(2);
                    batalha=2;
                    carregarInfo=1;
                    tutorial=0;
                }//Fim do fim do tutorial

            }//FIM DA BATALHA  TUTORIAL//

            // ---------------------------------------------------------BATALHA 2--------------------------------------------------------------------------------
            //Inicio da batalha 2
            if(batalha==2){
                //Inicio do carregamento das informações do inimigo
                if(carregarInfo==1){
                    playerDef=playerDefMax;
                    playerHP=playerHPMax;
                    playerSP=(playerSPMAX/2);

                    efeito=0;
                    perderDef=0;
                    playerDefBuff=0;
                    efeitoAta=0;
                    pularVez=0;
                    fogoQueima=0;

                    espada=2;
                    armadura=2;
                    capacete=1;
                    level=18;
                    experiencia=0;
                    experienciaMax=100;
                    vezInimigo=0;
                    inimigoHPMax=0;
                    inimigoHP=inimigoHPMax;
                    inimigoSPMAX=8;
                    inimigoSP=inimigoSPMAX/2;
                    inimigoATK=4;
                    inimigoAtaque=0;
                    inimigoDef=1;

                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("COLISEU: SEMANA 74\n\n");
                    sleep(2);
                    printf("BATALHA 21\n\n");
                    sleep(2);
                    printf("Georgia                VS             Cracken\n\n");
                    printf("level: %d                           Level: 20\n\n", level);
                    sleep(2);

                }//FIM DAS INFORMAÇÕES DO INIMIGO//

                carregarInfo=0;     //VARIAVEL PARA NAO CARREGAR NOVAMENTE AS INFORMAÇÕES
                escolha=0;
                subEscolha=0;
                efeito=0;
                inimigoAtaque=0;
                playerAtaque=0;
                tirarDano=0;
                randomAta=1;

                //INICIO DO LOOPING DA BATALHA
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Georgia                VS             Cracken\n");
                printf("%d/%d HP | %d/%d SP         %d/%d HP | %d/%d SP\n",playerHP, playerHPMax, playerSP, playerSPMAX, inimigoHP,inimigoHPMax,inimigoSP, inimigoSPMAX);
                printf("Paladino                            Guerreiro\n\n");
                sleep(1);

                //Inicio da vez do jogador
                if(vezJogador==1){
                    printf("O que deseja fazer?\n");
                    printf("\n");
                    printf("1=Atacar\n");
                    printf("2=Especial\n");
                    printf("3=Defender\n");
                    printf("4=Informacoes\n");
                    printf("\n");
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
                        printf("Energia: %d SP\n",playerSP);
                        printf("1=Giro de espada.(-6 SP)\n");
                        printf("2=Feitiço de fogo(-3 SP) *%d turnos.\n", fogoQueima);
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
                                printf("FLAMEJANTE!!!!!!!!!!\n\n");
                                sleep(2);
                                printf("Voce corte e queima Cracken.\n\n");
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
                                printf("VOCE QUEIMA CRACKEN!!!");
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

                                //Mas a vida dele for maior do que a metade, ele nao precisa se curar.
                                if(playerHP>=playerHPMax-(playerHPMax*0.3)){
                                    printf("\n");
                                    printf("Voce nao precisa se curar.\n");
                                    sleep(2);
                                    vezInimigo=0;
                                }//FIM DA LIMITAÇÃO DE  CURA//

                                //Pode curar, se nao tiver imposição
                                else{
                                playerHPRecuperar=(playerHPMax*0.3);
                                playerHP+=playerHPRecuperar;
                                playerSP-=2;
                                printf("Georgia curou %d de vida.\n",playerHPRecuperar);
                                sleep(2);
                                vezInimigo=0;
                                }//FIM DO PODE CURAR//

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
                            playerDef=playerDefMax*5;
                            playerDefBuff=3;
                            printf("\nGeorgia aumentou sua defesa para %d.\n",playerDef);
                            sleep(2);
                            vezInimigo=1;
                        }//FIM SÓ PODE USAR SE O PLAYERBUFF FOR 0//

                        else{
                            printf("\nVoce nao pode fazer isso agora.\n");
                            sleep(2);
                            vezInimigo=0;
                        }

                    }//FIM ESCOLHA 3//

                    //Inicio escolha 4
                    if(escolha==4){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("LEVEL: %d | Seu level.\n\n",level);
                        printf("Experiencia: %d/%d | Sua experiencia para subir de  level.\n\n",experiencia,experienciaMax);
                        printf("Vida: %d/%d HP | Se a sua vida chegar a 0, VOCE MORRE! Voce pode recuperar apos perder a metade.\n\n",playerHP, playerHPMax);
                        printf("Energia: %d/%d SP | Usada para ataques especiais ou para curar. Pode multiplicar o seu ataque ou causar danos por turno.\n\n",playerSP,playerSPMAX);
                        printf("Ataque: %d ATK | Quantidade de dano que seu ataque causa nos inimigos, porem, sera amortecido pela defesa deles. \n\n",playerATK);
                        printf("Defesa: %d DEF | Usado para amortecer ataques de inimigos, porem, nem todos.\n\n",playerDef);
                        printf("Espada: Level %d | Aumenta 1 ATK\n\n",espada);
                        printf("Armadura: Level %d | Aumenta 1 DEF\n\n",armadura);
                        printf("Capacete: Level %d  | Aumenta 1 DEF\n\n",capacete);
                        printf("Escudo: Level 1  | Multiplica 5x a sua defesa ao se DEFENDER.\n\n",capacete);
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
                        printf("DIGITE UMA OPCAO VALIDA");
                        vezInimigo=0;
                        sleep(1);
                    }//FIM OPÇÃO INVALIDA//
                }//FIM VEZ PLAYER//

                //Tirar DANOS
                if(tirarDano==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    playerAtaque=playerAtaque-inimigoDef;
                    printf("Cracken recebeu %d de dano.\n",playerAtaque);
                    inimigoHP-=playerAtaque;
                    sleep(2);
                }//FIM TIRAR DANOS//

                //VEZ INIMIGO
                if(vezInimigo==1 && inimigoHP>0){

                    //Comeca ataque SP=8
                    if(inimigoSP==8){
                        inimigoAtaque=(inimigoATK*3.5);
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("Cracken segura a espada com as duas maos(8 SP).\n\n");
                        sleep(3);
                        printf("CRACKEN USA DECAPTACAO!!!! -\n");
                        sleep(2);
                        inimigoSP=inimigoSP-8;   //PERDA DE SP DO INIMIGO
                        randomAta=0;

                        //Inicio mensagem decaptação caso morra.
                        if(playerHP<=((inimigoATK*3))){
                            printf("\n");
                            printf("VOCE FOI DECAPTADO!\n");
                            sleep(2);
                        }//FIM DECAPTAÇÃO//

                    }//FIM ATAQUE SP=8//

                    if(inimigoHP<=15 && transformacao==1 && randomAta==1){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("Cracken concentra toda sua energia.\n\n");
                        sleep(2);
                        printf("Cracken perde 1 HP.\n");
                        inimigoSP=inimigoSPMAX;
                        inimigoHP=inimigoHP-1;
                        sleep(1);
                        transformacao=0;
                        vezInimigo=0;

                        }


                    //Inicio inimigo só pode atacar se tiver HP
                    if(inimigoHP>0 && vezInimigo==1 && randomAta==1){

                        //SISTEMA DE ALEATORIEDADE DO ATAQUE DO INIMIGO
                        i = rand() % 7;

                        //Inicio ataque 7 Especial
                        if(i==7){
                            inimigoAtaque=inimigoATK-playerDef;
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken acerta sua mao.\n\n");
                            sleep(1);
                            printf("Seu ataque e diminuido.\n");
                            sleep(1);
                            efeitoAta=3;
                        }   //FIM ATAQUE 7 ESPECIAL//

                        //inicio ataque 5
                        if(i==5){
                            inimigoAtaque=0;
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Voce rolou.\n\n");
                            sleep(2);
                            printf("Cracken errou o ataque.\n\n");
                            sleep(2);
                            printf("Voce ataca Cracken por tras.\n\n");
                            sleep(2);
                            printf("Cracken perde %d HP.\n\n", (playerATK-inimigoDef));
                            inimigoHP=inimigoHP-(playerATK-inimigoDef);
                            vezInimigo=0;
                        }//FIM ATAQUE 5//

                        //inicio ataque 1
                        if(i==1){
                            inimigoAtaque=(inimigoATK*1.5)-playerDef;
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken atacou voce com uma espada. \n");
                        }//FIM ATAQUE 1//

                        //inicio ataque 6
                        if(i==6){
                            inimigoAtaque=inimigoATK-1;
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken chutou voce por baixo. - \n");
                        }//FIM ATAQUE 6//

                        //Inicio ataque 2
                        if(i==2){

                            //Inicio ataque 2 especial
                            if(inimigoSP>=5){
                                inimigoAtaque=inimigoATK*2.5-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken salta\n\n");
                                sleep(1);
                                printf("Cracken acerta voce com a espada de cima para baixo(5 SP).\n");
                                sleep(1);
                                inimigoSP=inimigoSP-5;
                            }//FIM ATAQUE 2 ESPECIAL//

                            //Inicio ataque 2 normal
                            else{
                            inimigoAtaque=1;
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            printf("Cracken da um tapa na sua cara. -\n\n");
                            sleep(1);
                            printf("Sua moral cai.\n\n");
                            sleep(1);
                            printf("Voce perde 1 SP \n");
                            playerSP=playerSP-1;

                            if(playerSP<0){
                                playerSP=0;
                            }
                            }//FIM ATAQUE 2 NORMAL//

                        }//FIM ATAQUE 2//

                        //Inicio ataque 3
                        if(i==3){
                            //Inicio aaque 3 especial
                            if(inimigoSP>=5){
                                inimigoAtaque=0;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken ri de voce\n\n");
                                sleep(2);
                                printf("Sua moral cai.\n\n");
                                sleep(1);
                                printf("Voce perde 1 SP.\n\n");
                                sleep(1);
                                printf("Cracken diz que voce e patetico.\n\n");
                                sleep(2);
                                printf("Voce fica enfurecido e se aproxima\n\n");
                                sleep(2);
                                printf("Voce empurra Cracken no chao.\n\n");
                                sleep(2);
                                printf("Cracken joga areia na sua cara.\n\n");
                                sleep(2);
                                printf("Voce fica cego.\n\n");
                                sleep(2);
                                printf("Cracken acerta voce com a sua espada de baixo para cima(5 SP).\n\n");
                                sleep(2);
                                playerSP=playerSP-1;
                                inimigoAtaque=inimigoATK*2;
                                inimigoSP=inimigoSP-5;
                            }//FIM ATAQUE 3 ESPECIAL//

                            //Inicio ataque 3 normal
                            else{
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            inimigoAtaque=inimigoATK-playerDef;
                            printf("Cracken te da um soco. \n");
                            } //FIM ATAQUE 3 NORMAL//
                        }//FIM ATAQUE 3

                        //Inicio ataque 4
                        if(i==4){
                            //Inicio ataque especial 4
                            if(inimigoSP>=4){
                                inimigoAtaque=2;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken te empurra para o chao(4 SP). \n\n");
                                sleep(2);
                                printf("Voce perde a sua vez. \n");
                                inimigoSP=inimigoSP-4;
                                sleep(2);
                                pularVez=2;
                            }//FIM ATAQUE ESPECIAL 3//
                            else{
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken te da uma voadora de dois pes. \n\n");
                                sleep(1);
                                printf("Seu equipamento fica desajeitado. \n\n");
                                sleep(1);
                                printf("Voce perde a sua defesa. \n\n");
                                sleep(1);
                                perderDef=3;
                            }

                        }//FIM ATAQUE 4//

                        //Inicio ataque 0
                        if(i==0){
                            //Inicio ataque 0 especial
                            if(inimigoSP>=6){
                                inimigoAtaque=inimigoATK*2.5-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken usa giro de espada(6 SP).\n");
                                inimigoSP=inimigoSP-7;
                                sleep(1);
                            }//FIM ATAQUE 5 ESPECIAL//

                            else{
                                inimigoAtaque=inimigoATK-playerDef;
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                printf("Cracken ataca voce.\n");
                                sleep(1);
                            }


                        }//FIM ATAQUE 0

                    }//FIM DO INIMIGO PODE ATACAR//

                    //INFORMAÇÕES DO ATAQUE DO INIMIGO

                    //Inicio correção para dano nao ser negativo
                    if(inimigoAtaque<0){
                        inimigoAtaque=0;
                    }//FIM CORREÇÃO DANO NEGATIVO//

                    sleep(1);
                    printf("\n");
                    printf("Voce recebeu %d de dano \n", inimigoAtaque);
                    printf("\n");
                    playerHP=playerHP-inimigoAtaque;
                    sleep(2);
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
                    //Inicio aumentar SP Player
                    if(playerSP<playerSPMAX){
                       playerSP+=1;
                       printf("Voce recebeu +1 de SP. \n");
                       sleep(1);
                    }//FIM AUMENTAR SP PLAYER//

                    //Inicio queimar inimigo
                    if(fogoQueima>=1){
                        printf("\n");
                        printf("Cracken esta queimando. \n");
                        printf("\n");
                        printf("Cracken recebeu 3 de dano.\n");
                        inimigoHP=inimigoHP-3;
                        fogoQueima=fogoQueima-1;
                        sleep(1);
                    }//FIM QUEIMAR INIMIGO//

                    //Inicio aumentar SP do inimigo
                    if(inimigoSP<inimigoSPMAX){
                        printf("\n");
                        printf("Cracken recebeu +1 de SP \n");
                        inimigoSP=inimigoSP+1;
                        sleep(2);
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
                if(playerHP<=0){
                    printf("\n");
                    printf("VOCE MORREU!!!!!. \n");
                    printf("\n");
                    printf("1 - RECOMECAR \n");
                    scanf("%d",&escolhaMorte);

                    //Inicio escolha morte
                    if(escolhaMorte>=1){
                        carregarInfo=1;
                    }//FIM ESCOLHA MORTE//

                }//FIM DO FIM DE JOGO//

                //Inicio da morte inimigo
                if(inimigoHP<=0){
                    escolha=0;
                    subEscolha=0;
                    venceu=1;
                    batalha=0;
                    ouro=ouro+500;
                    experiencia=experiencia+50;
                }//Fim morte do inimigo
            }//---------------------------FIM DA BATALHA---------------------------------//

            //Começo pos batalha
            if(venceu==1){

                //começo mensagem de vitoria
                if(escolha==0){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Parabens! Voce venceu!\n\n");
                    printf("500 ouro recebido\n\n");
                    printf("50 XP recebida.\n\n");
                    printf("O que deseja fazer?\n\n");
                    printf("1-Comemorar em um bar\n");
                    printf("2-Visitar um ferreiro\n");
                    printf("3-Dormir\n");
                    printf("\n");

                    scanf("%d",&escolha);
                }//FIM COMEÇO MENSAGEM DE VITORIA

                //Inicio bar
                if(escolha==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce esta bebendo com seus companheiros, porem,\n");
                    printf("voce ve alguns homens peturbando a atendente\n\n");
                    printf("O que voce faz?\n");
                    printf("1-Ignora e pede mais uma cerveja\n");
                    printf("2-Faz uma cantada na atendente\n");
                    printf("3-Pede para os homens pararem\n");
                    printf("\n");

                    scanf("%d",&subEscolha);
                }//FIM CAMINHO ESCOLHA 1//

                //Inicio Sub escolha 1
                if(subEscolha==1 && escolha==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce bebe mais cerveja.\n\n");sleep(1);
                    printf("Voce esta tonto.\n\n");sleep(1);
                    printf("...\n\n");sleep(2);
                    printf("Voce acorda no meio da floresta.\n\n");sleep(1);
                    printf("Voce nao faz a menor ideia de como foi parar ali.\n\n");sleep(1);
                    printf("Voce enxerga tres caminhos para ir.\n");sleep(1);
                    escolherCaminho=1;
                }

                //Inicio escolher caminho
                if(escolherCaminho==1){
                    escolha=99;
                    subEscolha=99;
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Por qual caminho voce vai? \n\n");sleep(1);
                    printf("1 - Direita\n");
                    printf("2 - Reto\n");
                    printf("3 - Esquerda\n");
                    printf("\n");
                    scanf("%d", &caminhoEscolha);
                }//fim escolher caminho

                //inicio caminho escolha 1
                if(caminhoEscolha==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce enxerga dois caminhos para ir.\n\n");sleep(1);
                    printf("Por qual caminho voce vai? \n\n");sleep(1);
                    printf("1 - Direita\n");
                    printf("2 - Esquerda\n\n");
                    scanf("%d", &caminhoEscolhaDireita);
                }

                //inicio caminho escolha direita
                if(caminhoEscolhaDireita==1 && caminhoEscolha==1){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce encontra um bau.\n\n");sleep(1);
                    printf("Voce encontrou CAPACETE DA FLORESTA(LEVEL 2).\n\n");sleep(1);
                    printf("Voce chega ao fim da trilha.\n\n");sleep(1);
                    printf("Voce volta para o inicio da trilha. \n\n");sleep(2);
                    capacete=2;
                    playerDef=playerDef+1;
                    caminhoEscolha=0;
                }//FIM CAMINHO ESCOLHA DIREITA//

                if(subEscolha==2){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce canta a garconete\n");
                    printf("Ela te da um tapa\n");
                    printf("Os homens comecam a rir de voce e vao embora.\n");
                    printf("Voce e expulso do bar pelos segurancas que estavam vindo.\n");
                    printf("Voce recebe uma penalizacao do uso de magia por estar com o coracao partido\n");
                    printf("Voce vai para casa dormir...triste. \n");
                    printf("\n");
                    venceu=0;
                }

                  if(subEscolha==3){
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("Voce pede para os homens pararem\n");
                    printf("O lider do grupo te bate\n");
                    printf("Voces comecam a brigar\n");
                    printf("\n");
                    venceu=0;
                }



            }//FIM POS BATALHA//

        }//FIM COMECAR JOGO//

    }//FIM LOOP DO JOGO//

return 0;
}//FIM DA FUNÇÃO PRINCIPAL



