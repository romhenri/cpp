# Room Manager
> Autoria: Rômulo Henrique Nasicmento Duarte (20230133856)

O sistema de controle de locação gerencia salas comerciais em um prédio, permitindo que empresas locatárias sejam associadas a essas salas.

## Como Compilar?

Executando makefile aqui presente destinado ao sistema operacional Windows com Compilador GCC.

### Windows

Requisitos:
- Compilador G++ MinGW

Compilar:
```
mingw32-make
```
> Executável em ``/bin/room-manager.exe``

Compilar e Rodar:
```
./run
```
> Obs: Por razões de segurança, o Gmail barrou ``run.bat``, então para seu funcionamento, basta renomar o ``run.txt``.

## Features

- [x] Cadastrar salas (privativas e compartilhadas);
- [x] Cadastrar empresas locatárias;
- [x] Associar e remover empresas de salas;
- [x] Calcular preço de locação;
- [x] Listar e ordenar salas por andar;
- [x] Gerenciar capacidade e estações de trabalho;
- [x] Visualizar dados de empresas.

<hr>

- [x] Código modularizado, organizado e documentado;
- [x] Sobrecarga de operadores;
- [x] Tratamento de exceções.