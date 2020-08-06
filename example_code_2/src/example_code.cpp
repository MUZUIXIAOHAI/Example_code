#include "example_code.h"


int main(int argc, char** argv){

    LOG(INFO) << "example here!" << std::endl;
    LOG(INFO) << Eigen::Vector3d::Identity();

    return 0;
}
