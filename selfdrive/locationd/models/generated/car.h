#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_3342740945347304146);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_3254297770253673372);
void car_H_mod_fun(double *state, double *out_1584696957082511907);
void car_f_fun(double *state, double dt, double *out_7072747587442436075);
void car_F_fun(double *state, double dt, double *out_2857299389773302034);
void car_h_25(double *state, double *unused, double *out_1847982248035174186);
void car_H_25(double *state, double *unused, double *out_780505296655950289);
void car_h_24(double *state, double *unused, double *out_7774170219520739777);
void car_H_24(double *state, double *unused, double *out_5873700161452235468);
void car_h_30(double *state, double *unused, double *out_4319131791935960117);
void car_H_30(double *state, double *unused, double *out_909844243799190359);
void car_h_26(double *state, double *unused, double *out_3813624145055361035);
void car_H_26(double *state, double *unused, double *out_4522008615530006513);
void car_h_27(double *state, double *unused, double *out_3114397749646119046);
void car_H_27(double *state, double *unused, double *out_3084607555599615270);
void car_h_29(double *state, double *unused, double *out_1323598079144996718);
void car_H_29(double *state, double *unused, double *out_399612899484798175);
void car_h_28(double *state, double *unused, double *out_5906145662794357396);
void car_H_28(double *state, double *unused, double *out_5482011916554328749);
void car_h_31(double *state, double *unused, double *out_1789467280218848164);
void car_H_31(double *state, double *unused, double *out_749859334778989861);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}