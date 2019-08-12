project('libstemmer', 'c',
        version : '1.0')

pkg = import('pkgconfig')

incdir = include_directories('include')
install_headers('include/libstemmer.h')

lib_sources = ['src_c/stem_UTF_8_arabic.c',
               'src_c/stem_ISO_8859_1_danish.c',
               'src_c/stem_UTF_8_danish.c',
               'src_c/stem_ISO_8859_1_dutch.c',
               'src_c/stem_UTF_8_dutch.c',
               'src_c/stem_ISO_8859_1_english.c',
               'src_c/stem_UTF_8_english.c',
               'src_c/stem_ISO_8859_1_finnish.c',
               'src_c/stem_UTF_8_finnish.c',
               'src_c/stem_ISO_8859_1_french.c',
               'src_c/stem_UTF_8_french.c',
               'src_c/stem_ISO_8859_1_german.c',
               'src_c/stem_UTF_8_german.c',
               'src_c/stem_UTF_8_greek.c',
               'src_c/stem_UTF_8_hindi.c',
               'src_c/stem_ISO_8859_2_hungarian.c',
               'src_c/stem_UTF_8_hungarian.c',
               'src_c/stem_ISO_8859_1_indonesian.c',
               'src_c/stem_UTF_8_indonesian.c',
               'src_c/stem_ISO_8859_1_irish.c',
               'src_c/stem_UTF_8_irish.c',
               'src_c/stem_ISO_8859_1_italian.c',
               'src_c/stem_UTF_8_italian.c',
               'src_c/stem_UTF_8_lithuanian.c',
               'src_c/stem_UTF_8_nepali.c',
               'src_c/stem_ISO_8859_1_norwegian.c',
               'src_c/stem_UTF_8_norwegian.c',
               'src_c/stem_ISO_8859_1_porter.c',
               'src_c/stem_UTF_8_porter.c',
               'src_c/stem_ISO_8859_1_portuguese.c',
               'src_c/stem_UTF_8_portuguese.c',
               'src_c/stem_ISO_8859_2_romanian.c',
               'src_c/stem_UTF_8_romanian.c',
               'src_c/stem_KOI8_R_russian.c',
               'src_c/stem_UTF_8_russian.c',
               'src_c/stem_ISO_8859_1_spanish.c',
               'src_c/stem_UTF_8_spanish.c',
               'src_c/stem_ISO_8859_1_swedish.c',
               'src_c/stem_UTF_8_swedish.c',
               'src_c/stem_UTF_8_tamil.c',
               'src_c/stem_UTF_8_turkish.c',
               'runtime/api.c',
               'runtime/utilities.c',
               'libstemmer/libstemmer.c']
lib = library('stemmer', lib_sources, install : true)
exe = executable('stemwords', 'examples/stemwords.c',
                 include_directories : incdir,
                 link_with : lib)

pkg.generate(libraries : lib,
             subdirs : '.',
             version : '1.0',
             name : 'libstemmer',
             filebase : 'stemmer',
             description : 'A small string processing language')
