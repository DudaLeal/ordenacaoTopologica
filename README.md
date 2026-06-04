# 🗺️ Ordenação Topológica

Implementação do algoritmo de Ordenação Topológica para Grafos Dirigidos Acíclicos (DAGs) utilizando listas de adjacência, cálculo de grau de entrada e filas.

---

## 📌 Sobre o Projeto
Este projeto foi desenvolvido como parte da disciplina de **Estrutura de Dados** do curso de **Ciência da Computação** na **UFRJ**.

O objetivo principal foi aplicar conceitos práticos de estruturas lineares (filas e listas encadeadas) na resolução de problemas clássicos de teoria dos grafos. A ordenação topológica é fundamental para determinar a ordem de execução de tarefas que possuem dependências entre si.

## ⚙️ Detalhes da Implementação
A solução foi construída do zero em **C**, sem o uso de bibliotecas externas de estrutura de dados, priorizando o entendimento do gerenciamento de memória e ponteiros:
* **Representação do Grafo:** Lista encadeada para armazenar de forma eficiente as adjacências de cada vértice.
* **Processamento:** Uma estrutura de **Fila** (FIFO) é utilizada pela função `ordenacao_topologica` para rastrear e processar sequencialmente os vértices com grau de entrada igual a 0.

## 🛠️ Tecnologias
* **Linguagem:** C 
* **Compilador sugerido:** gcc

## 🚀 Como Executar o Projeto

### Pré-requisitos
Você precisará apenas de um compilador C instalado (como o GCC).

### Passo a Passo
1. Clone este repositório:
   
```bash
git clone [https://github.com/DudaLeal/ordenacaoTopologica.git](https://github.com/DudaLeal/ordenacaoTopologica.git)
```

2. Acesse a pasta do projeto:
   
```bash
cd nome-do-repositorio-ordenacao
```

3. Compile o código:

```bash
gcc main.c -o ordenacao_topologica
```

4. Execute o programa:
   
```bash
./ordenacao_topologica
```

### ⌨️ Exemplo de Uso

Ao iniciar, o programa solicitará os dados via teclado:

1. Informe a quantidade de vértices.
2. Informe as arestas no formato `origem destino` (uma por linha ou separadas por espaço).

O programa processará o grafo e imprimirá a sequência correta da ordenação topológica diretamente no terminal.

---

Desenvolvido por Eduarda Cardoso ✨

