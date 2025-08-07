# 🌳 Árvore Binária de Busca — Estrutura de Dados

Este projeto implementa uma **Árvore Binária de Busca (ABB)** em linguagem **C**, utilizando TAD (Tipo Abstrato de Dados) e conceitos fundamentais de estrutura de dados dinâmica e recursividade.

O programa permite a inserção, remoção, busca e exibição de elementos de forma ordenada e eficiente. A Árvore Binária de Busca é uma estrutura de dados de árvore baseada em nós, onde todos os nós da subárvore esquerda possuem um valor numérico inferior ao nó raiz e todos os nós da subárvore direita possuem um valor superior. Este projeto foi desenvolvido como parte da disciplina de **Estrutura de Dados** do curso de **Engenharia da Computação**.

---

## 🔧 Funcionalidades

A aplicação realiza operações básicas sobre uma Árvore Binária de Busca:

- ➕ Inserção: Adiciona um novo nó na árvore, mantendo suas propriedades.
- ➖ Remoção: Remove um nó específico, tratando os três casos possíveis (nó folha, nó com um filho, nó com dois filhos).
- 🔍 Busca: Procura por um valor específico na árvore de forma otimizada.
- 📋 Exibição: Mostra a árvore utilizando os três tipos de percurso: Pré-Ordem, Em-Ordem (que exibe os valores ordenados) e Pós-Ordem.
- 🗑️ Liberar Memória: Libera toda a memória alocada para os nós da árvore, evitando vazamentos de memória.

---

## 🗂️ Estrutura dos Arquivos

| Arquivo              | Descrição                                                                  |
|----------------------|----------------------------------------------------------------------------|
| `main.c`             | Código principal com a criação da árvore, casos de teste e chamadas de função. de função.                   |
| `lista-circular.c`   | Implementação das funções recursivas que operam sobre a árvore (inserir, remover, etc.).                |
| `lista-circular.h`   | Definição da `struct No` e `struct Arvore` e protótipos das funções (interface do TAD).                    |

---

## 🔁 Sobre a Estrutura

A árvore é composta por nós (`struct No`), onde:

- Cada nó contém um valor inteiro (`conteudo`).
- Cada nó possui dois ponteiros: `esquerda` e `direita`.
- Para qualquer nó, todos os valores na sua subárvore esquerda são menores que o seu valor.
- Para qualquer nó, todos os valores na sua subárvore direita são maiores que o seu valor.

---

## 💡 Compilação e Execução

### ✔️ Requisitos:
- Compilador C (ex: `gcc`)

### 🔧 Compilação:
```bash
gcc main.c arvore.c -o arvore
```
### ▶️ Execução:
```bash
./arvore
```
---

## 🧠 Exemplos de Uso

```bash
// Inicializa a árvore
Arvore arv;
iniciaArvore(&arv);

// Insere os valores: 14, 17, 11, 9, 53, 4, 41
inserir_no(&arv, 14);
inserir_no(&arv, 17);
// ...

// Mostra os percursos
printf("Percurso em Pre-Ordem: ");
mostraPreOrdem(arv); // 14 11 9 4 17 53 41

printf("Percurso Em-Ordem: ");
mostraEmOrdem(arv); // 4 9 11 14 17 41 53 (ordenado)

// Busca um elemento
if (buscar(arv, 41) != NULL) {
    printf("O valor 41 foi encontrado.\n");
}

// Remove um elemento
remover_no(&arv, 11);
printf("Em-Ordem apos remocao: ");
mostraEmOrdem(arv); // 4 9 14 17 41 53

// Libera a memória ao final
liberar_arvore(&arv);
```
---
## 📌 Observações

- A inserção de valores duplicados é ignorada.
- A função `remover_no` é capaz de reestruturar a árvore corretamente nos diferentes cenários de remoção.
- A função` mostraEmOrdem` sempre exibirá os elementos da árvore em ordem crescente, uma propriedade fundamental das ABBs.
- É crucial chamar `liberar_arvore` ao final do uso para evitar vazamentos de memória.
---

## 📚 Conteúdo Abordado
- ✅ Ponteiros e alocação dinâmica (`malloc`, `free`)
- ✅ Recursividade
- ✅ Árvores Binárias de Busca (ABB)
- ✅ Travessia de Árvores (Pré-ordem, Em-ordem, Pós-ordem)
- ✅ Tipos Abstratos de Dados (TAD)
- ✅ Modularização de código em C
---

## 👨‍💻 Autor
- Marcelo Teixeira
- Graduando em Engenharia da Computação