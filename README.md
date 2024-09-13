# Fuzzy: Multiperceptron (MLP)

Este projeto implementa uma rede neural simples do tipo **Multiperceptron (MLP)** utilizando a linguagem C. O programa simula uma rede neural feedforward básica com dois neurônios de entrada, dois neurônios na camada oculta e um neurônio de saída. Ele usa pesos pré-definidos e a função de ativação sigmoide para calcular a saída da rede.

## Funcionalidades

- Aceita dois valores de entrada (I1, I2) fornecidos pelo usuário.
- Usa um total de seis pesos pré-definidos (W1 a W6) para calcular as ativações da camada oculta e da camada de saída.
- Aplica a função de ativação sigmoide a cada camada.
- Exibe os resultados das somas ponderadas (E1, E2, E3) e as ativações correspondentes (S1, S2, S3).

## Estrutura da Rede Neural

- **Camada de Entrada**: Consiste em duas entradas (I1, I2) fornecidas pelo usuário.
- **Camada Oculta**: Dois neurônios com somas ponderadas calculadas a partir das entradas.
- **Camada de Saída**: Um único neurônio com soma ponderada baseada nas ativações dos neurônios da camada oculta.

### Pesos

Os pesos são pré-definidos da seguinte forma:
- W1 = 7
- W2 = 3
- W3 = 5
- W4 = 9
- W5 = 2
- W6 = 8

### Função de Ativação

A função sigmoide é usada como função de ativação:
\[
S = \frac{1}{1 + e^{-10 \cdot (E - T)}}
\]

Onde:
- `E` é a soma ponderada das entradas ou ativações.
- `T` é o valor de threshold (limiar) para cada camada.

## Como Usar

1. Execute o programa.
2. Insira os dois valores de entrada quando solicitado (I1 e I2).
3. O programa calculará e exibirá as somas ponderadas e as ativações para cada camada da rede neural.

## Exemplo de Uso

```bash
Digite I1: 0.5
Digite I2: 0.8

Recebe resposta:

E1 : 5.90
S1 : 1.00

E2 : 9.70
S2 : 0.73

E3 : 6.47
S3 : 1.00
