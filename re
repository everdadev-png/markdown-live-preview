# 🎓 Guia de Revisão Rápida para a Prova de Matemática

---

## I. Funções Exponenciais

* **Definição:** `f(x) = a^x`
    * **Condições da Base (a):** `a ∈ ℝ`, `a > 0`, e `a ≠ 1`.
* **Características:**
    * **Domínio:** `ℝ` (todos os números reais).
    * **Imagem:** `ℝ+*` (todos os números reais positivos).
    * **Ponto Chave:** O gráfico **sempre passa por (0,1)**.
    * **Assíntota Horizontal:** Eixo `Ox` (`y=0`).
* **Classificação (Crescimento/Decrescimento):**
    * **Crescente:** Se `a > 1`.
    * **Decrescente:** Se `0 < a < 1`.

### Equações Exponenciais

* **Princípio:** Se `a^x1 = a^x2` (com `a > 0, a ≠ 1`), então `x1 = x2`.
* **Estratégias:**
    1.  **Reduzir à Mesma Base:** Tentar reescrever todos os termos com a mesma base.
    2.  **Substituição de Variável:** Usar `y = a^x` para transformar a equação em uma forma polinomial (ex: quadrática).
    3.  **Propriedades de Potências:** `a^(m+n) = a^m ⋅ a^n`, `a^(m-n) = a^m / a^n`.

* **Exemplo Resolvido (E11):** `2^(x+1) + 2^(x-1) = 40`
    1.  `2 ⋅ 2^x + (2^x / 2) = 40`
    2.  Multiplicar por 2: `4 ⋅ 2^x + 2^x = 80`
    3.  Agrupar: `5 ⋅ 2^x = 80`
    4.  Isolar `2^x`: `2^x = 16`
    5.  Mesma base: `2^x = 2^4 => x = 4`.
    6.  **Solução:** `S = {4}`.

---

## II. Funções Logarítmicas

* **Definição:** `log_a N = c <=> a^c = N`
    * `N`: Logaritmando; `a`: Base; `c`: Logaritmo.
* **Condições de Existência (C.E.):** Para `log_a N` existir, DEVE-SE TER:
    * `N > 0`
    * `a > 0`
    * `a ≠ 1`
* **Características da Função `f(x) = log_a x`:**
    * **Domínio:** `ℝ+*` (todos os números reais positivos).
    * **Imagem:** `ℝ` (todos os números reais).
    * **Ponto Chave:** O gráfico **sempre passa por (1,0)**.
    * **Assíntota Vertical:** Eixo `Oy` (`x=0`).

### Propriedades Operatórias (MUITO IMPORTANTES)

1.  **Produto:** `log_a(M ⋅ N) = log_a M + log_a N`
2.  **Quociente:** `log_a(M / N) = log_a M - log_a N`
3.  **Potência:** `log_a M^α = α ⋅ log_a M`
4.  **Mudança de Base:** `log_a N = log_b N / log_b a`

### Equações Logarítmicas

1.  **Primeiro passo:** Determine as **Condições de Existência (C.E.)** para todos os logaritmos da equação.
2.  Use as propriedades para **simplificar** a equação, se possível, para uma forma `log_a P = E` ou `log_a P = log_a Q`.
3.  **Converta:**
    * Se `log_a P = E`, então `a^E = P`.
    * Se `log_a P = log_a Q`, então `P = Q`.
4.  Resolva a equação algébrica resultante.
5.  **Verifique:** As soluções encontradas DEVEM satisfazer as C.E. do passo 1.

* **Exemplo Resolvido:** `log_2(x+7) - log_2(2x-1) = 2`
    1.  **C.E.:** `x+7 > 0 => x > -7`; `2x-1 > 0 => x > 1/2`. **Conclusão:** `x > 1/2`.
    2.  **Propriedade do Quociente:** `log_2 ((x+7)/(2x-1)) = 2`.
    3.  **Definição de Logaritmo:** `(x+7)/(2x-1) = 2^2 => (x+7)/(2x-1) = 4`.
    4.  **Resolver:** `x+7 = 4(2x-1) => x+7 = 8x-4 => 11 = 7x => x = 11/7`.
    5.  **Verificar C.E.:** `11/7 ≈ 1.57`, que é maior que `1/2`. A solução é válida.
    6.  **Solução:** `S = {11/7}`.

---

## III. Funções Quadráticas

* **Definição:** `f(x) = ax^2 + bx + c`, com `a ≠ 0`.
* **Gráfico:** Uma **parábola**.
* **Concavidade:**
    * Se `a > 0`: concavidade para cima (o vértice é um ponto de **mínimo**).
    * Se `a < 0`: concavidade para baixo (o vértice é um ponto de **máximo**).
* **Vértice da Parábola `(xv, yv)`:**
    * `xv = -b / (2a)`
    * `yv = f(xv)` (substitua `xv` na função)

### Transformações de Gráficos (Aplicável a qualquer função `f(x)`)

| Transformação            | Regra da Nova Função | Efeito no Gráfico                                   |
| :----------------------- | :------------------- | :-------------------------------------------------- |
| **Translação Vertical** | `y = f(x) + k`       | Desloca `k` unidades para cima (`k>0`) ou para baixo (`k<0`). |
| **Translação Horizontal**| `y = f(x+h)`         | Desloca `h` unidades para a esquerda (`h>0`) ou para a direita (`h<0`). |
| **Dilatação/Contração Vertical** | `y = a ⋅ f(x)`   | Dilata (`a>1`) ou contrai (`0<a<1`) verticalmente. |
| **Reflexão no Eixo x** | `y = -f(x)`          | Reflete o gráfico em relação ao eixo `Ox`.         |
| **Reflexão no Eixo y** | `y = f(-x)`          | Reflete o gráfico em relação ao eixo `Oy`.         |

---

## IV. Funções Trigonométricas

* **Círculo Unitário:** Centro `(0,0)`, raio `1`. Ponto `(x,y)` no círculo define `cos t = x` e `sen t = y`.

### Características Principais

| Função              | Domínio                 | Imagem                             | Período |
| :------------------ | :---------------------- | :--------------------------------- | :------ |
| `sen t`             | `ℝ`                     | `[-1, 1]`                          | `2π`    |
| `cos t`             | `ℝ`                     | `[-1, 1]`                          | `2π`    |
| `tg t`              | `x ≠ π/2 + kπ`          | `ℝ`                                | `π`     |
| `csc t = 1/sen t`   | `x ≠ kπ`                | `(-∞, -1] ∪ [1, ∞)`                | `2π`    |
| `sec t = 1/cos t`   | `x ≠ π/2 + kπ`          | `(-∞, -1] ∪ [1, ∞)`                | `2π`    |
| `cotg t = 1/tg t`   | `x ≠ kπ`                | `ℝ`                                | `π`     |

### Identidades Trigonométricas Essenciais

* **Pitagórica Fundamental:** `sen² t + cos² t = 1`
* **Outras Pitagóricas:** `1 + tg² t = sec² t`; `1 + cotg² t = csc² t`
* **Quociente:** `tg t = sen t / cos t`; `cotg t = cos t / sen t`
* **Recíprocas:** `csc t = 1 / sen t`; `sec t = 1 / cos t`; `cotg t = 1 / tg t`
* **Ângulos Negativos:** `sen(-t) = -sen t`; `cos(-t) = cos t`

### Esboço de Gráficos de Seno e Cosseno (Forma `y = A sen (Bx - C) + D`)

1.  **Amplitude `(|A|)`:** Altura máxima e mínima da onda.
2.  **Período `(P = 2π / |B|)`:** Comprimento de um ciclo.
3.  **Deslocamento de Fase `(Fase = C / B)`:** Onde o ciclo "começa" (deslocamento horizontal).
4.  **Deslocamento Vertical `(D)`:** Posição da linha central da onda.

* **Passos para Esboçar:**
    * Determine `A, B, C, D` da função.
    * Calcule Amplitude, Período, Fase e Eixo Central.
    * Defina o intervalo de um ciclo: `[Fase, Fase + Período]`.
    * Divida esse intervalo em 4 partes iguais para os pontos-chave (zeros, máximos, mínimos).
    * Esboce a onda usando esses pontos.

* **Exemplo (21.7):** `u = 2 sen (5t - π)`
    * `A=2, B=5, C=π, D=0`.
    * Amplitude: `2`. Período: `2π/5`. Fase: `π/5`. Eixo central: `u=0`.
    * Ciclo começa em `t = π/5` e termina em `t = π/5 + 2π/5 = 3π/5`.
    * Pontos-chave:
        * `t = π/5` (`u=0`)
        * `t = 3π/10` (`u=2`, Máximo)
        * `t = 2π/5` (`u=0`)
        * `t = π/2` (`u=-2`, Mínimo)
        * `t = 3π/5` (`u=0`, Fim do ciclo)
