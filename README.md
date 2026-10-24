# Laços de Repetição em C

Repositório com atividades acadêmicas sobre os três laços de repetição da linguagem C: `for`, `while` e `do-while`.

Os códigos foram feitos para treinar e estudar a linguagem C, e não são um projeto de produção. Os arquivos mostram os laços funcionando, com exemplos simples.

## Os três laços

Um laço de repetição executa um bloco de código várias vezes, enquanto uma condição for verdadeira.

### for

Usado quando se sabe quantas vezes repetir.

```c
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

### while

Testa a condição antes de executar o bloco, então pode nunca executar. Lembre de atualizar a variável dentro do laço para evitar loop infinito.

```c
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```

### do-while

Testa a condição depois de executar o bloco, então executa pelo menos uma vez. Note o `;` no final.

```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

## Como executar

É necessário ter um compilador C instalado, como o GCC (`gcc --version` para conferir).

```bash
git clone https://github.com/vinirodrigues-hub/estrutura-repeticao-c.git
cd estrutura-repeticao-c
gcc for.c -o for
./for
```

No Windows, execute com `for.exe`. Repita para os outros arquivos, trocando o nome.

## Autor

Feito por Vinícius Silva Rodrigues, estudante de Engenharia de Software.
