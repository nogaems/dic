# dic
dic - dic isn't conky

# Concepts

## Subsistems:

### 1. Receiving telemetry through:

* Unix-socket
* Pipe
* Return code of the third-party program

### 2. Preparation of telemetry:

* filtering
* normalization
* sorting
* approx (?)
* etc.

### 3. Output to the screen:

* plot
* diagram
* plain text
* gauge
* histogram

### 4. Configuration:

* parser of configuration file
* using JSON format

## Abstract

Simple and lightweight dashboard that inspired by [suckless.org philosophy] (http://suckless.org/philosophy). Written in ANSI C with a minimum of dependencies. Tiled output with ability to configure position of all widgets using some layouts (e.g. grid). Has multiple ways of outputting stuff, e.g. into the picture file or into the X window.
