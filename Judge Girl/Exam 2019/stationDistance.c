#include <stdio.h>

int stationDistance(int R_distance[],int G_distance[],int B_distance[],int G_origin,int G_destination,int startStation[],int endStation[]) {
  int Rindex = 0, Gindex = 0, Bindex = 0, sum = 0, i, j, k, count = 0;

  while (G_distance[Gindex] != 0) {
    Gindex++;
    count++;
  }

  if (startStation[0] == 0) {
    if (endStation[0] == 0) {
      if (startStation[1] != endStation[1]) {
        if (startStation[1] < endStation[1]) {
          for (i = startStation[1]; i < endStation; i++) {
            sum += R_distance[i];
          }
        } else {
          for (i = endStation[1]; i < startStation[1]; i++) {
            sum += R_distance[i];
          }
        }
      } else {
        sum += 0;
      }
    } else if (endStation[0] == 1) {
      if (startStation[1] != G_origin) {
        if (startStation[1] < G_origin) {
          for (i = startStation[1]; i < G_origin; i++) {
            sum += R_distance[i];
          }
        } else {
          for (i = G_origin; i < startStation[1]; i++) {
            sum += R_distance[i];
          }
        }
      } else {
        sum += 0;
      }
      if (G_origin != endStation[1]) {
        for (j = 0; j < endStation[1]; j++) {
          sum += G_distance[j];
        }
      } else {
        sum += 0;
      }
    } else {
      if (startStation[1] != G_origin) {
        if (startStation[1] < G_origin) {
          for (i = startStation[1]; i < G_origin; i++) {
            sum += R_distance[i];
          }
        } else {
          for (i = G_origin; i < startStation[1]; i++) {
            sum += R_distance[i];
          }
        }
      } else {
        sum += 0;
      }
      for (j = 0; j < count; j++) {
        sum += G_distance[j];
      }
      if (G_destination != endStation[1]) {
        if (G_destination < endStation[1]) {
          for (k = G_destination; k < endStation[1]; k++) {
            sum += B_distance[k];
          }
        } else {
          for (k = endStation[1]; k < G_destination; k++) {
            sum += B_distance[k];
          }
        }
      } else {
        sum += 0;
      }
    }
  } else if (startStation[0] == 1) {
    if (endStation[0] == 0) {
      if (startStation[1] != 0) {
        for (i = 0; i < startStation[1]; i++) {
          sum += G_distance[i];
        }
      } else {
        sum += 0;
      }
      if(endStation[1] != G_origin) {
        if (endStation[1] < G_origin) {
          for (j = endStation[1]; j < G_origin; j++) {
            sum += R_distance[j];
          }
        } else {
          for(j = G_origin; j < endStation[1]; j++) {
            sum += R_distance;
          }
        }
      } else {
        sum += 0;
      }
    } else if (endStation[0] == 1) {
      if (startStation[1] != endStation[1]) {
        if (startStation[1] < endStation[1]) {
          for (i = startStation[1]; i < endStation[1]; i++) {
            sum += G_distance[i];
          }
        } else {
          for (i = endStation[1]; i < startStation[1]; i++) {
            sum += G_distance[i];
          }
        }
      } else {
        sum += 0;
      }
    } else {
      if (startStation[1] != G_destination) {
        if (startStation[1] < G_destination) {
          for (i = startStation[1]; i < G_destination; i++) {
            sum += G_distance[i];
          }
        } else {
          for (i = G_destination; i < startStation[i]; i++) {
            sum += G_distance[i];
          }
        }
      } else {
        sum += 0;
      }
      if (endStation[1] != G_destination) {
        if (endStation[1] < G_destination) {
          for (j = endStation[1]; j < G_destination; j++) {
            sum += B_distance[j];
          }
        } else {
          for (j = G_destination; j < endStation[1]; j++) {
            sum += B_distance[j];
          }
        }
      } else {
        sum += 0;
      }
    }
  } else {
    if (endStation[0] == 0) {
      if (startStation[1] != G_destination) {
        if (startStation[1] < G_destination) {
          for (i = startStation[1]; i < G_destination; i ++) {
            sum += B_distance[i];
          }
        } else {
          for (i = G_destination; i < startStation[1]; i++) {
            sum += B_distance[i];
          }
        }
      } else {
        sum += 0;
      }
      for (j = 0; j < count; j++) {
        sum += G_distance[j];
      }
      if (endStation[1] != G_origin) {
        if (endStation[1] < G_origin) {
          for (k = endStation[1]; k < G_origin; k++) {
            sum += R_distance[k];
          }
        } else {
          for (k = G_origin; k < endStation[1]; k++) {
            sum += R_distance[k];
          }
        }
      } else {
        sum += 0;
      }
    } else if (endStation[0] == 1) {
      if (startStation[1] != G_destination) {
        if (startStation[1] < G_destination) {
          for (i = startStation[1]; i < G_destination; i++) {
            sum += B_distance[i];
          }
        } else {
          for (i = G_destination; i < startStation[1]; i++) {
            sum += B_distance[i];
          }
        }
      } else {
        sum += 0;
      }
      if (endStation[1] != count) {
        for (j = endStation[1]; j < count; j++) {
          sum += G_distance[j];
        }
      } else {
        sum += 0;
      }
    } else {
      if (startStation[1] != G_destination) {
        if (startStation[1] < G_destination) {
          for (i = startStation[1]; i < G_destination; i++) {
            sum += B_distance[i];
          }
        } else {
          for (i = G_destination; i < startStation[1]; i++) {
            sum += B_distance[i];
          }
        }
        for (j = 0; j < count; j++) {
          sum += G_distance[j];
        }
        if (endStation[1] != G_origin) {
          if (endStation[1] < G_origin) {
            for (k = endStation[1]; k < G_origin; k++) {
              sum += R_distance[k];
            }
          } else {
            for (k = G_origin; k < endStation[1]; k++) {
              sum += R_distance[k];
            }
          }
        } else {
          sum += 0;
        }
      } else {
        sum += 0;
      }
    }
  }
  return sum;
}
