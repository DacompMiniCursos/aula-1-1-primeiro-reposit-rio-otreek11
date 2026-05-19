# Meu Projeto

Estou realizando a atividade :)
Este foi o primeiro dia !!

## Dia 2

Hoje eu coloquei o .gitignore !

## Dia 3

Implementei um codigo INSANO que printa hello world
2 VEZES !!!
Google aqui vou eu
Btw agr que eu notei que eu to esquecendo os git log :p

## Dia 4

Aqui eu tinha adicionado uma .env e commitei "sem querer" no repositório para fins de arranjar motivos para usar o git revert (sim, eu esqueci as exatas palavras que eu tinha escrito)

## Dia 5

Certamente eu não commitei a .env sem querer no repositório para fins de arranjar motivos para usar o git revert

Enfim, agora a env ta no gitignore !

## Dia 6

Eu realmente to sem ideia aqui

`arquivo_legal.c` agora imprime hello world incríveis 3 vezes!

## Dia 7

`arquivo_legal.c` é agora a ULTIMATE HELLO WORLD MACHINE! Apenas insira a quantidade de hello worlds que ele imprime (bem original, eu sei)

## Historico

So deixando salvo aqui os git diffs e o git log

### git log

```
6ff2ee1 (HEAD -> main) Dia 6: mais um hello world no arquivo_legal.c
58fc344 Dia 5: .env adicionada no gitignore
78bbf2d Revert "Dia 4: adicionando SECRET_KEY no .env"
6c982c9 Dia 4: adicionando SECRET_KEY no .env
ce4609d Dia 3: Hello World em C!
25eefac Dia 2: adicionando gitignore
4a1c7d1 Dia 1: Criando o repositorio
fa18c32 (origin/main, origin/HEAD) add deadline
aea88c9 Setting up GitHub Classroom Feedback
ae19052 (origin/feedback) GitHub Classroom Feedback
```

### git diffs

- Dia 1:
    ```
    diff --git a/README.md b/README.md
    index 4c00a3e..626f647 100644
    --- a/README.md
    +++ b/README.md
    @@ -1 +1,14 @@
    -[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0cG_zi6a)
    +# Meu Projeto
    +
    +Estou realizando a atividade :)
    +Este foi o primeiro dia !!
    +
    +
    +
    +## Historico
    +
    +So deixando salvo aqui os git diffs e o git log
    +
    +### git log
    +
    +### git diffs
    ```

- Dia 2:
    ```
    diff --git a/README.md b/README.md
    index 8d41b6d..c4166ab 100644
    --- a/README.md
    +++ b/README.md
    @@ -3,7 +3,9 @@
    Estou realizando a atividade :)
    Este foi o primeiro dia !!

    +## Dia 2

    +Hoje eu coloquei o .gitignore !

    ## Historico
    ```

- Dia 3:
    ```
    diff --git a/README.md b/README.md
    index d55f0bc..c41c3b2 100644
    --- a/README.md
    +++ b/README.md
    @@ -7,12 +7,27 @@ Este foi o primeiro dia !!

    Hoje eu coloquei o .gitignore !

    +## Dia 3
    +
    +Implementei um codigo INSANO que printa hello world
    +2 VEZES !!!
    +Google aqui vou eu
    +Btw agr que eu notei que eu to esquecendo os git log :p
    +
    ## Historico

    So deixando salvo aqui os git diffs e o git log

    ### git log

    +```
    +25eefac (HEAD -> main) Dia 2: adicionando gitignore
    +4a1c7d1 Dia 1: Criando o repositorio
    +fa18c32 (origin/main, origin/HEAD) add deadline
    +aea88c9 Setting up GitHub Classroom Feedback
    +ae19052 (origin/feedback) GitHub Classroom Feedback
    +```
    +
    ```
- Dia 4:
    (aconteceu um revert aqui)
- Dia 5:
    ```
    diff --git a/.gitignore b/.gitignore
    index f0574e1..de7ce92 100644
    --- a/.gitignore
    +++ b/.gitignore
    @@ -1,2 +1,3 @@
    arquivo-secreto-ultra-escondido-nao-abrir.txt
    -bloodborne-2-(nao-e-virus).exe
    \ No newline at end of file
    +bloodborne-2-(nao-e-virus).exe
    +.env
    \ No newline at end of file
    diff --git a/README.md b/README.md
    index dc9e0e3..41cba4b 100644
    --- a/README.md
    +++ b/README.md
    @@ -14,6 +14,16 @@ Implementei um codigo INSANO que printa hello world
    Google aqui vou eu
    Btw agr que eu notei que eu to esquecendo os git log :p

    +## Dia 4
    +
    +Aqui eu tinha adicionado uma .env e commitei "sem querer" no repositório para fins de arranjar motivos para usar o git revert (sim, eu esqueci as exatas palavras que eu tinha escrito)
    +
    +## Dia 5
    +
    +Certamente eu não commitei a .env sem querer no repositório para fins de arranjar motivos para usar o git revert
    +
    +Enfim, agora a env ta no gitignore !
    ```

- Dia 6:
    ```
    diff --git a/README.md b/README.md
    index bd5087b..53c028a 100644
    --- a/README.md
    +++ b/README.md
    @@ -24,6 +24,12 @@ Certamente eu não commitei a .env sem querer no repositório para fins de arran

    Enfim, agora a env ta no gitignore !

    +## Dia 6
    +
    +Eu realmente to sem ideia aqui
    +
    +`arquivo_legal.c` agora imprime hello world incríveis 3 vezes!
    +
    ## Historico

    So deixando salvo aqui os git diffs e o git log
    diff --git a/arquivo_legal.c b/arquivo_legal.c
    index e00cebb..8490cbb 100644
    --- a/arquivo_legal.c
    +++ b/arquivo_legal.c
    @@ -1,6 +1,7 @@
    #include <stdio.h>

    int main() {
    +    printf("Hello World!\n");
    ```

- Dia 7:
    ```
    diff --git a/README.md b/README.md
    index fac9a3f..b50c48e 100644
    --- a/README.md
    +++ b/README.md
    @@ -30,6 +30,10 @@ Eu realmente to sem ideia aqui

    `arquivo_legal.c` agora imprime hello world incríveis 3 vezes!

    +## Dia 7
    +
    +`arquivo_legal.c` é agora a ULTIMATE HELLO WORLD MACHINE! Apenas insira a quantidade de hello worlds que ele imprime (bem original, eu sei)
    +
    ## Historico

    So deixando salvo aqui os git diffs e o git log
    diff --git a/arquivo_legal.c b/arquivo_legal.c
    index 8490cbb..3e86223 100644
    --- a/arquivo_legal.c
    +++ b/arquivo_legal.c
    @@ -1,8 +1,14 @@
    #include <stdio.h>

    int main() {
    -    printf("Hello World!\n");
    -    printf("Hello World!\n");
    -    printf("Hello World!\n");
    +    int n;
    +    printf("========== ULTIMATE HELLO WORLD MACHINE ==============\n");
    +    printf("Insert number of hello worlds: ");
    +    scanf("%d", &n);
    +
    +    for (int i = 0; i < n; i++) {
    +        printf("Hello World!\n");
    +    }
    +
        return 0;
    }
    ```