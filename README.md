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
![Ubuntu](https://plus.diolinux.com.br/uploads/default/original/2X/5/5fbbe01c492a84e01ec1dc828205e06db2f0a52e.png)
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