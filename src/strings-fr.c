#include "strings-fr.h"

const char* const HOURS_FR[] = {
  // AM hours
  "minuit",
  "une",
  "deux",
  "trois",
  "quatre",
  "cinq",
  "six",
  "sept",
  "huit",
  "neuf",
  "dix",
  "onze",

  // PM hours
  "midi",
  "une",
  "deux",
  "trois",
  "quatre",
  "cinq",
  "six",
  "sept",
  "huit",
  "neuf",
  "dix",
  "onze"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */

const char* const RELS_FR[] = {
  "*$1 heures",
  "*$1 heures cinq",
  "*$1 heures dix",
  "*$1 heures et quart",
  "*$1 heures vingt",
  "*$1 heures vingt- cinq",
  "*$1 heures et demie",
  "*$2 heures moins 25",
  "*$2 heures moins vingt",
  "*$2 heures moins le 1/4",
  "*$2 heures moins dix",
  "*$2 heures moins cinq"
};

// TODO: In all of the above strings "heures" should "heure" (singular)
// when the printed hour is "une".

const char* const RELS_FR_MID[] = {
  "*$1",
  "*$1 cinq",
  "*$1 dix",
  "*$1 et quart",
  "*$1 vingt",
  "*$1 vingt-cinq",
  "*$1 et demie",
  "*$2 heure moins 25",
  "*$2 heure moins vingt",
  "*$2 heure moins le 1/4",
  "*$2 heure moins dix",
  "*$2 heure moins cinq"
};

const char* const RELS_FR_ELEVEN[] = {
  "*$1 heures",
  "*$1 heures cinq",
  "*$1 heures dix",
  "*$1 heures et quart",
  "*$1 heures vingt",
  "*$1 heures vingt- cinq",
  "*$1 heures et demie",
  "*$2 moins vingt-cinq",
  "*$2 moins vingt",
  "*$2 moins le quart",
  "*$2 moins dix",
  "*$2 moins cinq"
};

const char* const RELS_FR_ONE[] = {
  "*$1 heure",
  "*$1 heure cinq",
  "*$1 heure dix",
  "*$1 heure et quart",
  "*$1 heure vingt",
  "*$1 heure vingt- cinq",
  "*$1 heure et demie",
  "*$2 heures moins 25",
  "*$2 heures moins vingt",
  "*$2 heures moins le 1/4",
  "*$2 heures moins dix",
  "*$2 heures moins cinq"
};

// TODO: A couple of strings are shortened because the idiomatic
// versions would not fit on the screen:
// - "*$2 heures moins vingt-cinq" -> "*$2 moins vingt-cinq"
// - "*$2 heures moins le quart" -> "*$2 moins le quart"
