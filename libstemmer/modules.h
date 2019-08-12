/* libstemmer/modules.h: List of stemming modules.
 *
 * This file is generated by mkmodules.pl from a list of module names.
 * Do not edit manually.
 *
 * Modules included by this file are: arabic, danish, dutch, english, finnish,
 * french, german, greek, hindi, hungarian, indonesian, irish, italian,
 * lithuanian, nepali, norwegian, porter, portuguese, romanian, russian,
 * spanish, swedish, tamil, turkish
 */

#include "../src_c/stem_UTF_8_arabic.h"
#include "../src_c/stem_ISO_8859_1_danish.h"
#include "../src_c/stem_UTF_8_danish.h"
#include "../src_c/stem_ISO_8859_1_dutch.h"
#include "../src_c/stem_UTF_8_dutch.h"
#include "../src_c/stem_ISO_8859_1_english.h"
#include "../src_c/stem_UTF_8_english.h"
#include "../src_c/stem_ISO_8859_1_finnish.h"
#include "../src_c/stem_UTF_8_finnish.h"
#include "../src_c/stem_ISO_8859_1_french.h"
#include "../src_c/stem_UTF_8_french.h"
#include "../src_c/stem_ISO_8859_1_german.h"
#include "../src_c/stem_UTF_8_german.h"
#include "../src_c/stem_UTF_8_greek.h"
#include "../src_c/stem_UTF_8_hindi.h"
#include "../src_c/stem_ISO_8859_2_hungarian.h"
#include "../src_c/stem_UTF_8_hungarian.h"
#include "../src_c/stem_ISO_8859_1_indonesian.h"
#include "../src_c/stem_UTF_8_indonesian.h"
#include "../src_c/stem_ISO_8859_1_irish.h"
#include "../src_c/stem_UTF_8_irish.h"
#include "../src_c/stem_ISO_8859_1_italian.h"
#include "../src_c/stem_UTF_8_italian.h"
#include "../src_c/stem_UTF_8_lithuanian.h"
#include "../src_c/stem_UTF_8_nepali.h"
#include "../src_c/stem_ISO_8859_1_norwegian.h"
#include "../src_c/stem_UTF_8_norwegian.h"
#include "../src_c/stem_ISO_8859_1_porter.h"
#include "../src_c/stem_UTF_8_porter.h"
#include "../src_c/stem_ISO_8859_1_portuguese.h"
#include "../src_c/stem_UTF_8_portuguese.h"
#include "../src_c/stem_ISO_8859_2_romanian.h"
#include "../src_c/stem_UTF_8_romanian.h"
#include "../src_c/stem_KOI8_R_russian.h"
#include "../src_c/stem_UTF_8_russian.h"
#include "../src_c/stem_ISO_8859_1_spanish.h"
#include "../src_c/stem_UTF_8_spanish.h"
#include "../src_c/stem_ISO_8859_1_swedish.h"
#include "../src_c/stem_UTF_8_swedish.h"
#include "../src_c/stem_UTF_8_tamil.h"
#include "../src_c/stem_UTF_8_turkish.h"

typedef enum {
  ENC_UNKNOWN=0,
  ENC_ISO_8859_1,
  ENC_ISO_8859_2,
  ENC_KOI8_R,
  ENC_UTF_8
} stemmer_encoding_t;

struct stemmer_encoding {
  const char * name;
  stemmer_encoding_t enc;
};
static const struct stemmer_encoding encodings[] = {
  {"ISO_8859_1", ENC_ISO_8859_1},
  {"ISO_8859_2", ENC_ISO_8859_2},
  {"KOI8_R", ENC_KOI8_R},
  {"UTF_8", ENC_UTF_8},
  {0,ENC_UNKNOWN}
};

struct stemmer_modules {
  const char * name;
  stemmer_encoding_t enc; 
  struct SN_env * (*create)(void);
  void (*close)(struct SN_env *);
  int (*stem)(struct SN_env *);
};
static const struct stemmer_modules modules[] = {
  {"ar", ENC_UTF_8, arabic_UTF_8_create_env, arabic_UTF_8_close_env, arabic_UTF_8_stem},
  {"ara", ENC_UTF_8, arabic_UTF_8_create_env, arabic_UTF_8_close_env, arabic_UTF_8_stem},
  {"arabic", ENC_UTF_8, arabic_UTF_8_create_env, arabic_UTF_8_close_env, arabic_UTF_8_stem},
  {"da", ENC_ISO_8859_1, danish_ISO_8859_1_create_env, danish_ISO_8859_1_close_env, danish_ISO_8859_1_stem},
  {"da", ENC_UTF_8, danish_UTF_8_create_env, danish_UTF_8_close_env, danish_UTF_8_stem},
  {"dan", ENC_ISO_8859_1, danish_ISO_8859_1_create_env, danish_ISO_8859_1_close_env, danish_ISO_8859_1_stem},
  {"dan", ENC_UTF_8, danish_UTF_8_create_env, danish_UTF_8_close_env, danish_UTF_8_stem},
  {"danish", ENC_ISO_8859_1, danish_ISO_8859_1_create_env, danish_ISO_8859_1_close_env, danish_ISO_8859_1_stem},
  {"danish", ENC_UTF_8, danish_UTF_8_create_env, danish_UTF_8_close_env, danish_UTF_8_stem},
  {"de", ENC_ISO_8859_1, german_ISO_8859_1_create_env, german_ISO_8859_1_close_env, german_ISO_8859_1_stem},
  {"de", ENC_UTF_8, german_UTF_8_create_env, german_UTF_8_close_env, german_UTF_8_stem},
  {"deu", ENC_ISO_8859_1, german_ISO_8859_1_create_env, german_ISO_8859_1_close_env, german_ISO_8859_1_stem},
  {"deu", ENC_UTF_8, german_UTF_8_create_env, german_UTF_8_close_env, german_UTF_8_stem},
  {"dut", ENC_ISO_8859_1, dutch_ISO_8859_1_create_env, dutch_ISO_8859_1_close_env, dutch_ISO_8859_1_stem},
  {"dut", ENC_UTF_8, dutch_UTF_8_create_env, dutch_UTF_8_close_env, dutch_UTF_8_stem},
  {"dutch", ENC_ISO_8859_1, dutch_ISO_8859_1_create_env, dutch_ISO_8859_1_close_env, dutch_ISO_8859_1_stem},
  {"dutch", ENC_UTF_8, dutch_UTF_8_create_env, dutch_UTF_8_close_env, dutch_UTF_8_stem},
  {"el", ENC_UTF_8, greek_UTF_8_create_env, greek_UTF_8_close_env, greek_UTF_8_stem},
  {"ell", ENC_UTF_8, greek_UTF_8_create_env, greek_UTF_8_close_env, greek_UTF_8_stem},
  {"en", ENC_ISO_8859_1, english_ISO_8859_1_create_env, english_ISO_8859_1_close_env, english_ISO_8859_1_stem},
  {"en", ENC_UTF_8, english_UTF_8_create_env, english_UTF_8_close_env, english_UTF_8_stem},
  {"eng", ENC_ISO_8859_1, english_ISO_8859_1_create_env, english_ISO_8859_1_close_env, english_ISO_8859_1_stem},
  {"eng", ENC_UTF_8, english_UTF_8_create_env, english_UTF_8_close_env, english_UTF_8_stem},
  {"english", ENC_ISO_8859_1, english_ISO_8859_1_create_env, english_ISO_8859_1_close_env, english_ISO_8859_1_stem},
  {"english", ENC_UTF_8, english_UTF_8_create_env, english_UTF_8_close_env, english_UTF_8_stem},
  {"es", ENC_ISO_8859_1, spanish_ISO_8859_1_create_env, spanish_ISO_8859_1_close_env, spanish_ISO_8859_1_stem},
  {"es", ENC_UTF_8, spanish_UTF_8_create_env, spanish_UTF_8_close_env, spanish_UTF_8_stem},
  {"esl", ENC_ISO_8859_1, spanish_ISO_8859_1_create_env, spanish_ISO_8859_1_close_env, spanish_ISO_8859_1_stem},
  {"esl", ENC_UTF_8, spanish_UTF_8_create_env, spanish_UTF_8_close_env, spanish_UTF_8_stem},
  {"fi", ENC_ISO_8859_1, finnish_ISO_8859_1_create_env, finnish_ISO_8859_1_close_env, finnish_ISO_8859_1_stem},
  {"fi", ENC_UTF_8, finnish_UTF_8_create_env, finnish_UTF_8_close_env, finnish_UTF_8_stem},
  {"fin", ENC_ISO_8859_1, finnish_ISO_8859_1_create_env, finnish_ISO_8859_1_close_env, finnish_ISO_8859_1_stem},
  {"fin", ENC_UTF_8, finnish_UTF_8_create_env, finnish_UTF_8_close_env, finnish_UTF_8_stem},
  {"finnish", ENC_ISO_8859_1, finnish_ISO_8859_1_create_env, finnish_ISO_8859_1_close_env, finnish_ISO_8859_1_stem},
  {"finnish", ENC_UTF_8, finnish_UTF_8_create_env, finnish_UTF_8_close_env, finnish_UTF_8_stem},
  {"fr", ENC_ISO_8859_1, french_ISO_8859_1_create_env, french_ISO_8859_1_close_env, french_ISO_8859_1_stem},
  {"fr", ENC_UTF_8, french_UTF_8_create_env, french_UTF_8_close_env, french_UTF_8_stem},
  {"fra", ENC_ISO_8859_1, french_ISO_8859_1_create_env, french_ISO_8859_1_close_env, french_ISO_8859_1_stem},
  {"fra", ENC_UTF_8, french_UTF_8_create_env, french_UTF_8_close_env, french_UTF_8_stem},
  {"fre", ENC_ISO_8859_1, french_ISO_8859_1_create_env, french_ISO_8859_1_close_env, french_ISO_8859_1_stem},
  {"fre", ENC_UTF_8, french_UTF_8_create_env, french_UTF_8_close_env, french_UTF_8_stem},
  {"french", ENC_ISO_8859_1, french_ISO_8859_1_create_env, french_ISO_8859_1_close_env, french_ISO_8859_1_stem},
  {"french", ENC_UTF_8, french_UTF_8_create_env, french_UTF_8_close_env, french_UTF_8_stem},
  {"ga", ENC_ISO_8859_1, irish_ISO_8859_1_create_env, irish_ISO_8859_1_close_env, irish_ISO_8859_1_stem},
  {"ga", ENC_UTF_8, irish_UTF_8_create_env, irish_UTF_8_close_env, irish_UTF_8_stem},
  {"ger", ENC_ISO_8859_1, german_ISO_8859_1_create_env, german_ISO_8859_1_close_env, german_ISO_8859_1_stem},
  {"ger", ENC_UTF_8, german_UTF_8_create_env, german_UTF_8_close_env, german_UTF_8_stem},
  {"german", ENC_ISO_8859_1, german_ISO_8859_1_create_env, german_ISO_8859_1_close_env, german_ISO_8859_1_stem},
  {"german", ENC_UTF_8, german_UTF_8_create_env, german_UTF_8_close_env, german_UTF_8_stem},
  {"gle", ENC_ISO_8859_1, irish_ISO_8859_1_create_env, irish_ISO_8859_1_close_env, irish_ISO_8859_1_stem},
  {"gle", ENC_UTF_8, irish_UTF_8_create_env, irish_UTF_8_close_env, irish_UTF_8_stem},
  {"gre", ENC_UTF_8, greek_UTF_8_create_env, greek_UTF_8_close_env, greek_UTF_8_stem},
  {"greek", ENC_UTF_8, greek_UTF_8_create_env, greek_UTF_8_close_env, greek_UTF_8_stem},
  {"hi", ENC_UTF_8, hindi_UTF_8_create_env, hindi_UTF_8_close_env, hindi_UTF_8_stem},
  {"hin", ENC_UTF_8, hindi_UTF_8_create_env, hindi_UTF_8_close_env, hindi_UTF_8_stem},
  {"hindi", ENC_UTF_8, hindi_UTF_8_create_env, hindi_UTF_8_close_env, hindi_UTF_8_stem},
  {"hu", ENC_ISO_8859_2, hungarian_ISO_8859_2_create_env, hungarian_ISO_8859_2_close_env, hungarian_ISO_8859_2_stem},
  {"hu", ENC_UTF_8, hungarian_UTF_8_create_env, hungarian_UTF_8_close_env, hungarian_UTF_8_stem},
  {"hun", ENC_ISO_8859_2, hungarian_ISO_8859_2_create_env, hungarian_ISO_8859_2_close_env, hungarian_ISO_8859_2_stem},
  {"hun", ENC_UTF_8, hungarian_UTF_8_create_env, hungarian_UTF_8_close_env, hungarian_UTF_8_stem},
  {"hungarian", ENC_ISO_8859_2, hungarian_ISO_8859_2_create_env, hungarian_ISO_8859_2_close_env, hungarian_ISO_8859_2_stem},
  {"hungarian", ENC_UTF_8, hungarian_UTF_8_create_env, hungarian_UTF_8_close_env, hungarian_UTF_8_stem},
  {"id", ENC_ISO_8859_1, indonesian_ISO_8859_1_create_env, indonesian_ISO_8859_1_close_env, indonesian_ISO_8859_1_stem},
  {"id", ENC_UTF_8, indonesian_UTF_8_create_env, indonesian_UTF_8_close_env, indonesian_UTF_8_stem},
  {"ind", ENC_ISO_8859_1, indonesian_ISO_8859_1_create_env, indonesian_ISO_8859_1_close_env, indonesian_ISO_8859_1_stem},
  {"ind", ENC_UTF_8, indonesian_UTF_8_create_env, indonesian_UTF_8_close_env, indonesian_UTF_8_stem},
  {"indonesian", ENC_ISO_8859_1, indonesian_ISO_8859_1_create_env, indonesian_ISO_8859_1_close_env, indonesian_ISO_8859_1_stem},
  {"indonesian", ENC_UTF_8, indonesian_UTF_8_create_env, indonesian_UTF_8_close_env, indonesian_UTF_8_stem},
  {"irish", ENC_ISO_8859_1, irish_ISO_8859_1_create_env, irish_ISO_8859_1_close_env, irish_ISO_8859_1_stem},
  {"irish", ENC_UTF_8, irish_UTF_8_create_env, irish_UTF_8_close_env, irish_UTF_8_stem},
  {"it", ENC_ISO_8859_1, italian_ISO_8859_1_create_env, italian_ISO_8859_1_close_env, italian_ISO_8859_1_stem},
  {"it", ENC_UTF_8, italian_UTF_8_create_env, italian_UTF_8_close_env, italian_UTF_8_stem},
  {"ita", ENC_ISO_8859_1, italian_ISO_8859_1_create_env, italian_ISO_8859_1_close_env, italian_ISO_8859_1_stem},
  {"ita", ENC_UTF_8, italian_UTF_8_create_env, italian_UTF_8_close_env, italian_UTF_8_stem},
  {"italian", ENC_ISO_8859_1, italian_ISO_8859_1_create_env, italian_ISO_8859_1_close_env, italian_ISO_8859_1_stem},
  {"italian", ENC_UTF_8, italian_UTF_8_create_env, italian_UTF_8_close_env, italian_UTF_8_stem},
  {"lit", ENC_UTF_8, lithuanian_UTF_8_create_env, lithuanian_UTF_8_close_env, lithuanian_UTF_8_stem},
  {"lithuanian", ENC_UTF_8, lithuanian_UTF_8_create_env, lithuanian_UTF_8_close_env, lithuanian_UTF_8_stem},
  {"lt", ENC_UTF_8, lithuanian_UTF_8_create_env, lithuanian_UTF_8_close_env, lithuanian_UTF_8_stem},
  {"ne", ENC_UTF_8, nepali_UTF_8_create_env, nepali_UTF_8_close_env, nepali_UTF_8_stem},
  {"nep", ENC_UTF_8, nepali_UTF_8_create_env, nepali_UTF_8_close_env, nepali_UTF_8_stem},
  {"nepali", ENC_UTF_8, nepali_UTF_8_create_env, nepali_UTF_8_close_env, nepali_UTF_8_stem},
  {"nl", ENC_ISO_8859_1, dutch_ISO_8859_1_create_env, dutch_ISO_8859_1_close_env, dutch_ISO_8859_1_stem},
  {"nl", ENC_UTF_8, dutch_UTF_8_create_env, dutch_UTF_8_close_env, dutch_UTF_8_stem},
  {"nld", ENC_ISO_8859_1, dutch_ISO_8859_1_create_env, dutch_ISO_8859_1_close_env, dutch_ISO_8859_1_stem},
  {"nld", ENC_UTF_8, dutch_UTF_8_create_env, dutch_UTF_8_close_env, dutch_UTF_8_stem},
  {"no", ENC_ISO_8859_1, norwegian_ISO_8859_1_create_env, norwegian_ISO_8859_1_close_env, norwegian_ISO_8859_1_stem},
  {"no", ENC_UTF_8, norwegian_UTF_8_create_env, norwegian_UTF_8_close_env, norwegian_UTF_8_stem},
  {"nor", ENC_ISO_8859_1, norwegian_ISO_8859_1_create_env, norwegian_ISO_8859_1_close_env, norwegian_ISO_8859_1_stem},
  {"nor", ENC_UTF_8, norwegian_UTF_8_create_env, norwegian_UTF_8_close_env, norwegian_UTF_8_stem},
  {"norwegian", ENC_ISO_8859_1, norwegian_ISO_8859_1_create_env, norwegian_ISO_8859_1_close_env, norwegian_ISO_8859_1_stem},
  {"norwegian", ENC_UTF_8, norwegian_UTF_8_create_env, norwegian_UTF_8_close_env, norwegian_UTF_8_stem},
  {"por", ENC_ISO_8859_1, portuguese_ISO_8859_1_create_env, portuguese_ISO_8859_1_close_env, portuguese_ISO_8859_1_stem},
  {"por", ENC_UTF_8, portuguese_UTF_8_create_env, portuguese_UTF_8_close_env, portuguese_UTF_8_stem},
  {"porter", ENC_ISO_8859_1, porter_ISO_8859_1_create_env, porter_ISO_8859_1_close_env, porter_ISO_8859_1_stem},
  {"porter", ENC_UTF_8, porter_UTF_8_create_env, porter_UTF_8_close_env, porter_UTF_8_stem},
  {"portuguese", ENC_ISO_8859_1, portuguese_ISO_8859_1_create_env, portuguese_ISO_8859_1_close_env, portuguese_ISO_8859_1_stem},
  {"portuguese", ENC_UTF_8, portuguese_UTF_8_create_env, portuguese_UTF_8_close_env, portuguese_UTF_8_stem},
  {"pt", ENC_ISO_8859_1, portuguese_ISO_8859_1_create_env, portuguese_ISO_8859_1_close_env, portuguese_ISO_8859_1_stem},
  {"pt", ENC_UTF_8, portuguese_UTF_8_create_env, portuguese_UTF_8_close_env, portuguese_UTF_8_stem},
  {"ro", ENC_ISO_8859_2, romanian_ISO_8859_2_create_env, romanian_ISO_8859_2_close_env, romanian_ISO_8859_2_stem},
  {"ro", ENC_UTF_8, romanian_UTF_8_create_env, romanian_UTF_8_close_env, romanian_UTF_8_stem},
  {"romanian", ENC_ISO_8859_2, romanian_ISO_8859_2_create_env, romanian_ISO_8859_2_close_env, romanian_ISO_8859_2_stem},
  {"romanian", ENC_UTF_8, romanian_UTF_8_create_env, romanian_UTF_8_close_env, romanian_UTF_8_stem},
  {"ron", ENC_ISO_8859_2, romanian_ISO_8859_2_create_env, romanian_ISO_8859_2_close_env, romanian_ISO_8859_2_stem},
  {"ron", ENC_UTF_8, romanian_UTF_8_create_env, romanian_UTF_8_close_env, romanian_UTF_8_stem},
  {"ru", ENC_KOI8_R, russian_KOI8_R_create_env, russian_KOI8_R_close_env, russian_KOI8_R_stem},
  {"ru", ENC_UTF_8, russian_UTF_8_create_env, russian_UTF_8_close_env, russian_UTF_8_stem},
  {"rum", ENC_ISO_8859_2, romanian_ISO_8859_2_create_env, romanian_ISO_8859_2_close_env, romanian_ISO_8859_2_stem},
  {"rum", ENC_UTF_8, romanian_UTF_8_create_env, romanian_UTF_8_close_env, romanian_UTF_8_stem},
  {"rus", ENC_KOI8_R, russian_KOI8_R_create_env, russian_KOI8_R_close_env, russian_KOI8_R_stem},
  {"rus", ENC_UTF_8, russian_UTF_8_create_env, russian_UTF_8_close_env, russian_UTF_8_stem},
  {"russian", ENC_KOI8_R, russian_KOI8_R_create_env, russian_KOI8_R_close_env, russian_KOI8_R_stem},
  {"russian", ENC_UTF_8, russian_UTF_8_create_env, russian_UTF_8_close_env, russian_UTF_8_stem},
  {"spa", ENC_ISO_8859_1, spanish_ISO_8859_1_create_env, spanish_ISO_8859_1_close_env, spanish_ISO_8859_1_stem},
  {"spa", ENC_UTF_8, spanish_UTF_8_create_env, spanish_UTF_8_close_env, spanish_UTF_8_stem},
  {"spanish", ENC_ISO_8859_1, spanish_ISO_8859_1_create_env, spanish_ISO_8859_1_close_env, spanish_ISO_8859_1_stem},
  {"spanish", ENC_UTF_8, spanish_UTF_8_create_env, spanish_UTF_8_close_env, spanish_UTF_8_stem},
  {"sv", ENC_ISO_8859_1, swedish_ISO_8859_1_create_env, swedish_ISO_8859_1_close_env, swedish_ISO_8859_1_stem},
  {"sv", ENC_UTF_8, swedish_UTF_8_create_env, swedish_UTF_8_close_env, swedish_UTF_8_stem},
  {"swe", ENC_ISO_8859_1, swedish_ISO_8859_1_create_env, swedish_ISO_8859_1_close_env, swedish_ISO_8859_1_stem},
  {"swe", ENC_UTF_8, swedish_UTF_8_create_env, swedish_UTF_8_close_env, swedish_UTF_8_stem},
  {"swedish", ENC_ISO_8859_1, swedish_ISO_8859_1_create_env, swedish_ISO_8859_1_close_env, swedish_ISO_8859_1_stem},
  {"swedish", ENC_UTF_8, swedish_UTF_8_create_env, swedish_UTF_8_close_env, swedish_UTF_8_stem},
  {"ta", ENC_UTF_8, tamil_UTF_8_create_env, tamil_UTF_8_close_env, tamil_UTF_8_stem},
  {"tam", ENC_UTF_8, tamil_UTF_8_create_env, tamil_UTF_8_close_env, tamil_UTF_8_stem},
  {"tamil", ENC_UTF_8, tamil_UTF_8_create_env, tamil_UTF_8_close_env, tamil_UTF_8_stem},
  {"tr", ENC_UTF_8, turkish_UTF_8_create_env, turkish_UTF_8_close_env, turkish_UTF_8_stem},
  {"tur", ENC_UTF_8, turkish_UTF_8_create_env, turkish_UTF_8_close_env, turkish_UTF_8_stem},
  {"turkish", ENC_UTF_8, turkish_UTF_8_create_env, turkish_UTF_8_close_env, turkish_UTF_8_stem},
  {0,ENC_UNKNOWN,0,0,0}
};
static const char * algorithm_names[] = {
  "arabic", 
  "danish", 
  "dutch", 
  "english", 
  "finnish", 
  "french", 
  "german", 
  "greek", 
  "hindi", 
  "hungarian", 
  "indonesian", 
  "irish", 
  "italian", 
  "lithuanian", 
  "nepali", 
  "norwegian", 
  "porter", 
  "portuguese", 
  "romanian", 
  "russian", 
  "spanish", 
  "swedish", 
  "tamil", 
  "turkish", 
  0
};
