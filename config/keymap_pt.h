#pragma once


#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ « │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ + │ ' │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ç │ º │ ~ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define PT_BSLS GRAVE   // (backslash)
#define PT_1    N1      // 1
#define PT_2    N2      // 2
#define PT_3    N3      // 3
#define PT_4    N4      // 4
#define PT_5    N5      // 5
#define PT_6    N6      // 6
#define PT_7    N7      // 7
#define PT_8    N8      // 8
#define PT_9    N9      // 9
#define PT_0    N0      // 0
#define PT_QUOT MINUS   // '
#define PT_LDAQ EQUAL   // «

// Row 2
#define PT_Q    Q       // Q
#define PT_W    W       // W
#define PT_E    E       // E
#define PT_R    R       // R
#define PT_T    T       // T
#define PT_Y    Y       // Y
#define PT_U    U       // U
#define PT_I    I       // I
#define PT_O    O       // O
#define PT_P    P       // P
#define PT_PLUS LBKT    // +
#define PT_ACUT RBKT    // ´ (dead)

// Row 3
#define PT_A    A       // A
#define PT_S    S       // S
#define PT_D    D       // D
#define PT_F    F       // F
#define PT_G    G       // G
#define PT_H    H       // H
#define PT_J    J       // J
#define PT_K    K       // K
#define PT_L    L       // L
#define PT_CCED SEMI    // Ç
#define PT_MORD SQT     // º
#define PT_TILD NUHS    // ~ (dead)

// Row 4
#define PT_LABK NUBS    // <
#define PT_Z    Z       // Z
#define PT_X    X       // X
#define PT_C    C       // C
#define PT_V    V       // V
#define PT_B    B       // B
#define PT_N    N       // N
#define PT_M    M       // M
#define PT_COMM COMMA   // ,
#define PT_DOT  DOT     // .
#define PT_MINS FSLH    // -


/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ » │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ * │ ` │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ª │ ^ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define PT_PIPE LS(PT_BSLS) // |
#define PT_EXLM LS(PT_1)    // !
#define PT_DQUO LS(PT_2)    // "
#define PT_HASH LS(PT_3)    // #
#define PT_DLR  LS(PT_4)    // $
#define PT_PERC LS(PT_5)    // %
#define PT_AMPR LS(PT_6)    // &
#define PT_SLSH LS(PT_7)    // /
#define PT_LPRN LS(PT_8)    // (
#define PT_RPRN LS(PT_9)    // )
#define PT_EQL  LS(PT_0)    // =
#define PT_QUES LS(PT_QUOT) // ?
#define PT_RDAQ LS(PT_LDAQ) // »

// Row 2
#define PT_ASTR LS(PT_PLUS) // *
#define PT_GRV  LS(PT_ACUT) // ` (dead)

// Row 3
#define PT_FORD LS(PT_MORD) // ª
#define PT_CIRC LS(PT_TILD) // ^ (dead)

// Row 4
#define PT_RABK LS(PT_LABK) // >
#define PT_SCLN LS(PT_COMM) // ;
#define PT_COLN LS(PT_DOT)  // :
#define PT_UNDS LS(PT_MINS) // _


/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ § │   │   │ { │ [ │ ] │ } │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ ¨ │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define PT_AT   RA(PT_2)    // @
#define PT_PND  RA(PT_3)    // £
#define PT_SECT RA(PT_4)    // §
#define PT_LCBR RA(PT_7)    // {
#define PT_LBRC RA(PT_8)    // [
#define PT_RBRC RA(PT_9)    // ]
#define PT_RCBR RA(PT_0)    // }

// Row 2
#define PT_EURO RA(PT_E)    // €
#define PT_DIAE RA(PT_PLUS) // ¨ (dead)