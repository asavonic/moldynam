#ifndef __MD_ALGORITHMS_H
#define __MD_ALGORITHMS_H

#include <md_types.h>
#include <md_helpers.h>
#include <math.h>
#include <stdlib.h>

void Lennard_Jones( double r, double epsilon, double sigma, double& force, double& potential );
void verlet( Molecule& mol, double dt );
void euler( Molecule& mol, double dt );
void periodic( Molecule& mol, double3 area_size );
void periodic( std::vector<Molecule>& molecules, double3 area_size );
double distance( Molecule& mol1, Molecule& mol2 );
void simple_interact( Molecule& mol1, Molecule& mol2, double sigma, double eps );
void periodic3d_interact( Molecule& mol1, Molecule& mol2, double3 area_size, double sigma, double eps );


void verlet_step( std::vector<Molecule>& molecules, double dt, LJ_config& config );
void verlet_step_pariodic( std::vector<Molecule>& molecules, double dt, double3 area_size, LJ_config& config );
void euler_step( std::vector<Molecule>& molecules, double dt, LJ_config& config );

#endif