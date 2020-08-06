#ifndef EXAMPLE_CODE_H
#define EXAMPLE_CODE_H

#include <stdio.h>
#include <iostream>

#include <ros/ros.h>

#include <Eigen/Core>
#include <glog/logging.h>

// for ceres
#include "ceres/ceres.h"
#include "ceres/cubic_interpolation.h"

// for g2o
#include <g2o/core/sparse_optimizer.h>
#include <g2o/core/block_solver.h>
#include <g2o/core/robust_kernel.h>
#include <g2o/core/robust_kernel_impl.h>
#include <g2o/core/optimization_algorithm_levenberg.h>
#include <g2o/solvers/cholmod/linear_solver_cholmod.h>
#include <g2o/types/slam3d/se3quat.h>
#include <g2o/types/sba/types_six_dof_expmap.h>

using namespace std;


#endif