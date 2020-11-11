# slock - simple screen locker
simple screen locker utility for X.

> This fork is a maintained version of slock intended for use in my
> [dotfiles](https://github.com/bossley9/dotfiles). You can view the source
> hosted by suckless [on their own git server](https://git.suckless.org/slock).

## Table of Contents
1. [Installation](#installation)
2. [Running](#running)
3. [Patches](#patches)

## Installation <a name="installation"></a>
In order to build st you need the `Xlib` header files. For this specific fork of slock, you
will also need the `envsubst` utility in order to compile in template variables.

As mentioned previously, this fork makes use of the `envsubst` package to insert system
environment variables into the configuation. The template file named is `template.config.h`
for visibility.

    envsubst < template.config.h > config.h
    sudo make clean install

## Running <a name="running"></a>
After building, running the locker is as simple as
invoking the slock command. To get out of it, enter your password.

    slock

See the man page for additional details on usage.

## Patches <a name="patches"></a>
To apply patches to any suckless tool, download patches from the suckless website (or make
your own) and run the following command, making sure to specify the file being changed as
`template.config.h` instead of the standard `config.def.h`.
```
patch patchName.diff
```

In addition to my own personal tweaks and settings, below is a list of patches
I have included in my slock build.

