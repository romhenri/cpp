#include <iostream>
#include <memory>
#include "time.h"
#include "jogo.h"
#include "campeonato.h"
#include "juiz.h"
#include "jogador.h"
#include "tecnico.h"
#include "tecnico_jogador.h"

using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

int main() {
  // Tecnicos
  auto tecnico1 = make_shared<tecnico>("Felipe Luis", 39, 15);
  auto tecnico2 = make_shared<tecnico>("Ramon Diaz", 64, 5);
  auto tecnico3 = make_shared<tecnico>("Gabriel Milito", 44, 12);
  auto tecnico4 = make_shared<tecnico>("Rafael Paiva", 40, 25);

  time time1("Flamengo", tecnico1.get());
  time time2("Corinthians", tecnico2.get());
  time time3("Atletico Mineiro", tecnico3.get());
  time time4("Vasco", tecnico4.get());

  // Cadastro de jogadores para cada time
  time1.adicionar_jogador(jogador("Gabigol", 27, "Atacante", 15));
  time1.adicionar_jogador(jogador("Bruno Henrique", 33, "Atacante", 12));
  time2.adicionar_jogador(jogador("Yuri Alberto", 23, "Atacante", 10));
  time2.adicionar_jogador(
      tecnico_jogador("Rodrigo Garro", 26, "Meio-campo", 85, 5, 10000)
  );
  time3.adicionar_jogador(jogador("Hulk", 37, "Atacante", 20));
  time3.adicionar_jogador(jogador("Paulinho", 29, "Meio-campo", 8));
  time4.adicionar_jogador(jogador("Vegetti", 32, "Atacante", 10));
  time4.adicionar_jogador(jogador("David", 29, "Meio-campo", 6));

  // Cadastro de Juizes
  auto juiz1 = make_shared<juiz>("Wilton Sampaio", 42);
  auto juiz2 = make_shared<juiz>("Raphael Claus", 43);

  cout << "Rodada 4:(ida)" << endl;
  // Cadastro dos Jogos
  jogo jogo1(&time3, &time4, juiz1.get());  // Atletico-MG x Vasco
  jogo jogo2(&time1, &time2, juiz2.get());  // Flamengo x Corinthians
  cout << "" << endl;
  jogo1.registrar_resultado(2, 1);  // Atletico-MG x Vasco
  jogo2.registrar_resultado(1, 0);  // Flamengo x Corinthians
  cout << "Rodada Encerrada!\n" << endl;

  cout << "Rodada 5:(volta)" << endl;
  // Cadastro dos Jogos
  jogo jogo3(&time4, &time3, juiz2.get());  // Vasco x Atletico-MG
  jogo jogo4(&time2, &time1, juiz1.get());  // Corinthians x Flamengo
  cout << "" << endl;
  jogo3.registrar_resultado(3, 1);  // Vasco x Atletico-MG
  jogo4.registrar_resultado(20, 1);  // Corinthians x Flamengo
  cout << "Rodada Encerrada!\n" << endl;

  // Cadastro no campeonato e exibição da tabela
  campeonato copa_do_brasil("Campeonato do Brasil 2024");
  copa_do_brasil.adicionar_time(time1);
  copa_do_brasil.adicionar_time(time2);
  copa_do_brasil.adicionar_time(time3);
  copa_do_brasil.adicionar_time(time4);
  copa_do_brasil.exibir_classificacao();
  return 0;
}