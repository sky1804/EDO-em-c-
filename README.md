# EDO em C++

Projeto acadêmico desenvolvido para uma aula de **Cálculo**, com o objetivo de aplicar conceitos de **Equações Diferenciais Ordinárias (EDOs)** por meio de programas simples em C++.

O repositório contém duas implementações para resolução de EDOs de primeira ordem:

* **Método das Variáveis Separáveis**
* **Método do Fator Integrante**

## Métodos implementados

### 1. Variáveis separáveis

O primeiro programa trabalha com uma EDO do tipo:

$$
\frac{dy}{dt} = ky
$$

cuja solução pode ser escrita como:

$$
y(t) = ae^{kt}
$$

O programa recebe:

* o valor inicial \(y(0)=a\);
* um segundo ponto \((t_1, y(t_1))\);
* um valor de \(t\) para consulta.

A constante \(k\) é calculada por:

$$
k = \frac{1}{t_1}\ln\left(\frac{y(t_1)}{a}\right)
$$

Depois disso, o programa monta a função encontrada e calcula \(y(t)\) para o valor informado pelo usuário.

### 2. Fator integrante

O segundo programa trabalha com uma EDO linear de primeira ordem do tipo:

$$
y' + py = a
$$

considerando \(a\) e \(p\) constantes.

A solução utilizada pelo programa é:

$$
y(x) = \frac{a}{p} + Ce^{-px}
$$

A partir de uma condição inicial \(y(x_0)=y_0\), a constante \(C\) é determinada por:

$$
C = \left(y_0 - \frac{a}{p}\right)e^{px_0}
$$

Por fim, o usuário pode informar um valor de \(x\) para calcular o valor correspondente de \(y(x)\).

## Tecnologias

* C++
* Biblioteca padrão `iostream`
* Biblioteca matemática `cmath`

## Estrutura do projeto

```text
EDO-em-c--main/
├── Método 1   # Método das variáveis separáveis
└── Método 2   # Método do fator integrante
```

## Como compilar e executar

É necessário ter um compilador C++, como o **g++**, instalado.

Com os nomes atuais dos arquivos:

```bash
g++ -x c++ "metodo_separavel" -o metodo_separavel
g++ -x c++ "fator_integrante" -o fator_integrante
```

No Linux/macOS:

```bash
./metodo_separavel
./fator_integrante
```

No Windows:

```powershell
.\metodo_separavel.exe
.\fator_integrante.exe
```

Se os arquivos forem renomeados com a extensão `.cpp`, a compilação pode ser feita normalmente:

```bash
g++ metodo_separavel.cpp -o metodo_separavel
g++ fator_integrante.cpp -o fator_integrante
```

## Exemplo — método separável

Para valores como:

```text
y(0) = 2
t1 = 1
y(t1) = 4
```

o programa calcula a constante \(k\) e apresenta uma função da forma:

```text
y(t) = 2 * e^(k * t)
```

Em seguida, é possível informar outro valor de \(t\) para obter uma aproximação numérica de \(y(t)\).

## Objetivo acadêmico

O projeto busca relacionar a resolução analítica de EDOs estudada em Cálculo com uma implementação computacional simples, permitindo visualizar como condições iniciais e constantes da equação determinam uma solução específica.
