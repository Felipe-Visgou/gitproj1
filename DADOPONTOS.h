/***************************************************************************
*
*  $MCD M�dulo de defini��o: M�dulo Dado
*
*  Arquivo gerado:              DadoPontos.H
*  Letras identificadoras:      DADPnt
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: avs - Arndt von Staa
*			fvc - Felipe Vieira C�rtes
*			tbm - T�ssio Borges de Miranda
*			db  - Daniela Braz�o

*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*       1.00   tbm   05/09/2015 In�cio do desenvolvimento
*
*  $ED Descri��o do m�dulo
*     Este m�dulo implementa um conjunto simples de fun��es para verificar o
*	  valor atual da partida e qual jogador pode utilizar o dado.
*
***************************************************************************/
 
#if defined( DADOPONTOS_OWN )
   #define DADOPONTOS_EXT
#else
   #define DADOPONTOS_EXT extern
#endif

#include "LISTA.H"

typedef struct tgDadoPontos * tppDadoPontos;
/***********************************************************************
*
*  $TC Tipo de dados: MAT Condicoes de retorno
*
*
***********************************************************************/

   typedef enum {

         DADPnt_CondRetOK = 0 ,
               /* Executou correto */

         DADPnt_CondRetErro = 1 ,
               /* Estrutura do DadoPontos est� errada */

         DADPnt_CondRetMatrizNaoExiste = 2 ,
               /* DadoPontos n�o existe */

         DADPnt_CondRetFaltouMemoria = 3
               /* Faltou mem�ria ao alocar dados */

   } DADPnt_tpCondRet ;


/***********************************************************************
*
*  $FC Fun��o: DADPnt Criar Dado de Pontos
*
*  $ED Descri��o da fun��o
*	  Cria um novo dado de pontos
*  $FV Valor retonado
*     DADPnt_CondRetOK
*     DADPnt_CondRetFaltouMemoria
*
***********************************************************************/

DADPnt_tpCondRet DADPtn_CriarDado(tppDadoPontos * Dado)

/***************************************************************************
*
*  $FC Fun��o: DADPnt Dobrar Dado de Pontos
*
*  $ED Descri��o da fun��o
*	  Dobra o valor da partida
*  $FV Valor retonado
*     DADPnt_CondRetOK
*     DADPnt_CondRetFaltouMemoria
*
***********************************************************************/

DADPnt_tpCondRet DADPtn_DobrarDado(tppDadoPontos Dado);

/***************************************************************************
*
*  $FC Fun��o: DADPnt Mudar "Dono" do Dado de Pontos
*
*  $ED Descri��o da fun��o
*	  Muda o jogador que possa usar o Dado de Pontos
*  $FV Valor retonado
*     DADPnt_CondRetOK
*     DADPnt_CondRetFaltouMemoria
*
***********************************************************************/

DADPnt_tpCondRet DADPtn_MudDono(tppDadoPontos Dado);

/***************************************************************************
*
*  $FC Fun��o: DADPnt Destroi o Dado de Pontos
*
*  $ED Descri��o da fun��o
*	  Destroi o Dado de Pontos
*  $FV Valor retonado
*     DADPnt_CondRetOK
*     DADPnt_CondRetFaltouMemoria
*
***********************************************************************/

DADPnt_tpCondRet DADPtn_DestruirDado(tppDadoPontos Dado);

#undef DADOPONTOS_EXT

/*************** Fim do m�dulo de defini��o: M�dulo DadoPontos ****************/