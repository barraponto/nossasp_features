#!/usr/bin/python
# coding=utf-8

from urllib import urlretrieve, urlopen
from itertools import product

categories = [
        {'category': 'Conselho Municipal', 'color': '12b012', 'code': '16'},
        {'category': 'Outros'  , 'color': 'ff22d2', 'code': '17'},
        {'category': 'Associação de bairro'  , 'color': 'de0800', 'code': '18'},
        {'category': 'Associação profissional', 'color': '2880af', 'code': '19'},
        {'category': 'Sindicatos', 'color': 'fe900f', 'code': '20'}
        ]

fields = [
        {'type': 'Assistencia e Inclusão Social', 'code': '1', 'icon': 'communitycentre', 'generate': 'offices/city-services/community-center'},
        {'type': 'Cidadania', 'code': '2', 'icon': 'group-2', 'generate': 'offices/group'},
        {'type': 'Comunicação', 'code': '3', 'icon': 'audio', 'generate': 'media/audio'},
        {'type': 'Consumo', 'code': '4', 'icon': 'bank', 'generate': 'offices/bank'},
        {'type': 'Cultura', 'code': '5', 'icon': 'world', 'generate': 'tourism/place-to-see/world'},
        {'type': 'Direitos Humanos', 'code': '6', 'icon': 'strike', 'generate': 'events/manifestation'},
        {'type': 'Educação', 'code': '7', 'icon': 'university', 'generate': 'health-education/education/university'},
        {'type': 'Esporte', 'code': '8', 'icon': 'soccerfield', 'generate': 'sports/ball-sports/soccer-football'},
        {'type': 'Habitação', 'code': '9', 'icon': 'apartment-3', 'generate': 'friends-family/apartment'},
        {'type': 'Meio Ambiente', 'code': '10', 'icon': 'riparianhabitat', 'generate': 'nature/natural-marvels/riparian-habitat'},
        {'type': 'Redes', 'code': '11', 'icon': 'share', 'generate': 'media/share'},
        {'type': 'Saúde', 'code': '12', 'icon': 'firstaid', 'generate': 'health/education/first-aid'},
        {'type': 'Segurança', 'code': '13', 'icon': 'police', 'generate': 'offices/police'},
        {'type': 'Trabalho e Renda', 'code': '14', 'icon': 'factory', 'generate': 'industry/factory'},
        {'type': 'Transporte', 'code': '15', 'icon': 'bus', 'generate': 'transportation/road-transportation/bus'},
        ]

for combination in product(categories, fields):
    url = 'http://mapicons.nicolasmollet.com/wp-content/uploads/mapicons/shape-default/color-' + combination[0]['color'] + '/shapecolor-color/shadow-1/border-dark/symbolstyle-white/symbolshadowstyle-dark/gradient-no/' + combination[1]['icon'] + '.png'
    print  'Getting ' + combination[1]['type'] + ' icon for ' + combination[0]['category'] + ' category.'
    urlopen('http://mapicons.nicolasmollet.com/markers/' + combination[1]['generate'] + '/?custom_color=' + combination[0]['color'])
    print  'Downloading from: ' + url
    urlretrieve(url, combination[0]['code'] + '-' + combination[1]['code'] + '.png')
