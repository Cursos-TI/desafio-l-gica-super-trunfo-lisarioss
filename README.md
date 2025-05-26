🃏 Super Trunfo - Comparador de Cartas de Países

Este projeto em linguagem C simula o jogo Super Trunfo, permitindo o cadastro e comparação de cartas de cidades ou países com base em diversos atributos, como população, área, PIB, pontos turísticos, densidade demográfica e PIB per capita. Foi desenvolvido como parte do curso de Análise e Desenvolvimento de Sistemas da Universidade Estácio, com orientação do professor Sergio Cardoso.

📚 Funcionalidades
Cadastro de duas cartas com atributos detalhados

Cálculo de densidade demográfica e PIB per capita

Cálculo de Super Poder

Comparação automática de atributos entre as cartas

Menu interativo: o usuário escolhe qual atributo comparar

Comparações com regras específicas (ex: menor densidade vence)

Exibição clara e amigável do resultado

📌 Atributos da Carta
Cada carta contém:

Estado (string)

Código (string)

Cidade/País (string)

População (unsigned long int)

Área (float)

PIB (float)

Pontos turísticos (int)

Densidade demográfica (calculada)

PIB per capita (calculado)

🧠 Regras de Comparação
População, Área, PIB, Pontos turísticos, PIB per capita e Super Poder: vence o maior valor.

Densidade demográfica: vence o menor valor.

Empates são informados claramente.

⚙️ Como compilar
Você pode compilar o código usando o GCC:

bash
Copiar
Editar
gcc super_trunfo.c -o super_trunfo
▶️ Como executar
Após a compilação, execute o programa:

bash
Copiar
Editar
./super_trunfo
📋 Exemplo de uso
Ao iniciar o programa, ele pedirá os dados das duas cartas. Em seguida, apresentará um menu como este:

sql
Copiar
Editar
Escolha um atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita
Você deverá digitar o número correspondente ao atributo. O sistema então exibirá o resultado da comparação, como no exemplo:

yaml
Copiar
Editar
Comparando: População
Carta 1: Brasil - 210000000
Carta 2: Japão - 126000000
Resultado: Carta 1 venceu!

👨‍🏫 Agradecimentos
Projeto desenvolvido com apoio do professor Sergio Cardoso, na disciplina de Lógica de Programação da Universidade Estácio. Obrigado pela orientação e incentivo contínuo!