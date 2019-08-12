# libstemmer

This is the distribution for the C libstemmer library from
[Snowball](https://snowballstem.org/). Further information about
the library can be found in [README.old](README.old).

This version of the library has been modified to use the Meson build system
for compiling and installing.

## Compiling

```bash
meson build
cd build
ninja
sudo ninja install
```

## License

As with the [original code](https://github.com/snowballstem/snowball), this code
is made available under the BSD 3-clause license (see [LICENSE](LICENSE)).
