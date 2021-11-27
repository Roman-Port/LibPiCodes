#pragma once
#include <stdint.h>

struct picodes_station_t
{
    const char* callsign;
    uint16_t freq;
    uint32_t facility;
    const char* city;
    uint16_t state;
    float lat;
    float lon;
};

picodes_station_t* picodes_get_station(uint16_t picode);
