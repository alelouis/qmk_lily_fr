#include <stdint.h>
#include QMK_KEYBOARD_H
#include "keymap_french.h"

enum layer_number {
    _BASE = 0,
    _SPECIAL,
    _GAMING,
};

enum custom_keycodes {
    FR_LSPO,
    FR_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | ESC  |   &  |   é  |   "  |   '  |   (  |                    |   -  |   è  |   _  |   ç  |   à  |  ^   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   A  |   Z  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |Enter |   Q  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   M  |BSpace|
     * |------+------+------+------+------+------|  Meh  |    | Hyper |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   ,  |   ;  |   :  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   |LCtrl | LGUI | LAlt | / TT(1) /       \Space \  |RCtrl | RGUI | RAlt |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [_BASE] = LAYOUT(KC_ESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_CIRC, KC_TAB, FR_A, FR_Z, FR_E, FR_R, FR_T, FR_Y, FR_U, FR_I, FR_O, FR_P, FR_MINS, KC_ENTER, FR_Q, FR_S, FR_D, FR_F, FR_G, FR_H, FR_J, FR_K, FR_L, FR_M, KC_BSPC, FR_LSPO, FR_W, FR_X, FR_C, FR_V, FR_B, KC_MEH, KC_HYPR, FR_N, FR_COMM, FR_SCLN, FR_COLN, KC_SLSH, FR_RSPC, KC_LCTL, KC_LGUI, KC_LALT, TT(_SPECIAL), KC_SPACE, KC_RCTL, KC_RGUI, KC_RALT),

    /* SPECIAL
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  | F9   | F10  | TG(2)|
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   €  |   ^  |   {  |   }  |   %  |                    |      |      |  Up  |   '  |   "  |   `  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   $  |   ~  |   (  |   )  |   @  |-------.    ,-------| Home | Left | Down |Right | End  |      |
     * |------+------+------+------+------+------| PgDo  |    | PgUp  |------+------+------+------+------+------|
     * |      |      |   |  |   [  |   ]  |   #  |-------|    |-------|   -  |   +  |   =  |   *  |   !  |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   |      |   <  |   >  | /       /       \      \  |      |      |      |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [_SPECIAL] = LAYOUT(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, TG(2), _______, FR_EURO, FR_CIRC, FR_LCBR, FR_RCBR, FR_PERC, _______, _______, KC_UP, FR_QUOT, FR_DQUO, FR_GRV, _______, FR_DLR, FR_TILD, FR_LPRN, FR_RPRN, FR_AT, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, _______, _______, _______, FR_PIPE, FR_LBRC, FR_RBRC, FR_HASH, KC_PGDN, KC_PGUP, FR_MINS, FR_PLUS, FR_EQL, FR_ASTR, FR_EXLM, _______, _______, FR_SUP2, FR_RABK, _______, _______, _______, _______, _______),

    /* BASE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | ESC  |   &  |   é  |   "  |   '  |   (  |                    |   -  |   è  |   _  |   ç  |   à  | TG(2)|
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   A  |   Z  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   Q  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   M  |BSpace|
     * |------+------+------+------+------+------|   P   |    | Hyper |------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   ,  |   ;  |   :  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *                   |LAlt | LGUI | LCtrl | / Space /       \Enter \  |RCtrl | RGUI | RAlt |
     *                   |      |      |      |/       /         \      \ |      |      |      |
     *                   `----------------------------'           '------''--------------------'
     */
    [_GAMING] = LAYOUT(KC_ESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, TG(2), KC_TAB, FR_A, FR_Z, FR_E, FR_R, FR_T, FR_Y, FR_U, FR_I, FR_O, FR_P, FR_MINS, XXXXXXX, FR_Q, FR_S, FR_D, FR_F, FR_G, FR_H, FR_J, FR_K, FR_L, FR_M, KC_BSPC, FR_LSPO, FR_W, FR_X, FR_C, FR_V, FR_B, FR_P, KC_HYPR, FR_N, FR_COMM, FR_SCLN, FR_COLN, KC_SLSH, FR_RSPC, KC_LALT, KC_LGUI, KC_LCTL, KC_SPACE, KC_ENTER, KC_RCTL, KC_RGUI, KC_RALT)};

// Combo definitions
const uint16_t PROGMEM test_combo1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_U, KC_I, COMBO_END};
combo_t                key_combos[]  = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, RGUI(KC_SPACE)),
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void        set_keylog(uint16_t keycode, keyrecord_t *record);
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
        // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        // oled_write_ln(read_host_led_state(), false);
        // oled_write_ln(read_timelog(), false);
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

    switch (keycode) {
        case FR_LSPO:
            perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_LPRN);
            return false;
        case FR_RSPC:
            perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_RPRN);
            return false;
    }
    return true;
}
