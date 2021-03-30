/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "",   /* after initialization */
    [INPUT] = "",  /* during input */
    [FAILED] = "", /* wrong password */
    [CAPS] = "",   /* CapsLock on */
};

ResourcePref resources[] = {
    {"color0", STRING, &colorname[INIT]},
    {"color8", STRING, &colorname[INPUT]},
    {"color9", STRING, &colorname[FAILED]},
    {"color3", STRING, &colorname[CAPS]},
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
