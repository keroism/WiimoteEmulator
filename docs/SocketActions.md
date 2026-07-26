# Socket Actions

This is the full list of socket actions that can be sent.

## Type `button`

- HOME
- WIIMOTE_UP
- WIIMOTE_DOWN
- WIIMOTE_LEFT
- WIIMOTE_RIGHT
- WIIMOTE_A
- WIIMOTE_B
- WIIMOTE_1
- WIIMOTE_2
- WIIMOTE_PLUS
- WIIMOTE_MINUS
- NUNCHUK_C
- NUNCHUK_Z
- CLASSIC_UP
- CLASSIC_DOWN
- CLASSIC_LEFT
- CLASSIC_RIGHT
- CLASSIC_A
- CLASSIC_B
- CLASSIC_X
- CLASSIC_Y
- CLASSIC_L
- CLASSIC_R
- CLASSIC_ZL
- CLASSIC_ZR
- CLASSIC_PLUS
- CLASSIC_MINUS
- BALANCE_WEIGHT (debug: hold to put a constant 70 kg on the balance board)

## Type `analog_motion`

- IR_UP
- IR_DOWN
- IR_LEFT
- IR_RIGHT
- STEER_LEFT
- STEER_RIGHT
- NUNCHUK_UP
- NUNCHUK_DOWN
- NUNCHUK_LEFT
- NUNCHUK_RIGHT
- CLASSIC_LEFT_STICK_UP
- CLASSIC_LEFT_STICK_DOWN
- CLASSIC_LEFT_STICK_LEFT
- CLASSIC_LEFT_STICK_RIGHT
- MOTIONPLUS_UP
- MOTIONPLUS_DOWN
- MOTIONPLUS_LEFT
- MOTIONPLUS_RIGHT
- MOTIONPLUS_SLOW

## Type `balance`

Unlike the other types, this message carries four floats instead of a status
and an action:

```
balance <tr> <br> <tl> <bl>
```

where each value is the load on one balance board sensor in kilograms
(top-right, bottom-right, top-left, bottom-left). Only used in balance board
mode (`--balance-board`). For example, ~70 kg standing centered:

```
balance 17.5 17.5 17.5 17.5
```

The board's single button (the front power/sync button) is reported as button
A, so use `button 1 WIIMOTE_A` / `button 0 WIIMOTE_A` for menu navigation.

## Type `emulator_control`

- quit
- power_off

## Type `hotplug`

- nunchuk
- classic
- balance_board
- none
