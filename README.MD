📚 Sistema de Biblioteca

Um sistema simples de gerenciamento de livros feito em C, permitindo cadastro, empréstimo, devolução, consulta e outras operações básicas. Perfeito pra treinar estrutura de dados, manipulação de strings e organização de código.

🚀 Funcionalidades

📖 Cadastro de livros

🔎 Busca por tombo

📚 Listagem completa do acervo

📤 Registro de empréstimo

📥 Registro de devolução

✏️ Edição de informações

❌ Validação para tombos inexistentes

🔄 Controle de situação do livro
(D para disponível e E para emprestado)

🧠 Conceitos usados

Vetores de structs

Funções separadas pra deixar o código organizado

toupper(), manipulação de caracteres e validação

Uso de índices pra localizar livros

Retornos específicos (ex.: -1 quando não acha o tombo)

🛠️ Como executar

Compile:

gcc main.c -o biblioteca


Execute:

./biblioteca

📂 Estrutura do projeto
/Sistema-de-Biblioteca
│── main.c
│── funcoes.c (se tiver separado)
│── funcoes.h
│── README.md

🤓 Exemplo de uso

O sistema roda via terminal e exibe um menu com as opções de cadastro, empréstimo e devolução. Simples e direto.

📝 Observações

O sistema considera um acervo máximo de 250 livros.

Todo livro tem um número único de tombo.

A situação do livro sempre é atualizada automaticamente.