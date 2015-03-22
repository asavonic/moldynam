#ifndef __MD_ALGORITHMS_H
#define __MD_ALGORITHMS_H

#include <md_types.h>
#include <md_helpers.h>
#include <math.h>
#include <stdlib.h>

#include "dll_defines.h"
MOLDINAM_EXPORT void Lennard_Jones(double r, double epsilon, double sigma, double& force, double& potential);
MOLDINAM_EXPORT void verlet(Molecule& mol, double dt);
MOLDINAM_EXPORT void euler(Molecule& mol, double dt);
MOLDINAM_EXPORT void periodic(Molecule& mol, double3 area_size);
MOLDINAM_EXPORT void periodic(std::vector<Molecule>& molecules, double3 area_size);
MOLDINAM_EXPORT double distance(Molecule& mol1, Molecule& mol2);
MOLDINAM_EXPORT void simple_interact(Molecule& mol1, Molecule& mol2, double sigma, double eps);
MOLDINAM_EXPORT void periodic3d_interact(Molecule& mol1, Molecule& mol2, double3 area_size, double sigma, double eps);
MOLDINAM_EXPORT void verlet_step(std::vector<Molecule>& molecules, double dt, LJ_config& config);
MOLDINAM_EXPORT void verlet_step_pariodic(std::vector<Molecule>& molecules, double dt, double3 area_size, LJ_config& config);
MOLDINAM_EXPORT void euler_step(std::vector<Molecule>& molecules, double dt, LJ_config& config);
#endif
