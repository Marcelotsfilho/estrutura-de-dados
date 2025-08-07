# 🔁 Lista Encadeada Circular — Estrutura de Dados

Este projeto implementa uma **lista encadeada circular** em linguagem **C**, utilizando TAD (Tipo Abstrato de Dados) e conceitos fundamentais de estrutura de dados dinâmica.

O programa permite a inserção, remoção e exibição de elementos de forma circular, onde o último nó aponta de volta para o primeiro. Foi desenvolvido como parte da disciplina de **Estrutura de Dados** do curso de **Engenharia da Computação**.

---

## 🔧 Funcionalidades

A aplicação realiza operações básicas sobre uma lista circular simplesmente encadeada:

- ➕ Inserção de elemento em posição específica
- ➖ Remoção de elemento por valor
- 📋 Exibição dos elementos da lista (circularmente)

---

## 🗂️ Estrutura dos Arquivos

| Arquivo              | Descrição                                                                  |
|----------------------|----------------------------------------------------------------------------|
| `main.c`             | Código principal com casos de teste e chamadas de função                   |
| `lista-circular.c`   | Implementação das funções que operam sobre a lista circular                |
| `lista-circular.h`   | Definição da estrutura `Lista` e protótipos das funções                    |

---

## 🔁 Sobre a Estrutura

A lista é composta por células (`struct celula`), onde:

- Cada célula contém um número inteiro (`conteudo`) e um ponteiro para a próxima.
- O último elemento aponta de volta para o primeiro, formando a estrutura circular.
- A inserção pode ser feita no início ou em posições intermediárias.
- A remoção busca e elimina um nó com base no valor armazenado.

---

## 💡 Compilação e Execução

### ✔️ Requisitos:
- Compilador C (ex: `gcc`)

### 🔧 Compilação:
```bash
gcc main.c lista-circular.c -o lista-circular
```
### ▶️ Execução:
```bash
./lista-circular
```
---

## 🧠 Exemplos de Uso

```bash
iniciaLista(&l);
mostraLista(&l); // Lista vazia

incereElemento(&l, 1, 0);
mostraLista(&l); // 1

removeLista(&l, 1);
mostraLista(&l); // Lista vazia

incereElemento(&l, 2, 1);
incereElemento(&l, 3, 2);
incereElemento(&l, 4, 3);
mostraLista(&l); // 2 3 4

removeLista(&l, 2);
mostraLista(&l); // 3 4
```
---
## 📌 Observações

- A função (`insereElemento`) aceita a posição desejada para inserção.
- A função (`removeLista`) busca o valor a ser removido, não a posição.
- A função (`mostraLista`) percorre a lista até retornar ao nó inicial.
- Em caso de lista vazia, as funções avisam ao usuário no terminal.
---

## 📚 Conteúdo Abordado
- ✅ Ponteiros e alocação dinâmica
- ✅ Listas encadeadas
- ✅ Estruturas de dados circulares
- ✅ Tipos Abstratos de Dados (TAD)
- ✅ Modularização de código em C
---

## 👨‍💻 Autor
- Marcelo Teixeira
- Graduando em Engenharia da Computação