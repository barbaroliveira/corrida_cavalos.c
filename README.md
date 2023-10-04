# Sistema de Gestão de corridas de cavalos
Este é um projeto de sistema de suporte ao processo de gestão de corridas de cavalos desenvolvido como parte de um trabalho acadêmico. O sistema foi projetado para auxiliar uma Associação de Amigos Criadores de Cavalos de Corrida (A2C3) na organização de um campeonato de corridas de cavalos.
## Entidades Principais
- **Quadra**: Representa as quadras que participam do campeonato. Cada quadra tem um nome, localidade e uma quantidade de cavalos associados.
- **Participante**: Representa cavalos e seus respectivos jockeys. As informações incluem o nome do cavalo, sexo, idade, número de contribuinte do jockey e a quadra à qual pertencem.
- **Jornada**:  Representa cada uma das jornadas do campeonato. Cada jornada tem um número de jornada, local, data e o número de provas que serão realizadas.
- **Prova**:Cada jornada consiste em uma ou mais provas. Cada prova tem um número de prova e um número de participantes.

## Regras de Negócio
- Um cavalo só pode participar uma vez em cada prova de uma jornada, mas pode participar em diferentes provas da mesma jornada ou em provas de jornadas diferentes.
- O cavalo vencedor do campeonato é aquele que venceu o maior número de jornadas.
- A quadra vencedora é aquela que acumulou o maior número de vitórias ao longo do campeonato, considerando todas as jornadas ganhas por seus cavalos.

## Funcionalidades do Sistema
- O sistema deve permitir a inserção, eliminação, consulta e listagem de quadras.
- Deve ser possível inserir, eliminar, consultar e listar participantes.
- O sistema deve possibilitar a inserção de jornadas, consulta de resultados de jornadas por data e consulta de jornadas por nome de cavalo.
Deve haver uma funcionalidade para exibir estatísticas, incluindo resultados do campeonato, percentagem de vitórias por participante, média de tempos e a quadra com mais participantes no campeonato.
- O sistema deve ser capaz de lidar com um máximo de 100 quadras, 100 cavalos/jockeys e 15 jornadas.
