# Calculator-C
Calculadora feita em C

Esta calculadora realiza as seguintes operações matemáticas:

- Soma
- Subtração
- Multiplicação
- Divisão

# Pré-Requisitos

Caso esteja no linux é obrigatório ter:
- GCC

Caso não tenha o GCC instalado.

Faça isso:

### Ubuntu/Derivados:
```
sudo apt-get install gcc
```
Com isso estará pronto para rodar a calculadora no ubuntu.

### Arch Linux/Derivados:
```
pacman -Syu gcc
```

Com isso estará pronto para rodar a calculadora no arch.
### Gentoo/Derivados:
```
sudo emerge -u sys-devel/gcc
```

Com isso estará pronto para rodar a calculadora no gentoo.

## Linux ##
Para rodar esta calculadora no linux, certifique-se que tenha instalado o gcc.

Soma:
```
gcc src/soma.c -o soma
chmod +x ./soma
./soma
```

Subtração:
```
gcc src/subtracao.c -o subtracao
chmod +x ./subtracao
./subtracao
```

Multiplicação:
```
gcc src/multiplicacao.c -o multiplicacao
chmod +x ./multiplicacao
./multiplicacao
```

Divisão:
```
gcc src/divisao.c -o divisao
chmod +x ./divisao
./divisao