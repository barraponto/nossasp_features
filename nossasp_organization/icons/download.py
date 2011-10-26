#!/usr/bin/python
# coding=utf-8

from urllib import urlretrieve, urlopen
from itertools import product

categories = [
        {'category': 'Conselhos Municipais', 'color': 'eedc41', 'tid': '16'},
        {'category': 'Ongs', 'color': '2880af', 'tid': '17'},
        {'category': 'Associação de Bairro'  , 'color': 'de0800', 'tid': '18'},
        {'category': 'Sindicatos de Trabalhadores', 'color': 'bd4448', 'tid': '19'},
        {'category': 'Sindicatos Empresariais', 'color': '90159f', 'tid': '20'},
        {'category': 'Movimentos Sociais', 'color': '12b012', 'tid': '21'},
        {'category': 'Organizações Virtuais', 'color': 'fe900f', 'tid': '22'},
        ]

fields = [
        {'type': 'Assistencia Social', 'tid': '1', 'icon': 'communitycentre', 'generate': 'offices/city-services/community-center'},
        {'type': 'Cidadania', 'tid': '2', 'icon': 'group-2', 'generate': 'offices/group'},
        {'type': 'Comunicação', 'tid': '3', 'icon': 'audio', 'generate': 'media/audio'},
        {'type': 'Consumo', 'tid': '4', 'icon': 'bank', 'generate': 'offices/bank'},
        {'type': 'Cultura', 'tid': '5', 'icon': 'world', 'generate': 'tourism/place-to-see/world'},
        {'type': 'Direitos Humanos', 'tid': '6', 'icon': 'strike', 'generate': 'events/manifestation'},
        {'type': 'Educação', 'tid': '7', 'icon': 'university', 'generate': 'health-education/education/university'},
        {'type': 'Esporte', 'tid': '8', 'icon': 'soccerfield', 'generate': 'sports/ball-sports/soccer-football'},
        {'type': 'Habitação', 'tid': '9', 'icon': 'apartment-3', 'generate': 'friends-family/apartment'},
        {'type': 'Meio Ambiente', 'tid': '10', 'icon': 'urbanpark', 'generate': 'tourism/park'},
        {'type': 'Redes', 'tid': '11', 'icon': 'share', 'generate': 'media/share'},
        {'type': 'Saúde', 'tid': '12', 'icon': 'firstaid', 'generate': 'health/education/first-aid'},
        {'type': 'Segurança', 'tid': '13', 'icon': 'police', 'generate': 'offices/police'},
        {'type': 'Trabalho e Renda', 'tid': '14', 'icon': 'factory', 'generate': 'industry/factory'},
        {'type': 'Transporte', 'tid': '15', 'icon': 'bus', 'generate': 'transportation/road-transportation/bus'},
        {'type': 'Raça e Etnia', 'tid': '25', 'icon': 'symbol_star', 'generate': 'numbers-letters'},
        {'type': 'Gênero', 'tid': '26', 'icon': 'bus', 'generate': 'transportation/road-transportation/bus'},
        {'type': 'Acessibilidade', 'tid': '27', 'icon': 'disability', 'generate': 'health-education/health/disability'},
        {'type': 'Idosos', 'tid': '28', 'icon': 'seniorsite', 'generate': 'offices/senior-site'},
        {'type': 'Criança e Adolescente', 'tid': '29', 'icon': 'toys', 'generate': 'stores/toys'},
        {'type': 'Diversidade Sexual', 'tid': '30', 'icon': 'gay-male', 'generate': 'restaurants-bars/bars/gay-bar-male'},
        ]

for combination in product(categories, fields):
    url = 'http://mapicons.nicolasmollet.com/wp-content/uploads/mapicons/shape-default/color-' + combination[0]['color'] + '/shapecolor-color/shadow-1/border-dark/symbolstyle-white/symbolshadowstyle-dark/gradient-no/' + combination[1]['icon'] + '.png'
    print  'Getting ' + combination[1]['type'] + ' icon for ' + combination[0]['category'] + ' category.'
    urlopen('http://mapicons.nicolasmollet.com/markers/' + combination[1]['generate'] + '/?custom_color=' + combination[0]['color'])
    print  'Downloading from: ' + url
    urlretrieve(url, combination[0]['tid'] + '-' + combination[1]['tid'] + '.png')
