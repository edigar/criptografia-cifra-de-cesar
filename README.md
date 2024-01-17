# criptografia-cifra-de-cesar
Um programa em C, que encripta e decripta textos no formato txt, baseado no método de criptografia da cifra de césar.

## A Cifra de César

A [Cifra de César](https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar) é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de cifra de substituição, que opera de acordo com um sitema pré-definido de substituição, em que cada letra do texto é substituída por uma letra ou um símbolo diretamente. O nome do método existe em homenagem à Julio César, que usou em sua correpondência privada.

## Instalação
Para instalar, basta clonar o repositório ou baixar o código, compilar o fonte e rodar.

```bash
$ git clone git@github.com:edigar/criptografia-cifra-de-cesar.git
$ cd criptografia-cifra-de-cesar
```

### Windows
Você precisará de um compilador, uma sugestão de um simples e gratuita é usar a de um editor de código C como o [CodeBlocks](http://www.codeblocks.org/ "CodeBlocks").

Uma vez tendo compilado o fonte, basta executar o arquivo exe gerado.

### Linux
Para compilar no linux, você precisará ter o compilador instalado. Se não tiver, uma opção é o gcc. Para instalá-lo e compilar o fonte, faça como abaixo:

```bash
$ apt-get install gcc
$ gcc cifradecesar.c -o cifradecesar
```

Tendo compilado, basta executar a aplicação pelo prompt usando ./
```bash
$ ./cifradecesar
```

### Para leigos ou apressados
Caso não queira ver o fonte ou mesmo compilar o código, mas somente usar a aplicação, basta efetuar o download do zip, descompactar e executar os compilados que estão na pasta binaries. Nesta pasta você encontará um binário compilado no Windows 11 e um binário compilado no Linux Mint (Parecido com Ubuntu).

Caso só queira usar, basta guardar o binário e se livrar do resto.

Para executar a aplicação no *Windows*, execute o arquivo cifradecesar.exe, localizado na pasta binaries, com duplo click ou executando pelo prompt de comando.

Para executar a aplicação no *Linux*, execute o arquivo cifradecesar, também localizado na pasta binaries pelo prompt de comandos.
```bash
$ cd binaries
$ ./cifradecesar
```

## Uso

Super simples de usar, basta seguir as orientações nas instruções, dentro do próprio prograna, mas consiste de 1 menu com 3 opções: Criptografar, Decriptar e Sair.

Quando solicitado informe o caminho completo para o arquivo a ser encriptado/decriptado, que deve ser do tipo txt (com extensão txt). Um arquivo com o conteúdo criptografado/decriptado será gerado, também do tipo txt com o conteúdo encriptado ou decriptado, dependendo da opção escolhida.

Não esqueça-se que para decriptar um texto criptografado por essa cifra, você deve utilizar a mesma chave utilizada para encriptar, representado por um número.
