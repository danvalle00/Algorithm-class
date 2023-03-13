#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Duvidas: perguntar se o altos numeros de #define eh ruim pro codigo ou eh bom.
// perguntar de como gerar nomes, sobrenomes e time aleatorios;
#define TAM_name 20
#define TAM_deck 1
#define range_random 100
#define max_age 40
#define min_age 16
#define max_value
#define min_value

typedef enum
{
    Gol,
    Defesa,
    Meio,
    Ataque,
    Libero
} posicao;

typedef struct carta_atleta_s // estrutura da carta do atleta
{
    int id;
    char name[TAM_name];
    char sobrenome[TAM_name];
    int idade;
    char time[TAM_name];
    int valor;
    int forca;
    int velocidade;
    int resistencia;
    int forca_vontade;
    int criatividade;
    bool lideranca;
    int machucado;
    posicao posicao;
} carta_atleta_t;

int main()
{
    srand(time(NULL));

    // populando a estrutura de dados do vetor do atleta
    carta_atleta_t carta_atleta[TAM_deck];
    for (int i = 0; i < TAM_deck; i++)
    {
        carta_atleta->id[&i] = rand() % TAM_deck + 1; // id das cartas baseado no tamanho do deck (ex: 1000)
        // carta_atleta->name[&i]
        // carta_atleta->sobrenome[&i]
        carta_atleta->idade[&i] = (rand() % (max_age - min_age + 1)) + min_age;
        // carta_atleta->time[&i]
        // carta_atleta->valor[&i] = (rand() % (max_value - min_value + 1)) + min_value; (colocar os valores na constante)
        carta_atleta->forca[&i] = rand() % range_random + 1;
        carta_atleta->velocidade[&i] = rand() % range_random + 1;
        carta_atleta->resistencia[&i] = rand() % range_random + 1;
        carta_atleta->forca_vontade[&i] = rand() % range_random + 1;
        carta_atleta->criatividade[&i] = rand() % range_random + 1;
        carta_atleta->lideranca[&i] = rand() % 2;
        carta_atleta->machucado[&i] = rand() % range_random + 1;
        carta_atleta->posicao[&i] = rand() % 5;
    }
}