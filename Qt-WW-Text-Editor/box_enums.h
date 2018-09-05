#ifndef BOX_ENUMS_H
#define BOX_ENUMS_H

enum BoxType {
  DIALOG,
  SPECIAL,
  SIGN,
  NONE,
  STONE,
  LETTER,
  ITEM_GET,
  HINT,
  CENTERED_TEXT,
  WIND_WAKER_SONG
};

enum BoxPosition {
    TOP_1,
    TOP_2,
    CENTER,
    BOTTOM_1,
    BOTTOM_2
};

enum DrawStyle {
    BY_CHAR_SKIPPABLE,
    INSTANT,
    BY_CHAR
};

#endif // BOX_ENUMS_H
