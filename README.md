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
![Ubuntu](https://e-tinet.com/wp-content/uploads/2013/06/ubuntu-logo-configuracao-dual-boot-windows83-2.png)
```
sudo apt-get install gcc
```
Com isso estará pronto para rodar a calculadora no ubuntu.

### Arch Linux/Derivados:
![Arch](https://seeklogo.com/images/A/archlinux-logo-1159446C2C-seeklogo.com.png)
```
pacman -Syu gcc
```

Com isso estará pronto para rodar a calculadora no arch.
### Gentoo/Derivados:
![Gentoo](https://static1.makeuseofimages.com/wordpress/wp-content/uploads/2012/12/gentoo_logo.jpg)
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