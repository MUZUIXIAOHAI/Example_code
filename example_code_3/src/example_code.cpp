#include "example_code.h"


int main(int argc, char** argv){

    //cere优化的配置参数
    ceres::Solver::Options options;
    ceres::Solver::Summary  summary;

    std::cout << summary.BriefReport() << std::endl; 

    LOG(INFO) << "example here!" << std::endl;
    LOG(INFO) << Eigen::Vector3d::Identity();

    return 0;
}
