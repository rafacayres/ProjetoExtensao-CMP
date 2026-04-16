#include <stdio.h>
#include <stdlib.h>

int main()
{//*********************************** Estoque atual ***************************************************************
    struct estoque_atual {
        int inteiro [27];
        float real [0];
    };
/* estoque_atual.inteiro[0]	Estoque atual de Lata guaraná Antárctica 600 ml
estoque_atual.inteiro[1]	Estoque atual de Lata Coca Cola 600 ml
estoque_atual.inteiro[2]	Estoque atual de Lata Coca Cola zero 600 ml
estoque_atual.inteiro[3]	Estoque atual de Garrafa água sem gás 500 ml
estoque_atual.inteiro[4]	Estoque atual de Garrafa Coca Cola 2 L
estoque_atual.inteiro[5]	Estoque atual de Garrafa suco Prats 300 ml
estoque_atual.inteiro[6]	Estoque atual de Pacote batata palito Bem Brasil 2 kg
estoque_atual.inteiro[7]	Estoque atual de Pacote massa de pastel 1 kg
estoque_atual.inteiro[8]	Estoque atual de Pacote milho de pipoca Yoki 400 g
estoque_atual.inteiro[9]	Estoque atual de Pão de cachorro quente
estoque_atual.inteiro[10]	Estoque atual de Pacote salsicha Perdigão 500 g
estoque_atual.inteiro[11]	Estoque atual de Ketchup Heinz 567 g
estoque_atual.inteiro[12]	Estoque atual de Pacote açúcar cristal Colombo 5 kg
estoque_atual.inteiro[13]	Estoque atual de Pacote sal Lebre 1 kg
estoque_atual.inteiro[14]	Estoque atual de Garrafa óleo soja Soya 900 ml
estoque_atual.inteiro[15]	Estoque atual de Pacote molho tomate Heinz 300 g
estoque_atual.inteiro[16]	Estoque atual de Pacote copo descartável 300 ml (100u)
estoque_atual.inteiro[17]	Estoque atual de Pacote prato descartável 15 cm (10u)
estoque_atual.inteiro[18]	Estoque atual de Pacote colher sobremesa descartável (50u)
estoque_atual.inteiro[19]	Estoque atual de Pacote garfo sobremesa descartável (50u)
estoque_atual.inteiro[20]	Estoque atual de Pacote guardanapo papel 19,5x20 (100u)
estoque_atual.inteiro[21]	Estoque atual de Pacote saco plástico cachorro quente (100u)
estoque_atual.inteiro[22]	Estoque atual de Pacote pipoca 11x13 (100u)
estoque_atual.inteiro[23]	Estoque atual de Garrafa detergente Ypê 500 ml
estoque_atual.inteiro[24]	Estoque atual de Pacote esponja scotch brite (4u)
estoque_atual.inteiro[25]	Estoque atual de Pacote papel toalha Snob (2u)
estoque_atual.inteiro[26]	Estoque atual de Pacote saco lixo 50L (100u)
estoque_atual.inteiro[27]	Estoque atual de Botijão gás cozinha 45 kg
estoque_atual.real[0]	Estoque atual de Frango inteiro para assar */

//*********************************** Custo unitario ***************************************************************

    float custo_unitario[28];

/* custo_unitario[0]	Custo unitário de Lata guaraná Antárctica 600 ml
custo_unitario[1]	Custo unitário de Lata Coca Cola 600 ml
custo_unitario[2]	Custo unitário de Lata Coca Cola zero 600 ml
custo_unitario[3]	Custo unitário de Garrafa água sem gás 500 ml
custo_unitario[4]	Custo unitário de Garrafa Coca Cola 2 L
custo_unitario[5]	Custo unitário de Garrafa suco Prats 300 ml
custo_unitario[6]	Custo unitário de Pacote batata palito Bem Brasil 2 kg
custo_unitario[7]	Custo unitário de Pacote massa de pastel 1 kg
custo_unitario[8]	Custo unitário de Pacote milho de pipoca Yoki 400 g
custo_unitario[9]	Custo unitário de Pão de cachorro quente
custo_unitario[10]	Custo unitário de Pacote salsicha Perdigão 500 g
custo_unitario[11]	Custo unitário de Ketchup Heinz 567 g
custo_unitario[12]	Custo unitário de Pacote açúcar cristal Colombo 5 kg
custo_unitario[13]	Custo unitário de Pacote sal Lebre 1 kg
custo_unitario[14]	Custo unitário de Garrafa óleo soja Soya 900 ml
custo_unitario[15]	Custo unitário de Pacote molho tomate Heinz 300 g
custo_unitario[16]	Custo unitário de Pacote copo descartável 300 ml (100u)
custo_unitario[17]	Custo unitário de Pacote prato descartável 15 cm (10u)
custo_unitario[18]	Custo unitário de Pacote colher sobremesa descartável (50u)
custo_unitario[19]	Custo unitário de Pacote garfo sobremesa descartável (50u)
custo_unitario[20]	Custo unitário de Pacote guardanapo papel 19,5x20 (100u)
custo_unitario[21]	Custo unitário de Pacote saco plástico cachorro quente (100u)
custo_unitario[22]	Custo unitário de Pacote pipoca 11x13 (100u)
custo_unitario[23]	Custo unitário de Garrafa detergente Ypê 500 ml
custo_unitario[24]	Custo unitário de Pacote esponja scotch brite (4u)
custo_unitario[25]	Custo unitário de Pacote papel toalha Snob (2u)
custo_unitario[26]	Custo unitário de Pacote saco lixo 50L (100u)
custo_unitario[27]	Custo unitário de Botijão gás cozinha 45 kg
custo_unitario[28]	Custo unitário de Frango inteiro para assar */

//*********************************** Entrada estoque ***************************************************************

    struct entrada_estoque {
            int inteiro [27];
            float real [0];
        };

/*entrada_estoque.inteiro[0]	Entrada estoque de Lata guaraná Antárctica 600 ml
entrada_estoque.inteiro[1]	Entrada estoque de Lata Coca Cola 600 ml
entrada_estoque.inteiro[2]	Entrada estoque de Lata Coca Cola zero 600 ml
entrada_estoque.inteiro[3]	Entrada estoque de Garrafa água sem gás 500 ml
entrada_estoque.inteiro[4]	Entrada estoque de Garrafa Coca Cola 2 L
entrada_estoque.inteiro[5]	Entrada estoque de Garrafa suco Prats 300 ml
entrada_estoque.inteiro[6]	Entrada estoque de Pacote batata palito Bem Brasil 2 kg
entrada_estoque.inteiro[7]	Entrada estoque de Pacote massa de pastel 1 kg
entrada_estoque.inteiro[8]	Entrada estoque de Pacote milho de pipoca Yoki 400 g
entrada_estoque.inteiro[9]	Entrada estoque de Pão de cachorro quente
entrada_estoque.inteiro[10]	Entrada estoque de Pacote salsicha Perdigão 500 g
entrada_estoque.inteiro[11]	Entrada estoque de Ketchup Heinz 567 g
entrada_estoque.inteiro[12]	Entrada estoque de Pacote açúcar cristal Colombo 5 kg
entrada_estoque.inteiro[13]	Entrada estoque de Pacote sal Lebre 1 kg
entrada_estoque.inteiro[14]	Entrada estoque de Garrafa óleo soja Soya 900 ml
entrada_estoque.inteiro[15]	Entrada estoque de Pacote molho tomate Heinz 300 g
entrada_estoque.inteiro[16]	Entrada estoque de Pacote copo descartável 300 ml (100u)
entrada_estoque.inteiro[17]	Entrada estoque de Pacote prato descartável 15 cm (10u)
entrada_estoque.inteiro[18]	Entrada estoque de Pacote colher sobremesa descartável (50u)
entrada_estoque.inteiro[19]	Entrada estoque de Pacote garfo sobremesa descartável (50u)
entrada_estoque.inteiro[20]	Entrada estoque de Pacote guardanapo papel 19,5x20 (100u)
entrada_estoque.inteiro[21]	Entrada estoque de Pacote saco plástico cachorro quente (100u)
entrada_estoque.inteiro[22]	Entrada estoque de Pacote pipoca 11x13 (100u)
entrada_estoque.inteiro[23]	Entrada estoque de Garrafa detergente Ypê 500 ml
entrada_estoque.inteiro[24]	Entrada estoque de Pacote esponja scotch brite (4u)
entrada_estoque.inteiro[25]	Entrada estoque de Pacote papel toalha Snob (2u)
entrada_estoque.inteiro[26]	Entrada estoque de Pacote saco lixo 50L (100u)
entrada_estoque.inteiro[27]	Entrada estoque de Botijão gás cozinha 45 kg
entrada_estoque.real[0]	Entrada estoque de Frango inteiro para assar*/

//*********************************** Saida estoque ***************************************************************

    struct saida_estoque {
            int inteiro [27];
            float real [0];
        };

/*saida_estoque.inteiro[0]	Saida estoque de Lata guaraná Antárctica 600 ml
saida_estoque.inteiro[1]	Saida estoque de Lata Coca Cola 600 ml
saida_estoque.inteiro[2]	Saida estoque de Lata Coca Cola zero 600 ml
saida_estoque.inteiro[3]	Saida estoque de Garrafa água sem gás 500 ml
saida_estoque.inteiro[4]	Saida estoque de Garrafa Coca Cola 2 L
saida_estoque.inteiro[5]	Saida estoque de Garrafa suco Prats 300 ml
saida_estoque.inteiro[6]	Saida estoque de Pacote batata palito Bem Brasil 2 kg
saida_estoque.inteiro[7]	Saida estoque de Pacote massa de pastel 1 kg
saida_estoque.inteiro[8]	Saida estoque de Pacote milho de pipoca Yoki 400 g
saida_estoque.inteiro[9]	Saida estoque de Pão de cachorro quente
saida_estoque.inteiro[10]	Saida estoque de Pacote salsicha Perdigão 500 g
saida_estoque.inteiro[11]	Saida estoque de Ketchup Heinz 567 g
saida_estoque.inteiro[12]	Saida estoque de Pacote açúcar cristal Colombo 5 kg
saida_estoque.inteiro[13]	Saida estoque de Pacote sal Lebre 1 kg
saida_estoque.inteiro[14]	Saida estoque de Garrafa óleo soja Soya 900 ml
saida_estoque.inteiro[15]	Saida estoque de Pacote molho tomate Heinz 300 g
saida_estoque.inteiro[16]	Saida estoque de Pacote copo descartável 300 ml (100u)
saida_estoque.inteiro[17]	Saida estoque de Pacote prato descartável 15 cm (10u)
saida_estoque.inteiro[18]	Saida estoque de Pacote colher sobremesa descartável (50u)
saida_estoque.inteiro[19]	Saida estoque de Pacote garfo sobremesa descartável (50u)
saida_estoque.inteiro[20]	Saida estoque de Pacote guardanapo papel 19,5x20 (100u)
saida_estoque.inteiro[21]	Saida estoque de Pacote saco plástico cachorro quente (100u)
saida_estoque.inteiro[22]	Saida estoque de Pacote pipoca 11x13 (100u)
saida_estoque.inteiro[23]	Saida estoque de Garrafa detergente Ypê 500 ml
saida_estoque.inteiro[24]	Saida estoque de Pacote esponja scotch brite (4u)
saida_estoque.inteiro[25]	Saida estoque de Pacote papel toalha Snob (2u)
saida_estoque.inteiro[26]	Saida estoque de Pacote saco lixo 50L (100u)
saida_estoque.inteiro[27]	Saida estoque de Botijão gás cozinha 45 kg
saida_estoque.real[0]	Saida estoque de Frango inteiro para assar*/

//*********************************** Estoque minimo ***************************************************************

    struct estoque_minimo {
            int inteiro [27];
            float real [0];
        };

/*estoque_minimo.inteiro[0]	Valor referência estoque mínimo de Lata guaraná Antárctica 600 ml
estoque_minimo.inteiro[1]	Valor referência estoque mínimo de Lata Coca Cola 600 ml
estoque_minimo.inteiro[2]	Valor referência estoque mínimo de Lata Coca Cola zero 600 ml
estoque_minimo.inteiro[3]	Valor referência estoque mínimo de Garrafa água sem gás 500 ml
estoque_minimo.inteiro[4]	Valor referência estoque mínimo de Garrafa Coca Cola 2 L
estoque_minimo.inteiro[5]	Valor referência estoque mínimo de Garrafa suco Prats 300 ml
estoque_minimo.inteiro[6]	Valor referência estoque mínimo de Pacote batata palito Bem Brasil 2 kg
estoque_minimo.inteiro[7]	Valor referência estoque mínimo de Pacote massa de pastel 1 kg
estoque_minimo.inteiro[8]	Valor referência estoque mínimo de Pacote milho de pipoca Yoki 400 g
estoque_minimo.inteiro[9]	Valor referência estoque mínimo de Pão de cachorro quente
estoque_minimo.inteiro[10]	Valor referência estoque mínimo de Pacote salsicha Perdigão 500 g
estoque_minimo.inteiro[11]	Valor referência estoque mínimo de Ketchup Heinz 567 g
estoque_minimo.inteiro[12]	Valor referência estoque mínimo de Pacote açúcar cristal Colombo 5 kg
estoque_minimo.inteiro[13]	Valor referência estoque mínimo de Pacote sal Lebre 1 kg
estoque_minimo.inteiro[14]	Valor referência estoque mínimo de Garrafa óleo soja Soya 900 ml
estoque_minimo.inteiro[15]	Valor referência estoque mínimo de Pacote molho tomate Heinz 300 g
estoque_minimo.inteiro[16]	Valor referência estoque mínimo de Pacote copo descartável 300 ml (100u)
estoque_minimo.inteiro[17]	Valor referência estoque mínimo de Pacote prato descartável 15 cm (10u)
estoque_minimo.inteiro[18]	Valor referência estoque mínimo de Pacote colher sobremesa descartável (50u)
estoque_minimo.inteiro[19]	Valor referência estoque mínimo de Pacote garfo sobremesa descartável (50u)
estoque_minimo.inteiro[20]	Valor referência estoque mínimo de Pacote guardanapo papel 19,5x20 (100u)
estoque_minimo.inteiro[21]	Valor referência estoque mínimo de Pacote saco plástico cachorro quente (100u)
estoque_minimo.inteiro[22]	Valor referência estoque mínimo de Pacote pipoca 11x13 (100u)
estoque_minimo.inteiro[23]	Valor referência estoque mínimo de Garrafa detergente Ypê 500 ml
estoque_minimo.inteiro[24]	Valor referência estoque mínimo de Pacote esponja scotch brite (4u)
estoque_minimo.inteiro[25]	Valor referência estoque mínimo de Pacote papel toalha Snob (2u)
estoque_minimo.inteiro[26]	Valor referência estoque mínimo de Pacote saco lixo 50L (100u)
estoque_minimo.inteiro[27]	Valor referência estoque mínimo de Botijão gás cozinha 45 kg
estoque_minimo.real[0]	Valor referência estoque mínimo de Frango inteiro para assar*/

//*********************************** Saída total ***************************************************************

    struct saida_total {
            int inteiro [27];
            float real [0];
        };

/*saida_total.inteiro[0]	Saída total estoque de Lata guaraná Antárctica 600 ml
saida_total.inteiro[1]	Saída total estoque de Lata Coca Cola 600 ml
saida_total.inteiro[2]	Saída total estoque de Lata Coca Cola zero 600 ml
saida_total.inteiro[3]	Saída total estoque de Garrafa água sem gás 500 ml
saida_total.inteiro[4]	Saída total estoque de Garrafa Coca Cola 2 L
saida_total.inteiro[5]	Saída total estoque de Garrafa suco Prats 300 ml
saida_total.inteiro[6]	Saída total estoque de Pacote batata palito Bem Brasil 2 kg
saida_total.inteiro[7]	Saída total estoque de Pacote massa de pastel 1 kg
saida_total.inteiro[8]	Saída total estoque de Pacote milho de pipoca Yoki 400 g
saida_total.inteiro[9]	Saída total estoque de Pão de cachorro quente
saida_total.inteiro[10]	Saída total estoque de Pacote salsicha Perdigão 500 g
saida_total.inteiro[11]	Saída total estoque de Ketchup Heinz 567 g
saida_total.inteiro[12]	Saída total estoque de Pacote açúcar cristal Colombo 5 kg
saida_total.inteiro[13]	Saída total estoque de Pacote sal Lebre 1 kg
saida_total.inteiro[14]	Saída total estoque de Garrafa óleo soja Soya 900 ml
saida_total.inteiro[15]	Saída total estoque de Pacote molho tomate Heinz 300 g
saida_total.inteiro[16]	Saída total estoque de Pacote copo descartável 300 ml (100u)
saida_total.inteiro[17]	Saída total estoque de Pacote prato descartável 15 cm (10u)
saida_total.inteiro[18]	Saída total estoque de Pacote colher sobremesa descartável (50u)
saida_total.inteiro[19]	Saída total estoque de Pacote garfo sobremesa descartável (50u)
saida_total.inteiro[20]	Saída total estoque de Pacote guardanapo papel 19,5x20 (100u)
saida_total.inteiro[21]	Saída total estoque de Pacote saco plástico cachorro quente (100u)
saida_total.inteiro[22]	Saída total estoque de Pacote pipoca 11x13 (100u)
saida_total.inteiro[23]	Saída total estoque de Garrafa detergente Ypê 500 ml
saida_total.inteiro[24]	Saída total estoque de Pacote esponja scotch brite (4u)
saida_total.inteiro[25]	Saída total estoque de Pacote papel toalha Snob (2u)
saida_total.inteiro[26]	Saída total estoque de Pacote saco lixo 50L (100u)
saida_total.inteiro[27]	Saída total estoque de Botijão gás cozinha 45 kg
saida_total.real[0]	Saída total estoque de Frango inteiro para assar*/

//*********************************** Custo menor ***************************************************************

    float custo_menor[28];

/*custo_menor[0]	Custo menor de Lata guaraná Antárctica 600 ml
custo_menor[1]	Custo menor de Lata Coca Cola 600 ml
custo_menor[2]	Custo menor de Lata Coca Cola zero 600 ml
custo_menor[3]	Custo menor de Garrafa água sem gás 500 ml
custo_menor[4]	Custo menor de Garrafa Coca Cola 2 L
custo_menor[5]	Custo menor de Garrafa suco Prats 300 ml
custo_menor[6]	Custo menor de Pacote batata palito Bem Brasil 2 kg
custo_menor[7]	Custo menor de Pacote massa de pastel 1 kg
custo_menor[8]	Custo menor de Pacote milho de pipoca Yoki 400 g
custo_menor[9]	Custo menor de Pão de cachorro quente
custo_menor[10]	Custo menor de Pacote salsicha Perdigão 500 g
custo_menor[11]	Custo menor de Ketchup Heinz 567 g
custo_menor[12]	Custo menor de Pacote açúcar cristal Colombo 5 kg
custo_menor[13]	Custo menor de Pacote sal Lebre 1 kg
custo_menor[14]	Custo menor de Garrafa óleo soja Soya 900 ml
custo_menor[15]	Custo menor de Pacote molho tomate Heinz 300 g
custo_menor[16]	Custo menor de Pacote copo descartável 300 ml (100u)
custo_menor[17]	Custo menor de Pacote prato descartável 15 cm (10u)
custo_menor[18]	Custo menor de Pacote colher sobremesa descartável (50u)
custo_menor[19]	Custo menor de Pacote garfo sobremesa descartável (50u)
custo_menor[20]	Custo menor de Pacote guardanapo papel 19,5x20 (100u)
custo_menor[21]	Custo menor de Pacote saco plástico cachorro quente (100u)
custo_menor[22]	Custo menor de Pacote pipoca 11x13 (100u)
custo_menor[23]	Custo menor de Garrafa detergente Ypê 500 ml
custo_menor[24]	Custo menor de Pacote esponja scotch brite (4u)
custo_menor[25]	Custo menor de Pacote papel toalha Snob (2u)
custo_menor[26]	Custo menor de Pacote saco lixo 50L (100u)
custo_menor[27]	Custo menor de Botijão gás cozinha 45 kg
custo_menor[28]	Custo menor de Frango inteiro para assar*/


//*********************************** Custo maior ***************************************************************

    float custo_maior[28];

/*custo_maior[0]	Custo maior de Lata guaraná Antárctica 600 ml
custo_maior[1]	Custo maior de Lata Coca Cola 600 ml
custo_maior[2]	Custo maior de Lata Coca Cola zero 600 ml
custo_maior[3]	Custo maior de Garrafa água sem gás 500 ml
custo_maior[4]	Custo maior de Garrafa Coca Cola 2 L
custo_maior[5]	Custo maior de Garrafa suco Prats 300 ml
custo_maior[6]	Custo maior de Pacote batata palito Bem Brasil 2 kg
custo_maior[7]	Custo maior de Pacote massa de pastel 1 kg
custo_maior[8]	Custo maior de Pacote milho de pipoca Yoki 400 g
custo_maior[9]	Custo maior de Pão de cachorro quente
custo_maior[10]	Custo maior de Pacote salsicha Perdigão 500 g
custo_maior[11]	Custo maior de Ketchup Heinz 567 g
custo_maior[12]	Custo maior de Pacote açúcar cristal Colombo 5 kg
custo_maior[13]	Custo maior de Pacote sal Lebre 1 kg
custo_maior[14]	Custo maior de Garrafa óleo soja Soya 900 ml
custo_maior[15]	Custo maior de Pacote molho tomate Heinz 300 g
custo_maior[16]	Custo maior de Pacote copo descartável 300 ml (100u)
custo_maior[17]	Custo maior de Pacote prato descartável 15 cm (10u)
custo_maior[18]	Custo maior de Pacote colher sobremesa descartável (50u)
custo_maior[19]	Custo maior de Pacote garfo sobremesa descartável (50u)
custo_maior[20]	Custo maior de Pacote guardanapo papel 19,5x20 (100u)
custo_maior[21]	Custo maior de Pacote saco plástico cachorro quente (100u)
custo_maior[22]	Custo maior de Pacote pipoca 11x13 (100u)
custo_maior[23]	Custo maior de Garrafa detergente Ypê 500 ml
custo_maior[24]	Custo maior de Pacote esponja scotch brite (4u)
custo_maior[25]	Custo maior de Pacote papel toalha Snob (2u)
custo_maior[26]	Custo maior de Pacote saco lixo 50L (100u)
custo_maior[27]	Custo maior de Botijão gás cozinha 45 kg
custo_maior[28]	Custo maior de Frango inteiro para assar*/




    }