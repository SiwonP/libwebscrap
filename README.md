# libwebscrap

This library, entirely written in C99 implements a quick webscraper.

## Getting Started

### Prerequisites

Since this library is written in C, a C compiler such as `gcc` or `clang` is
required. The build in currently managed by `cmake` but it might include an
`autotools` support in the future.

This library also rely on `libcurl`.

### Documentation Prerequisites

There's no current documentation of the library, but will most likely be handle
by `doxygen`.

## Installing

### Building from source

This project will provide a dynamic library as well as a CLI.

Anyway, here are the instruction to build both from the sources.

```
git clone https://www.github.com/SiwonP/libwebscrap.git
cd libwebscrap
mkdir build
cd build
cmake -DBUILD_TYPE=RELEASE ..
make
```

### Binaries

The binaries of the CLI are not currently availables since the project has not
yet reached a stable version.

### Packages

Same explanation as for the binaries. However, chances are that this lirary will
be available through the traditionnal packages managers such as homebrew, ports,
apt ...

## Running the tests

No tests are written yet.

## Building the documentation

No doc is available yet.

## Authors

- Simon Petit - Initial contributer

## License

This library and CLI is under the GNU General Public License v3,
see[LICENSE](https://www.github.com/SiwonP/libwebscrap/blob/master/LICENSE) for
details.
