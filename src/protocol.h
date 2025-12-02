#pragma once

#include <stdint.h>
#include <time.h>
#include "common.h"

#define MAX_MSG_LEN 256

int format_hb(char *out, size_t n,
              const char *truck_id, double lat, double lon,
              int tcp_port, time_t ts);

int parse_hb(const char *line, TruckInfo *out, time_t *ts);

int format_ping(char *out, size_t n, const PingMsg *p);

int parse_ping(const char *line, PingMsg *out);

int format_ack(char *out, size_t n, const char *truck_id,
               int eta_min, int queued);

/* -------------------------
 * ADD THIS: missing prototype
 * ------------------------- */
int parse_ack(const char *line, char *id, int *eta_min, int *queued);
