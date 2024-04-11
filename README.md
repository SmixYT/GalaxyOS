# GalaxyOS

## Introduction

GalaxyOS is a new operating system designed to provide an innovative user experience and enhance productivity on mobile devices and personal computers. Built on modern technologies, GalaxyOS offers unique features and capabilities to meet the needs of both regular users and developers.

## Compile commmands
`nasm -f elf32 kernel.asm -o kasm.o`
`gcc -m32 -c kernel.c -o kc.o`
`ld -m elf_i386 -T link.ld -o kernel.bin kasm.o kc.o`

## Start on QEMU
`qemu-system-i386 -kernel kernel.bin`

## Key Features
### 1. Intuitive Interface
GalaxyOS features a modern and intuitive interface that simplifies navigation and access to device functions.
### 2. High Performance

Thanks to optimization and efficient resource management, GalaxyOS ensures fast application performance and smooth user interface operation.
### 3. Powerful Functional Capabilities

GalaxyOS offers a wide range of functional capabilities, including a multitude of integrated applications, multimedia support, and interface customization options.

GalaxyOS is a modern operating system that combines high performance, ease of use, and extensive functional capabilities. With continuous introduction of new features and improvement of user experience, GalaxyOS aims to become the top choice for all types of users.
