# 🏋️‍♂️ Pilha Dinâmica de Atletas — Estrutura de Dados

Este projeto implementa uma **pilha dinâmica** para armazenar e manipular dados de atletas, utilizando **linguagem C** e o conceito de **TADs (Tipos Abstratos de Dados)**. A pilha é baseada em lista encadeada, onde cada célula contém um atleta com dados como nome, CPF, idade, altura, peso e nível de cansaço.

O programa foi desenvolvido como atividade da disciplina de **Estrutura de Dados** do curso de **Engenharia da Computação**.

---

## 🔧 Funcionalidades

A aplicação oferece um menu interativo em terminal com as seguintes opções:

- ➕ Inserir atleta no topo da pilha
- ➖ Remover atleta do topo da pilha
- 📋 Mostrar todos os atletas da pilha (do topo à base)
- 🏃 Fazer o atleta do topo correr (aumenta o nível de cansaço)
- 🛌 Fazer o atleta do topo descansar (diminui o nível de cansaço)
- 🚪 Encerrar o programa (libera memória alocada)

---

## 🗂️ Estrutura dos Arquivos

| Arquivo               | Descrição                                                                 |
|-----------------------|---------------------------------------------------------------------------|
| `main.c`              | Interface principal com o menu de operações                              |
| `atleta.c` / `atleta.h`         | Estrutura e funções relacionadas ao TAD `Atleta`                         |
| `pilha_dinamica.c` / `pilha_dinamica.h` | Implementação da pilha dinâmica e suas operações                         |

---

## 🧬 Sobre o TAD Atleta

Cada atleta possui os seguintes atributos:

- `nome` (string)
- `cpf` (inteiro)
- `idade` (inteiro)
- `peso` (float)
- `altura` (float)
- `cansaco` (inteiro de 0 a 10)

As ações **correr** e **descansar** afetam diretamente o nível de cansaço do atleta, simulando esforço físico.

---

## 🛠️ Compilação e Execução

### ✔️ Requisitos:
- Compilador C (como `gcc`)

### 🔧 Compilação:
```bash
gcc main.c atleta.c pilha_dinamica.c -o pilha-atletas
```
### ▶️ Execução:
```bash
./pilha-atletas
```
---

## 🧠 Exemplos de Uso

```bash
--- MENU PILHA DE ATLETAS ---
1 - Inserir atleta
2 - Remover atleta do topo
3 - Mostrar todos os atletas na pilha
4 - Fazer atleta do topo correr
5 - Fazer atleta do topo descansar
0 - Sair
```
---
## 📌 Observações

- A pilha é implementada como lista encadeada dinâmica (sem limite fixo de tamanho).
- Todas as operações preservam os princípios do TAD e do encapsulamento.
- A função destroiPilha() garante liberação de memória ao sair do programa.
- A manipulação do topo é feita por ponteiros, permitindo acesso direto ao último atleta inserido.
---

## 📚 Conteúdo Abordado
- ✅ TADs (Tipos Abstratos de Dados)
- ✅ Listas encadeadas
- ✅ Pilha dinâmica (LIFO)
- ✅ Ponteiros e alocação dinâmica
- ✅ Modularização em C
- ✅ Interação via terminal
---

## 👨‍💻 Autor
- Marcelo Teixeira
- Graduando em Engenharia da Computação