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
- Clang (Termux)

Caso não tenha o GCC instalado.

Faça isso:

### Ubuntu/Derivados:
![Ubuntu](https://pasteboard.co/K3A8P2V.jpg)
```
sudo apt-get install gcc
```
Com isso estará pronto para rodar a calculadora no ubuntu.

### Arch Linux/Derivados:
![Arch](https://cdn0.iconfinder.com/data/icons/flat-round-system/512/archlinux-128.png)
```
pacman -Syu gcc
```

Com isso estará pronto para rodar a calculadora no arch.
### Gentoo/Derivados:
![Gentoo](https://www.shareicon.net/data/128x128/2015/09/17/102431_gentoo_512x512.png)
```
sudo emerge -u sys-devel/gcc
```

Com isso estará pronto para rodar a calculadora no gentoo.

### Termux:
![Termux](https://camo.githubusercontent.com/7e9e7ede781036f1190406b40e9813801ae1632070cabc00343a46d83c9fa025/687474703a2f2f69636f6e732e69636f6e617263686976652e636f6d2f69636f6e732f626c61636b76617269616e742f627574746f6e2d75692d73797374656d2d617070732f3235362f5465726d696e616c2d69636f6e2e706e67)
```
pkg install clang
```

Com isso estará pronto para rodar a calculadora no termux.

## Linux ##

Soma:
```
gcc src/soma.c -o soma
sudo chmod +x ./soma
./soma
```

Subtração:
```
gcc src/subtracao.c -o subtracao
sudo chmod +x ./subtracao
./subtracao
```

Multiplicação:
```
gcc src/multiplicacao.c -o multiplicacao
sudo chmod +x ./multiplicacao
./multiplicacao
```

Divisão:
```
gcc src/divisao.c -o divisao
sudo chmod +x ./divisao
./divisao
```
### Rodando C no Termux

Soma:
```
clang src/soma.c -o soma
chmod +x ./soma
./soma
```

Subtração:
```
clang src/subtracao.c -o subtracao
chmod +x ./subtracao
./subtracao
```

Multiplicação:
```
clang src/multiplicacao.c -o multiplicacao
chmod +x ./multiplicacao
./multiplicacao
```

Divisão:
```
clang src/divisao.c -o divisao
chmod +x ./divisao
./divisao
