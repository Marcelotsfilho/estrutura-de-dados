# 📁 Lista Dinâmica — Estrutura de Dados

Este repositório contém a implementação de uma **fila dinâmica** em linguagem **C**, desenvolvida como atividade da disciplina de **Estrutura de Dados**, no curso de **Engenharia da Computação**.

O projeto tem como objetivo reforçar conceitos fundamentais como:

- Organização modular de código (separação em `.h`, `.c` e `main`)
- Manipulação de ponteiros e alocação dinâmica de memória
- Implementação de TAD (Tipo Abstrato de Dados)
- Listas encadeadas

---

## 🔧 Funcionalidades

A aplicação simula o funcionamento de uma **fila dinâmica** (baseada em lista encadeada), com interface simples em terminal para o usuário realizar as seguintes operações:

- ➕ Inserir elemento na fila
- ➖ Remover elemento da fila (FIFO)
- 📋 Visualizar os elementos da fila
- 🚪 Encerrar o programa

---

## 🗂️ Estrutura dos Arquivos

| Arquivo             | Descrição                                                                 |
|---------------------|---------------------------------------------------------------------------|
| `main.c`            | Interface de menu com operações interativas                               |
| `fila-dinamica.c`   | Implementação das funções que manipulam a fila dinâmica                   |
| `fila-dinamica.h`   | Definição da struct `Fila` e da `celula`, além dos protótipos de função   |

---

## 💡 Como Compilar e Executar

### ✔️ Requisitos:
- Compilador C (como `gcc`)

### 🔧 Compilação:
```bash
gcc main.c fila-dinamica.c -o fila-dinamica
```

### ▶️ Execução:
```bash
./fila-dinamica
```

---
## 🧠 Exemplo de Uso
```bash
***********************
   MENU DE OPERACOES
***********************
1- Inserir elemento:
2- Remover elemento:
3- Mostrar fila:
0- Sair:
***********************
```
---

## 📌 Observações
- A fila é implementada por meio de lista encadeada simples, com ponteiros.
- Cada célula da fila contém um número inteiro e um ponteiro para a próxima.
- A inserção é feita no final, e a remoção ocorre no início (como em qualquer fila FIFO).
- A função **vazioFila()** verifica se a fila está vazia antes das operações.
- O código é modularizado e estruturado para fins educacionais.
---

## 📚 Conteúdo Abordado
- ✅ Tipos Abstratos de Dados (TAD)
- ✅ Ponteiros e alocação dinâmica
- ✅ Listas encadeadas
- ✅ Modularização em C
- ✅ Interface de terminal interativa
---
## 👨‍💻 Autor
- Marcelo Teixeira
- Graduando em Engenharia da Computação