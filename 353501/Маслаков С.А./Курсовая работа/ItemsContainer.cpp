
#include "ItemsContainer.h"

QVector<Pepper*> ItemsContainer::allPeppers = {};

QVector<Food*> ItemsContainer::allFoods = {};

QVector<SnakeAI*> ItemsContainer::allSnakesAI = {};
QVector<QString> ItemsContainer::allNames = {"Blitz",
                                             "Cipher",
                                             "Phoenix",
                                             "Shadowfax",
                                             "Nebula",
                                             "Dynamo",
                                             "Stryker",
                                             "Vanguard",
                                             "Spectre",
                                             "Avalanche",
                                             "Falcon",
                                             "Eclipse",
                                             "Blitzkrieg",
                                             "Nova",
                                             "Sentinel",
                                             "Viper",
                                             "Titan",
                                             "Mirage",
                                             "Frostbite",
                                             "Thunder",
                                             "Radiant",
                                             "Catalyst",
                                             "Venom",
                                             "Orion",
                                             "Seraph",
                                             "Blitzwing",
                                             "Ember",
                                             "Aurora",
                                             "Onyx",
                                             "Havoc",
                                             "Nebulus",
                                             "Hyperion",
                                             "Shadowstrike",
                                             "Blitzfire",
                                             "Novaflare",
                                             "Vendetta",
                                             "Nebulon",
                                             "Blitzstorm",
                                             "Nightshade",
                                             "Velocity",
                                             "Phoenixfire",
                                             "Nebulite",
                                             "Striker",
                                             "Nebulonix",
                                             "Blitzbolt",
                                             "Zenith",
                                             "Eclipsefire",
                                             "Nebulora",
                                             "Blitzstrike",
                                             "Nebulaxis",
                                             "Quantum",
                                             "Thunderstrike",
                                             "Nebulite",
                                             "Blitzflame",
                                             "Nebulora",
                                             "Spectral",
                                             "Solaris",
                                             "Nebulazor",
                                             "Blitzfury",
                                             "Nebulasol",
                                             "Aether",
                                             "Frost",
                                             "Nebulashock",
                                             "Blitzstone",
                                             "Nebuluna",
                                             "Etherion",
                                             "Cyclone",
                                             "Nebulashade",
                                             "Blitzwave",
                                             "Nebulumis",
                                             "Tempest",
                                             "Nebulight",
                                             "Blitzgale",
                                             "Nebuluna",
                                             "Inferno",
                                             "Nebulashroud",
                                             "Blitzthorn",
                                             "Nebulus",
                                             "Ignite",
                                             "Nebulashine",
                                             "Blitzflare",
                                             "Nebulith",
                                             "Radiance",
                                             "Nebulashiver",
                                             "Blitzbolt",
                                             "Nebuluna",
                                             "Stellar",
                                             "Nebulashimmer",
                                             "Blitzstorm",
                                             "Nebulithium",
                                             "Shadow",
                                             "Nebulashade",
                                             "Blitzfire",
                                             "Nebuluna",
                                             "Astral",
                                             "Nebulashroud",
                                             "Blitzstrike",
                                             "Nebulith",
                                             "Lumos",
                                             "Nebuluna"};
QVector<Stone*> ItemsContainer::allStones = {};
//QVector<SnakeInfo> ItemsContainer::allInfoForScoreboard = {};