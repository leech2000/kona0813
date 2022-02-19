#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_2620553608384758536);
void live_err_fun(double *nom_x, double *delta_x, double *out_1692580191345920575);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_2846535014035290138);
void live_H_mod_fun(double *state, double *out_1037182408429431877);
void live_f_fun(double *state, double dt, double *out_2137560961494755797);
void live_F_fun(double *state, double dt, double *out_6574839878510731598);
void live_h_4(double *state, double *unused, double *out_46734123172477316);
void live_H_4(double *state, double *unused, double *out_6046760551020171416);
void live_h_9(double *state, double *unused, double *out_5882536695801919441);
void live_H_9(double *state, double *unused, double *out_5805570904390580771);
void live_h_10(double *state, double *unused, double *out_7678443719860928385);
void live_H_10(double *state, double *unused, double *out_3496812261001055004);
void live_h_12(double *state, double *unused, double *out_8201116885482423398);
void live_H_12(double *state, double *unused, double *out_5425661525972577749);
void live_h_31(double *state, double *unused, double *out_7878955341665566813);
void live_H_31(double *state, double *unused, double *out_2680098493647564040);
void live_h_32(double *state, double *unused, double *out_5649373630232964442);
void live_H_32(double *state, double *unused, double *out_8851781076367871220);
void live_h_13(double *state, double *unused, double *out_7995445054210101818);
void live_H_13(double *state, double *unused, double *out_8147765269172936844);
void live_h_14(double *state, double *unused, double *out_5882536695801919441);
void live_H_14(double *state, double *unused, double *out_5805570904390580771);
void live_h_33(double *state, double *unused, double *out_5090531450441938564);
void live_H_33(double *state, double *unused, double *out_470458510991293564);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}