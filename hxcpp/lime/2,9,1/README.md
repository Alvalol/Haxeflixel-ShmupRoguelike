[![MIT License](https://img.shields.io/badge/license-MIT-blue.svg?style=flat)](LICENSE.md) [![Haxelib Version](https://img.shields.io/github/tag/openfl/lime.svg?style=flat&label=haxelib)](http://lib.haxe.org/p/lime) [![Build Status](https://img.shields.io/travis/openfl/lime.svg?style=flat)](https://travis-ci.org/openfl/lime)

Lime
====

Lime is a flexible, lightweight layer for Haxe cross-platform developers.

Lime supports native, Flash and HTML5 targets with unified support for:

 * Windowing
 * Input
 * Events
 * Audio
 * Render contexts
 * Network access
 * Assets

Lime does not include a renderer, but exposes the current context:

 * Canvas
 * DOM
 * Flash
 * GL

The GL context is based upon the WebGL standard, implemented for both OpenGL and OpenGL ES as needed.

Lime provides a unified audio API, but also provides access to OpenAL for advanced audio on native targets.


License
=======

Lime is free, open-source software under the [MIT license](LICENSE.md).


Installation
============

First install the latest version of [Haxe](http://www.haxe.org/download).

The current version of Lime has not been released on haxelib, yet, so please install the latest [development build](http://www.openfl.org/builds/lime).


Development Builds
==================

When there are changes, Lime is built nightly. Builds are available for download [here](http://www.openfl.org/builds/lime).

To install a development build, use the "haxelib local" command:

    haxelib local filename.zip


Building from Source
====================

Clone the Lime repository, as well as the submodules:

    git clone --recursive https://github.com/openfl/lime

Tell haxelib where your development copy of Lime is installed:

    haxelib dev lime lime

The first time you run the "lime" command, it will attempt to build the Lime standard binary for your desktop platform as the command-line tools. To build these manually, use the following command (using "mac" or "linux" if appropriate):

    haxelib install format
    lime rebuild windows
    lime rebuild tools

While current Lime projects (and the Lime tools) use the standard Lime binary, by default, OpenFL uses the legacy Lime 1 binary when targeting native platforms. To rebuild Lime legacy, you can use the "legacy" define:

    lime rebuild windows -Dlegacy

You can build additional binaries, or rebuild binaries after making changes, using "lime rebuild":

    lime rebuild windows
    lime rebuild linux -64 -release -clean

You can also rebuild the tools if you make changes to them:

    lime rebuild tools

On a Windows machine, you should have Microsoft Visual Studio C++ (Express is just fine) installed. You will need Xcode on a Mac. To build on a Linux machine, you may need the following packages (or similar):

    sudo apt-get install libgl1-mesa-dev libglu1-mesa-dev g++ g++-multilib gcc-multilib libasound2-dev libx11-dev libxext-dev libxi-dev libxrandr-dev libxinerama-dev

To switch away from a source build, use:

    haxelib dev lime


Sample
======

You can build a sample Lime project with the following commands:

    lime create HelloWorld
    cd HelloWorld
    lime test neko

You can also list other projects that are available using "lime create".


Targets
=======

Lime currently supports the following targets:

    lime test windows
    lime test mac
    lime test linux
    lime test neko
    lime test android
    lime test html5
    lime test flash

Native builds must be built on the same operating system as the target. As supported in Lime legacy, additional platforms (iOS, BlackBerry) will be restored in the near future.
