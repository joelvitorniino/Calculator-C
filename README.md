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
![Gentoo](https://upload.wikimedia.org/wikipedia/commons/1/19/Gentoo_Logo_Vector.svg)
```
sudo emerge -u sys-devel/gcc
```

Com isso estará pronto para rodar a calculadora no gentoo.

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
chmod +x ./divisao
./divisao
