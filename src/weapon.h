#ifndef WEAPON_H
#define WEAPON_H

#include <math.h>

#include "config.h"
#include "player.h"
#include "sound.h"
#include "video.h"

#define N_WEAPONS               10
#define WEP_SPACEMOD            42
#define WEP_SMALL_INIT_OFFSET   4    /* Offset between score and icon */
#define WEP_SMALL_PADDING       25   /* Padding between small weapon icons */
#define PARROWSELECT_MOD_Y      20
#define PARROWSELECT_MOD_X      14
#define WEP_NONACTIVE           -999
#define INV_TIME                250  /* Time one needs to be invincible after
                                        using a potential suicide weapon */

#define DURATION_LIGHTNINGSPEED 1300
#define DURATION_FROSTWAVE      1600
#define DURATION_SHARPTURN      200
#define DURATION_CONFUSION      600
#define DURATION_MOLE           350
#define DURATION_GHOSTWALK      2100
#define DURATION_TRON           3000
#define DURATION_CHILIRUN       1500

enum weapons {
    WEP_LIGHTNINGSPEED = 0,
    WEP_FROSTWAVE,
    WEP_CONFUSION,
    WEP_SHARPTURN,
    WEP_TIMESTEP,
    WEP_MOLE,
    WEP_WARP,
    WEP_GHOST,
    WEP_TRON,
    WEP_CHILI_RUN
};

struct weapon {
    int (*func)(struct player*, bool);
    int charges;
    char *name;
    char *desc1;
    char *desc2;
};

extern bool activeFreeze;
extern bool activeConfusion;
extern bool activeTron;
extern bool activeChilirun;

int wepLightningspeed(struct player *p, bool on);
int wepFrostwave(struct player *p, bool on);
int wepSharpturn(struct player *p, bool on);
int wepConfusion(struct player *p, bool on);
int wepTimestep(struct player *p, bool on);
int wepMole(struct player *p, bool on);
int wepWarp(struct player *p, bool on);
int wepGhost(struct player *p, bool on);
int wepTron(struct player *p, bool on);
int wepChilirun(struct player *p, bool on);

extern struct weapon wep_list[N_WEAPONS];

#endif
