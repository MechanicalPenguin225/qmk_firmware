#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

enum layer_number {
  _BEPO= 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BÉPO */
 [_BEPO] = LAYOUT(
/*,-----------------------------------------------------.                      ,-----------------------------------------------------. */
/*| ESC    |   1    |   2    |   3    |   4    |   5    |                      |   6    |   7    |   8    |   9    |   0    |  DEL   | */
  KC_ESC   , BP_DQUO, BP_LDAQ, BP_RDAQ, BP_LPRN, BP_RPRN,                       BP_AT   , BP_PLUS, BP_MINS, BP_SLSH, BP_ASTR,  KC_DEL,
/*|-----------------------------------------------------|                      |-----------------------------------------------------| */
/*| Tab    |   B    |   É    |   P    |   O    |   È    |                      |   ^    |   V    |   D    |   L    |   J    |  Z     | */
  KC_TAB   ,    BP_B, BP_EACU,    BP_P,    BP_O, BP_EGRV,                        BP_CIRC,    BP_V,    BP_D,    BP_L,    BP_J, BP_Z   ,
/*|-----------------------------------------------------|                      |-----------------------------------------------------| */
/*|LShift  |   A    |   U    |   I    |   E    |   ,    |---------.  ,---------|   C    |   T    |   S    |   R    |   N    |  M     | */
  KC_LSFT  ,  BP_A  , BP_U   , BP_I   , BP_E   ,BP_COMM ,                         BP_C  ,  BP_T  ,  BP_S  ,  BP_R  ,    BP_N, BP_M   ,
/*|-----------------------------------------------------|   Ê     |  |  =      |-----------------------------------------------------| */
/*|LCTRL   |   A`   |   Y    |   X    |   .    |   K    |---------|  |---------|   '    |   Q    |   G    |   H    |   F    | RCtrl  | */
  KC_LCTL  , BP_AGRV, BP_Y   , BP_X   , BP_DOT , BP_K   , BP_ECIR ,     BP_EQL , BP_QUOT, BP_Q   , BP_G   , BP_H   , BP_F   , KC_RCTL,
/* `----------------------------------------------------/         /  \         \-----------------------------------------------------' */
/*                        | LGUI   | LOWER   |LShift  | /ENTER    /    \SPACE    \  |BackSP   |RAISE    | RAlt   | */
                          KC_LGUI ,MO(_LOWER), KC_LSFT, KC_ENT,          KC_SPC,   KC_BSPC   ,MO(_RAISE), KC_RALT
/*                        |        |        |        |/         /      \         \ |         |        |(=AltGr)| */
/*                        `--------------------------''--------'        '---------''--------------------------' */
                  ),

/* LOWER */
 [_LOWER] = LAYOUT(
/*,-----------------------------------------------------.                      ,-----------------------------------------------------. */
/*| ESC    |   1    |   2    |   3    |   4    |   5    |                      |   6    |   7    |   8    |   9    |   0    |  DEL   | */
  KC_F1    ,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
/*|-----------------------------------------------------|                      |-----------------------------------------------------| */
/*| Tab    |   B    |   É    |   P    |   O    |   È    |                      |   ^    |   V    |   D    |   L    |   J    |  Z     | */
  _______  , _______, _______, _______, _______, _______,                        _______, _______, _______,_______ , _______, _______,
/*|-----------------------------------------------------|                      |-----------------------------------------------------| */
/*|LShift  |   A    |   U    |   I    |   E    |   ,    |---------.  ,---------|   C    |   T    |   S    |   R    |   N    |  M     | */
  _______  , _______, _______, _______, _______, _______,                        _______, _______, _______,_______ , _______, _______,
/*|-----------------------------------------------------|   Ê     |  |  =      |-----------------------------------------------------| */
/*|LCTRL   |  *Ç*   |  *W*   |   X    |   .    |   K    |---------|  |---------|   '    |   Q    |   G    |   H    |   F    | RCtrl  | */
  _______  , BP_CCED, BP_W   , _______, _______, _______, _______ ,     _______, _______, _______, _______, _______, _______, _______,
/* `----------------------------------------------------/         /  \         \-----------------------------------------------------' */
/*                        | LGUI   | LOWER   |LShift  | /ENTER    /    \SPACE    \  |BackSP   |RAISE    | RAlt   | */
                            _______, _______, _______, _______,              _______,  _______,  _______, _______
/*                        |        |        |        |/         /       \         \ |         |         |(=AltGr)| */
/*                        `--------------------------''--------'         '---------''--------------------------' */
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
