# 📁 Lista Estática — Estrutura de Dados

Este repositório contém a implementação de uma **fila estática** em linguagem **C**, desenvolvida como atividade da disciplina de **Estrutura de Dados**, no curso de **Engenharia da Computação**.

O projeto tem como objetivo reforçar conceitos fundamentais como:

- Organização modular de código (uso de `.h` e `.c`)
- Manipulação de vetores estáticos
- Uso de ponteiros e structs
- Implementação de TAD (Tipo Abstrato de Dados)

---

## 🔧 Funcionalidades

A aplicação simula o funcionamento básico de uma **fila com tamanho fixo** (100 elementos), utilizando uma interface simples em terminal para o usuário realizar as seguintes operações:

- ➕ Inserir elemento na fila
- ➖ Remover elemento da fila
- 📋 Verificar os elementos presentes na fila
- 🧹 Liberar (esvaziar) a fila

---

## 🗂️ Estrutura dos Arquivos

| Arquivo     | Descrição                                                                 |
|-------------|---------------------------------------------------------------------------|
| `main.c`    | Interface de menu com opções de interação com a fila                      |
| `fila.c`    | Implementação das funções de manipulação da fila                          |
| `fila.h`    | Definição da struct `Fila` e protótipos das funções                       |

---

## 💡 Como Compilar e Executar

### ✔️ Requisitos:
- Compilador C (GCC ou compatível)

### 🔧 Compilação:
```bash
gcc main.c fila.c -o fila
```
### ▶️ Execução:
```bash
./fila
```
---

## 🧠 Exemplos de Uso

```bash
***********************
   MENU DE OPERACOES
***********************
1- Incerir elemento:
2- Romover elemento:
3- Verificar fila:
4- Liberar fila:
0- Sair:
***********************
```
---
## 📌 Observações

- A fila é estática com capacidade para até 100 elementos.
- A remoção desloca todos os elementos à esquerda (com custo linear).
- A função liberaFila() remove todos os elementos, um por um, exibindo o processo.
- Todas as operações são feitas diretamente sobre a struct Fila, utilizando ponteiros.
---

## 📚 Conteúdo Abordado
- ✅ Tipos Abstratos de Dados (TAD)
- ✅ Structs e vetores
- ✅ Modularização em C (.h e .c)
- ✅ Ponteiros
- ✅ Interface de terminal básica
---

## 👨‍💻 Autor
- Marcelo Teixeira
- Graduando em Engenharia da Computação