# <p align="center" width="100%"><img alt="Bugdom Extreme" src="docs/bugextreme.png"></p>

[![latest release](https://img.shields.io/github/release/LordNyriox/Bugdom.svg)](https://github.com/LordNyriox/Bugdom/releases/latest)
[![license](https://img.shields.io/badge/license-CC_BY--NC--SA_4.0-lightgrey.svg)](LICENSE.md)
[![repo size](https://img.shields.io/github/repo-size/LordNyriox/Bugdom.svg)](https://github.com/LordNyriox/Bugdom)
[![Build Status](https://img.shields.io/github/workflow/status/LordNyriox/Bugdom/Full%20Compile%20Check/extreme)](https://github.com/LordNyriox/Bugdom/actions/workflows/FullCompileCheck.yml?query=branch%3Aextreme)
[![last commit](https://img.shields.io/github/last-commit/LordNyriox/Bugdom/extreme.svg)](https://github.com/LordNyriox/Bugdom/commits/extreme)

This is a fork of Pangea Software’s *Bugdom*, updated to run on modern operating systems. Named in honor of Pangea Software’s [*Nanosaur Extreme*](https://www.pangeasoft.net/nano/files.html), a 2002 update of *Nanosaur* which once did something similar.

Forked from [**@jorio**](https://github.com/jorio)’s version, at [jorio/Bugdom](https://github.com/jorio/Bugdom), which is [approved by Pangea Software](https://pangeasoft.net/bug/register.html).

**Download the game for macOS, Windows and Linux here:** <https://github.com/LordNyriox/Bugdom/releases>

## About This Fork

[*Bugdom*](https://pangeasoft.net/bug/index.html) is a 1999 Macintosh game by Pangea Software. You play as Rollie McFly, a pill bug on a quest to save ladybugs from King Thorax’s iron grip on the Bugdom.

The game was bundled with some Mac models of the era. It is probably the most advanced game that uses QuickDraw 3D. Unfortunately, QuickDraw 3D has not been updated past Mac OS 9, so experiencing the game used to require booting a PowerPC Mac into OS 9 — until [**@jorio**](https://github.com/jorio)’s port came out.

After [**@jorio**](https://github.com/jorio) finished porting [*Nanosaur*](https://github.com/jorio/Nanosaur), Pangea offered to let him port Bugdom.

This fork aims to provide the best way to experience *Bugdom* today. It introduces some modern comforts, fixes some gameplay bugs,
[extends the maximum render distance](https://github.com/jorio/Bugdom/issues/24) to *6 times* that of the original game,
raises the enemy spawn rates to the [same values as *Nanosaur Extreme*](https://github.com/jorio/Nanosaur/blob/master/src/System/ProMode.c),
and makes Powerup Nuts containing Buddy Bugs (the only weapon drop in *Bugdom*) spawn more often. 

### Documentation

- [BUILD.md](BUILD.md) — How to build on macOS, Windows or Linux.
- [CHANGELOG.md](CHANGELOG.md) — Bugdom version history.
- [LICENSE.md](LICENSE.md) — Licensing information (see also below).
- [Instructions.pdf](docs/Instructions.pdf) — Original instruction manual. Int’l versions:
    [DE](docs/Instructions-DE.pdf)
    [FR](docs/Instructions-FR.pdf)
    [IT](docs/Instructions-IT.pdf)
    [JA](docs/Instructions-JA.pdf)
    [SP](docs/Instructions-ES.pdf)
    [SV](docs/Instructions-SV.pdf)
- [CHEATS.md](CHEATS.md) — Cheat codes!
- [COMMANDLINE.md](COMMANDLINE.md) — Advanced command-line switches.

### License

*Bugdom* has been re-released at [jorio/Bugdom](https://github.com/jorio/Bugdom) under the [CC BY-NC-SA 4.0](https://github.com/jorio/Bugdom/blob/master/LICENSE.md) license with permission from Pangea Software, Inc.

In compliance with the ShareAlike provision of said Creative Commons license, this fork is also released under the [CC BY-NC-SA 4.0](LICENSE.md) license.

Bugdom® and Nanosaur™ are trademarks of Pangea Software, Inc.

### Credits

- © 1999 Pangea Software, Inc.
- Designed & developed by Brian Greenstone & Toucan Studio, Inc.
- All artwork herein is © Toucan Studio, Inc.
- All music herein is © Mike Beckett.
- This software includes portions © 2020-2022 Iliyas Jorio.

### More Pangea stuff!

Check out [**@jorio**](https://github.com/jorio)’s ports of
[*Cro-Mag Rally*](https://github.com/jorio/CroMagRally),
[*Nanosaur*](https://github.com/jorio/Nanosaur),
[*Mighty Mike* (*Power Pete*)](https://github.com/jorio/MightyMike),
and [*Otto Matic*](https://github.com/jorio/OttoMatic).
