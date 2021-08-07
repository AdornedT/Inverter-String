# Inverter-String
Um programa para inverter uma string.

PEDIDO: Faça um programa que inverta os caracteres de uma string sem que um segundo buffer seja alocado. O programa não poderá utilizar funções pré-existentes da linguagem (ex. funções na STL do C++ como swap(), reverse(), etc), além disso não deverá simplesmente imprimir a cadeia de caracteres em ordem inversa, mas terá que fazer a manipulação direta sobre a cadeia de caracteres.

OBS: Imaginou se que a parte de não usar buffer quer dizer que não poderia-se utilizar outro vetor de mesmo tamanho para inverter a string. Mas que poderia ser utilizado um char que guardaria apenas uma letra.

Note que dentro do for foi feito o pedido da criação da variável i, meus outros projetos fazem o mesmo, isso é feito para que a variável seja descartada após o FOR ser resolvido. Liberando memória.

strlen(str)/2 foi utilizado assim pois dois caractéres estão sendo modificados por iteração do FOR. Exemplo:

ABCDE -> EBCDA -> EDCBA

Note que temos 5 letras mas precisamos fazer apenas 2 iterações.

Não existe a necessidade de tratar a parte não inteira desta divisão o programa funcionaria igual caso 5/2 seja estimado como 2 ou 3. Uma informação interessante, por causa de como funciona os bits de ponto flutuante, desconheço alguma linguagem de programação que não estime para baixo o valor da divisão. Então não se preocupe.
