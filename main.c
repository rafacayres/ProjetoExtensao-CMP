#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
int codigo; //Código para seleção do Menu

int estoque_guarana_600ml;	// Estoque atual de Lata guaraná Antárctica 600 ml
int estoque_coca_600ml;	// Estoque atual de Lata Coca Cola 600 ml
int estoque_coca_zero_600ml;	// Estoque atual de Lata Coca Cola zero 600 ml
int estoque_agua_500ml;	// Estoque atual de Garrafa água sem gás 500 ml
int estoque_coca_2l;	// Estoque atual de Garrafa Coca Cola 2 L
int estoque_suco_prats_300ml;	// Estoque atual de Garrafa suco Prats 300 ml
int estoque_batata_palito_2kg;	// Estoque atual de Pacote batata palito Bem Brasil 2 kg
float estoque_frango_inteiro;	// Estoque atual de Frango inteiro para assar
int estoque_massa_pastel_1kg;	// Estoque atual de Pacote massa de pastel 1 kg
int estoque_milho_pipoca_400g;	// Estoque atual de Pacote milho de pipoca Yoki 400 g
int estoque_pao_cachorro_quente;	// Estoque atual de Pão de cachorro quente
int estoque_salsicha_500g;	// Estoque atual de Pacote salsicha Perdigão 500 g
int estoque_ketchup_567g;	// Estoque atual de Ketchup Heinz 567 g
int estoque_acucar_5kg;	// Estoque atual de Pacote açúcar cristal Colombo 5 kg
int estoque_sal_1kg;	// Estoque atual de Pacote sal Lebre 1 kg
int estoque_oleo_soja_900ml;	// Estoque atual de Garrafa óleo soja Soya 900 ml
int estoque_molho_tomate_300g;	// Estoque atual de Pacote molho tomate Heinz 300 g
int estoque_copo_descartavel_300ml;	// Estoque atual de Pacote copo descartável 300 ml (100u)
int estoque_prato_descartavel_15cm;	// Estoque atual de Pacote prato descartável 15 cm (10u)
int estoque_colher_descartavel;	// Estoque atual de Pacote colher sobremesa descartável (50u)
int estoque_garfo_descartavel;	// Estoque atual de Pacote garfo sobremesa descartável (50u)
int estoque_guardanapo;	// Estoque atual de Pacote guardanapo papel 19,5x20 (100u)
int estoque_saco_cachorro_quente;	// Estoque atual de Pacote saco plástico cachorro quente (100u)
int estoque_saco_pipoca;	// Estoque atual de Pacote pipoca 11x13 (100u)
int estoque_detergente_500ml;	// Estoque atual de Garrafa detergente Ypê 500 ml
int estoque_esponja;	// Estoque atual de Pacote esponja scotch brite (4u)
int estoque_papel_toalha;	// Estoque atual de Pacote papel toalha Snob (2u)
int estoque_saco_lixo_50l;	// Estoque atual de Pacote saco lixo 50L (100u)
int estoque_gas_45kg;	// Estoque atual de Botijão gás cozinha 45 kg

float custo_guarana_600ml;	// Custo unitário de Lata guaraná Antárctica 600 ml
float custo_coca_600ml;	// Custo unitário de Lata Coca Cola 600 ml
float custo_coca_zero_600ml;	// Custo unitário de Lata Coca Cola zero 600 ml
float custo_agua_500ml;	// Custo unitário de Garrafa água sem gás 500 ml
float custo_coca_2l;	// Custo unitário de Garrafa Coca Cola 2 L
float custo_suco_prats_300ml;	// Custo unitário de Garrafa suco Prats 300 ml
float custo_batata_palito_2kg;	// Custo unitário de Pacote batata palito Bem Brasil 2 kg
float custo_frango_inteiro;	// Custo unitário de Frango inteiro para assar
float custo_massa_pastel_1kg;	// Custo unitário de Pacote massa de pastel 1 kg
float custo_milho_pipoca_400g;	// Custo unitário de Pacote milho de pipoca Yoki 400 g
float custo_pao_cachorro_quente;	// Custo unitário de Pão de cachorro quente
float custo_salsicha_500g;	// Custo unitário de Pacote salsicha Perdigão 500 g
float custo_ketchup_567g;	// Custo unitário de Ketchup Heinz 567 g
float custo_acucar_5kg;	// Custo unitário de Pacote açúcar cristal Colombo 5 kg
float custo_sal_1kg;	// Custo unitário de Pacote sal Lebre 1 kg
float custo_oleo_soja_900ml;	// Custo unitário de Garrafa óleo soja Soya 900 ml
float custo_molho_tomate_300g;	// Custo unitário de Pacote molho tomate Heinz 300 g
float custo_copo_descartavel_300ml;	// Custo unitário de Pacote copo descartável 300 ml (100u)
float custo_prato_descartavel_15cm;	// Custo unitário de Pacote prato descartável 15 cm (10u)
float custo_colher_descartavel;	// Custo unitário de Pacote colher sobremesa descartável (50u)
float custo_garfo_descartavel;	// Custo unitário de Pacote garfo sobremesa descartável (50u)
float custo_guardanapo;	// Custo unitário de Pacote guardanapo papel 19,5x20 (100u)
float custo_saco_cachorro_quente;	// Custo unitário de Pacote saco plástico cachorro quente (100u)
float custo_saco_pipoca;	// Custo unitário de Pacote pipoca 11x13 (100u)
float custo_detergente_500ml;	// Custo unitário de Garrafa detergente Ypê 500 ml
float custo_esponja;	// Custo unitário de Pacote esponja scotch brite (4u)
float custo_papel_toalha;	// Custo unitário de Pacote papel toalha Snob (2u)
float custo_saco_lixo_50l;	// Custo unitário de Pacote saco lixo 50L (100u)
float custo_gas_45kg;	// Custo unitário de Botijão gás cozinha 45 kg

int entrada_guarana_600ml;	// Entrada estoque de Lata guaraná Antárctica 600 ml
int entrada_coca_600ml;	// Entrada estoque de Lata Coca Cola 600 ml
int entrada_coca_zero_600ml;	// Entrada estoque de Lata Coca Cola zero 600 ml
int entrada_agua_500ml;	// Entrada estoque de Garrafa água sem gás 500 ml
int entrada_coca_2l;	// Entrada estoque de Garrafa Coca Cola 2 L
int entrada_suco_prats_300ml;	// Entrada estoque de Garrafa suco Prats 300 ml
int entrada_batata_palito_2kg;	// Entrada estoque de Pacote batata palito Bem Brasil 2 kg
float entrada_frango_inteiro;	// Entrada estoque de Frango inteiro para assar
int entrada_massa_pastel_1kg;	// Entrada estoque de Pacote massa de pastel 1 kg
int entrada_milho_pipoca_400g;	// Entrada estoque de Pacote milho de pipoca Yoki 400 g
int entrada_pao_cachorro_quente;	// Entrada estoque de Pão de cachorro quente
int entrada_salsicha_500g;	// Entrada estoque de Pacote salsicha Perdigão 500 g
int entrada_ketchup_567g;	// Entrada estoque de Ketchup Heinz 567 g
int entrada_acucar_5kg;	// Entrada estoque de Pacote açúcar cristal Colombo 5 kg
int entrada_sal_1kg;	// Entrada estoque de Pacote sal Lebre 1 kg
int entrada_oleo_soja_900ml;	// Entrada estoque de Garrafa óleo soja Soya 900 ml
int entrada_molho_tomate_300g;	// Entrada estoque de Pacote molho tomate Heinz 300 g
int entrada_copo_descartavel_300ml;	// Entrada estoque de Pacote copo descartável 300 ml (100u)
int entrada_prato_descartavel_15cm;	// Entrada estoque de Pacote prato descartável 15 cm (10u)
int entrada_colher_descartavel;	// Entrada estoque de Pacote colher sobremesa descartável (50u)
int entrada_garfo_descartavel;	// Entrada estoque de Pacote garfo sobremesa descartável (50u)
int entrada_guardanapo;	// Entrada estoque de Pacote guardanapo papel 19,5x20 (100u)
int entrada_saco_cachorro_quente;	// Entrada estoque de Pacote saco plástico cachorro quente (100u)
int entrada_saco_pipoca;	// Entrada estoque de Pacote pipoca 11x13 (100u)
int entrada_detergente_500ml;	// Entrada estoque de Garrafa detergente Ypê 500 ml
int entrada_esponja;	// Entrada estoque de Pacote esponja scotch brite (4u)
int entrada_papel_toalha;	// Entrada estoque de Pacote papel toalha Snob (2u)
int entrada_saco_lixo_50l;	// Entrada estoque de Pacote saco lixo 50L (100u)
int entrada_gas_45kg;	// Entrada estoque de Botijão gás cozinha 45 kg

int saida_guarana_600ml;	// Saida estoque de Lata guaraná Antárctica 600 ml
int saida_coca_600ml;	// Saida estoque de Lata Coca Cola 600 ml
int saida_coca_zero_600ml;	// Saida estoque de Lata Coca Cola zero 600 ml
int saida_agua_500ml;	// Saida estoque de Garrafa água sem gás 500 ml
int saida_coca_2l;	// Saida estoque de Garrafa Coca Cola 2 L
int saida_suco_prats_300ml;	// Saida estoque de Garrafa suco Prats 300 ml
int saida_batata_palito_2kg;	// Saida estoque de Pacote batata palito Bem Brasil 2 kg
float saida_frango_inteiro;	// Saida estoque de Frango inteiro para assar
int saida_massa_pastel_1kg;	// Saida estoque de Pacote massa de pastel 1 kg
int saida_milho_pipoca_400g;	// Saida estoque de Pacote milho de pipoca Yoki 400 g
int saida_pao_cachorro_quente;	// Saida estoque de Pão de cachorro quente
int saida_salsicha_500g;	// Saida estoque de Pacote salsicha Perdigão 500 g
int saida_ketchup_567g;	// Saida estoque de Ketchup Heinz 567 g
int saida_acucar_5kg;	// Saida estoque de Pacote açúcar cristal Colombo 5 kg
int saida_sal_1kg;	// Saida estoque de Pacote sal Lebre 1 kg
int saida_oleo_soja_900ml;	// Saida estoque de Garrafa óleo soja Soya 900 ml
int saida_molho_tomate_300g;	// Saida estoque de Pacote molho tomate Heinz 300 g
int saida_copo_descartavel_300ml;	// Saida estoque de Pacote copo descartável 300 ml (100u)
int saida_prato_descartavel_15cm;	// Saida estoque de Pacote prato descartável 15 cm (10u)
int saida_colher_descartavel;	// Saida estoque de Pacote colher sobremesa descartável (50u)
int saida_garfo_descartavel;	// Saida estoque de Pacote garfo sobremesa descartável (50u)
int saida_guardanapo;	// Saida estoque de Pacote guardanapo papel 19,5x20 (100u)
int saida_saco_cachorro_quente;	// Saida estoque de Pacote saco plástico cachorro quente (100u)
int saida_saco_pipoca;	// Saida estoque de Pacote pipoca 11x13 (100u)
int saida_detergente_500ml;	// Saida estoque de Garrafa detergente Ypê 500 ml
int saida_esponja;	// Saida estoque de Pacote esponja scotch brite (4u)
int saida_papel_toalha;	// Saida estoque de Pacote papel toalha Snob (2u)
int saida_saco_lixo_50l;	// Saida estoque de Pacote saco lixo 50L (100u)
int saida_gas_45kg;	// Saida estoque de Botijão gás cozinha 45 kg

int minimo_guarana_600ml;	// Valor referência estoque mínimo de Lata guaraná Antárctica 600 ml
int minimo_coca_600ml;	// Valor referência estoque mínimo de Lata Coca Cola 600 ml
int minimo_coca_zero_600ml;	// Valor referência estoque mínimo de Lata Coca Cola zero 600 ml
int minimo_agua_500ml;	// Valor referência estoque mínimo de Garrafa água sem gás 500 ml
int minimo_coca_2l;	// Valor referência estoque mínimo de Garrafa Coca Cola 2 L
int minimo_suco_prats_300ml;	// Valor referência estoque mínimo de Garrafa suco Prats 300 ml
int minimo_batata_palito_2kg;	// Valor referência estoque mínimo de Pacote batata palito Bem Brasil 2 kg
float minimo_frango_inteiro;	// Valor referência estoque mínimo de Frango inteiro para assar
int minimo_massa_pastel_1kg;	// Valor referência estoque mínimo de Pacote massa de pastel 1 kg
int minimo_milho_pipoca_400g;	// Valor referência estoque mínimo de Pacote milho de pipoca Yoki 400 g
int minimo_pao_cachorro_quente;	// Valor referência estoque mínimo de Pão de cachorro quente
int minimo_salsicha_500g;	// Valor referência estoque mínimo de Pacote salsicha Perdigão 500 g
int minimo_ketchup_567g;	// Valor referência estoque mínimo de Ketchup Heinz 567 g
int minimo_acucar_5kg;	// Valor referência estoque mínimo de Pacote açúcar cristal Colombo 5 kg
int minimo_sal_1kg;	// Valor referência estoque mínimo de Pacote sal Lebre 1 kg
int minimo_oleo_soja_900ml;	// Valor referência estoque mínimo de Garrafa óleo soja Soya 900 ml
int minimo_molho_tomate_300g;	// Valor referência estoque mínimo de Pacote molho tomate Heinz 300 g
int minimo_copo_descartavel_300ml;	// Valor referência estoque mínimo de Pacote copo descartável 300 ml (100u)
int minimo_prato_descartavel_15cm;	// Valor referência estoque mínimo de Pacote prato descartável 15 cm (10u)
int minimo_colher_descartavel;	// Valor referência estoque mínimo de Pacote colher sobremesa descartável (50u)
int minimo_garfo_descartavel;	// Valor referência estoque mínimo de Pacote garfo sobremesa descartável (50u)
int minimo_guardanapo;	// Valor referência estoque mínimo de Pacote guardanapo papel 19,5x20 (100u)
int minimo_saco_cachorro_quente;	// Valor referência estoque mínimo de Pacote saco plástico cachorro quente (100u)
int minimo_saco_pipoca;	// Valor referência estoque mínimo de Pacote pipoca 11x13 (100u)
int minimo_detergente_500ml;	// Valor referência estoque mínimo de Garrafa detergente Ypê 500 ml
int minimo_esponja;	// Valor referência estoque mínimo de Pacote esponja scotch brite (4u)
int minimo_papel_toalha;	// Valor referência estoque mínimo de Pacote papel toalha Snob (2u)
int minimo_saco_lixo_50l;	// Valor referência estoque mínimo de Pacote saco lixo 50L (100u)
int minimo_gas_45kg;	// Valor referência estoque mínimo de Botijão gás cozinha 45 kg

int saida_total_guarana_600ml;	// Saída total estoque de Lata guaraná Antárctica 600 ml
int saida_total_coca_600ml;	// Saída total estoque de Lata Coca Cola 600 ml
int saida_total_coca_zero_600ml;	// Saída total estoque de Lata Coca Cola zero 600 ml
int saida_total_agua_500ml;	// Saída total estoque de Garrafa água sem gás 500 ml
int saida_total_coca_2l;	// Saída total estoque de Garrafa Coca Cola 2 L
int saida_total_suco_prats_300ml;	// Saída total estoque de Garrafa suco Prats 300 ml
int saida_total_batata_palito_2kg;	// Saída total estoque de Pacote batata palito Bem Brasil 2 kg
float saida_total_frango_inteiro;	// Saída total estoque de Frango inteiro para assar
int saida_total_massa_pastel_1kg;	// Saída total estoque de Pacote massa de pastel 1 kg
int saida_total_milho_pipoca_400g;	// Saída total estoque de Pacote milho de pipoca Yoki 400 g
int saida_total_pao_cachorro_quente;	// Saída total estoque de Pão de cachorro quente
int saida_total_salsicha_500g;	// Saída total estoque de Pacote salsicha Perdigão 500 g
int saida_total_ketchup_567g;	// Saída total estoque de Ketchup Heinz 567 g
int saida_total_acucar_5kg;	// Saída total estoque de Pacote açúcar cristal Colombo 5 kg
int saida_total_sal_1kg;	// Saída total estoque de Pacote sal Lebre 1 kg
int saida_total_oleo_soja_900ml;	// Saída total estoque de Garrafa óleo soja Soya 900 ml
int saida_total_molho_tomate_300g;	// Saída total estoque de Pacote molho tomate Heinz 300 g
int saida_total_copo_descartavel_300ml;	// Saída total estoque de Pacote copo descartável 300 ml (100u)
int saida_total_prato_descartavel_15cm;	// Saída total estoque de Pacote prato descartável 15 cm (10u)
int saida_total_colher_descartavel;	// Saída total estoque de Pacote colher sobremesa descartável (50u)
int saida_total_garfo_descartavel;	// Saída total estoque de Pacote garfo sobremesa descartável (50u)
int saida_total_guardanapo;	// Saída total estoque de Pacote guardanapo papel 19,5x20 (100u)
int saida_total_saco_cachorro_quente;	// Saída total estoque de Pacote saco plástico cachorro quente (100u)
int saida_total_saco_pipoca;	// Saída total estoque de Pacote pipoca 11x13 (100u)
int saida_total_detergente_500ml;	// Saída total estoque de Garrafa detergente Ypê 500 ml
int saida_total_esponja;	// Saída total estoque de Pacote esponja scotch brite (4u)
int saida_total_papel_toalha;	// Saída total estoque de Pacote papel toalha Snob (2u)
int saida_total_saco_lixo_50l;	// Saída total estoque de Pacote saco lixo 50L (100u)
int saida_total_gas_45kg;	// Saída total estoque de Botijão gás cozinha 45 kg

float custo_menor_guarana_600ml;	// Custo menor de Lata guaraná Antárctica 600 ml
float custo_menor_coca_600ml;	// Custo menor de Lata Coca Cola 600 ml
float custo_menor_coca_zero_600ml;	// Custo menor de Lata Coca Cola zero 600 ml
float custo_menor_agua_500ml;	// Custo menor de Garrafa água sem gás 500 ml
float custo_menor_coca_2l;	// Custo menor de Garrafa Coca Cola 2 L
float custo_menor_suco_prats_300ml;	// Custo menor de Garrafa suco Prats 300 ml
float custo_menor_batata_palito_2kg;	// Custo menor de Pacote batata palito Bem Brasil 2 kg
float custo_menor_frango_inteiro;	// Custo menor de Frango inteiro para assar
float custo_menor_massa_pastel_1kg;	// Custo menor de Pacote massa de pastel 1 kg
float custo_menor_milho_pipoca_400g;	// Custo menor de Pacote milho de pipoca Yoki 400 g
float custo_menor_pao_cachorro_quente;	// Custo menor de Pão de cachorro quente
float custo_menor_salsicha_500g;	// Custo menor de Pacote salsicha Perdigão 500 g
float custo_menor_ketchup_567g;	// Custo menor de Ketchup Heinz 567 g
float custo_menor_acucar_5kg;	// Custo menor de Pacote açúcar cristal Colombo 5 kg
float custo_menor_sal_1kg;	// Custo menor de Pacote sal Lebre 1 kg
float custo_menor_oleo_soja_900ml;	// Custo menor de Garrafa óleo soja Soya 900 ml
float custo_menor_molho_tomate_300g;	// Custo menor de Pacote molho tomate Heinz 300 g
float custo_menor_copo_descartavel_300ml;	// Custo menor de Pacote copo descartável 300 ml (100u)
float custo_menor_prato_descartavel_15cm;	// Custo menor de Pacote prato descartável 15 cm (10u)
float custo_menor_colher_descartavel;	// Custo menor de Pacote colher sobremesa descartável (50u)
float custo_menor_garfo_descartavel;	// Custo menor de Pacote garfo sobremesa descartável (50u)
float custo_menor_guardanapo;	// Custo menor de Pacote guardanapo papel 19,5x20 (100u)
float custo_menor_saco_cachorro_quente;	// Custo menor de Pacote saco plástico cachorro quente (100u)
float custo_menor_saco_pipoca;	// Custo menor de Pacote pipoca 11x13 (100u)
float custo_menor_detergente_500ml;	// Custo menor de Garrafa detergente Ypê 500 ml
float custo_menor_esponja;	// Custo menor de Pacote esponja scotch brite (4u)
float custo_menor_papel_toalha;	// Custo menor de Pacote papel toalha Snob (2u)
float custo_menor_saco_lixo_50l;	// Custo menor de Pacote saco lixo 50L (100u)
float custo_menor_gas_45kg;	// Custo menor de Botijão gás cozinha 45 kg

float custo_maior_guarana_600ml;	// Custo maior de Lata guaraná Antárctica 600 ml
float custo_maior_coca_600ml;	// Custo maior de Lata Coca Cola 600 ml
float custo_maior_coca_zero_600ml;	// Custo maior de Lata Coca Cola zero 600 ml
float custo_maior_agua_500ml;	// Custo maior de Garrafa água sem gás 500 ml
float custo_maior_coca_2l;	// Custo maior de Garrafa Coca Cola 2 L
float custo_maior_suco_prats_300ml;	// Custo maior de Garrafa suco Prats 300 ml
float custo_maior_batata_palito_2kg;	// Custo maior de Pacote batata palito Bem Brasil 2 kg
float custo_maior_frango_inteiro;	// Custo maior de Frango inteiro para assar
float custo_maior_massa_pastel_1kg;	// Custo maior de Pacote massa de pastel 1 kg
float custo_maior_milho_pipoca_400g;	// Custo maior de Pacote milho de pipoca Yoki 400 g
float custo_maior_pao_cachorro_quente;	// Custo maior de Pão de cachorro quente
float custo_maior_salsicha_500g;	// Custo maior de Pacote salsicha Perdigão 500 g
float custo_maior_ketchup_567g;	// Custo maior de Ketchup Heinz 567 g
float custo_maior_acucar_5kg;	// Custo maior de Pacote açúcar cristal Colombo 5 kg
float custo_maior_sal_1kg;	// Custo maior de Pacote sal Lebre 1 kg
float custo_maior_oleo_soja_900ml;	// Custo maior de Garrafa óleo soja Soya 900 ml
float custo_maior_molho_tomate_300g;	// Custo maior de Pacote molho tomate Heinz 300 g
float custo_maior_copo_descartavel_300ml;	// Custo maior de Pacote copo descartável 300 ml (100u)
float custo_maior_prato_descartavel_15cm;	// Custo maior de Pacote prato descartável 15 cm (10u)
float custo_maior_colher_descartavel;	// Custo maior de Pacote colher sobremesa descartável (50u)
float custo_maior_garfo_descartavel;	// Custo maior de Pacote garfo sobremesa descartável (50u)
float custo_maior_guardanapo;	// Custo maior de Pacote guardanapo papel 19,5x20 (100u)
float custo_maior_saco_cachorro_quente;	// Custo maior de Pacote saco plástico cachorro quente (100u)
float custo_maior_saco_pipoca;	// Custo maior de Pacote pipoca 11x13 (100u)
float custo_maior_detergente_500ml;	// Custo maior de Garrafa detergente Ypê 500 ml
float custo_maior_esponja;	// Custo maior de Pacote esponja scotch brite (4u)
float custo_maior_papel_toalha;	// Custo maior de Pacote papel toalha Snob (2u)
float custo_maior_saco_lixo_50l;	// Custo maior de Pacote saco lixo 50L (100u)
float custo_maior_gas_45kg;	// Custo maior de Botijão gás cozinha 45 kg



setlocale(LC_ALL, "pt_BR");
}
