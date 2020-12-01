# Aplicativo web de controle residencial

Este é um programa em python que utiliza Django, um framework de desenvolvimento web, e um módulo de comunicação serial para enviar dados ao arduino, que é capaz de realizar várias funções, como acionamento de relés para acender lâmpadas e ligar equipamentos a partir de um clique na pagina web do computador ou smartphone.

Um exemplo do funcionamento deste projeto pode ser visto [aqui](https://youtu.be/4EK3r-MzUUA)

### Instruções para executar o projeto
* No terminal, mude o diretório para a pasta HOMELEDAPP e digite o comando `python manage.py runserver` e acesse no navegador 127.0.0.1:8000/main
* Para acessar de uma outra máquina que esteja na mesma rede, é preciso adicionar o endereço IP do computador que está hospedando à lista ALLOWED_HOSTS no script [settings.py](https://github.com/Rona1f/web_home_light/blob/main/HOMELEDPROJECT/settings.py) que está na pasta [HOMELEDPROJECT](https://github.com/Rona1f/web_home_light/tree/main/HOMELEDPROJECT), e no terminal adicionar ao comando `python manage.py runserver` este endereço IP do computador que foi permitido, seguido de dois pontos e a porta (Ex. `python manage.py runserver 192.168.0.100:5500`).


##### Link direto para o vídeo: <https://youtu.be/4EK3r-MzUUA>
