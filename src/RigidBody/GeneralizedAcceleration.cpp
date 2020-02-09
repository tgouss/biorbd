#define BIORBD_API_EXPORTS
#include "RigidBody/GeneralizedAcceleration.h"

#include "RigidBody/Joints.h"

biorbd::rigidbody::GeneralizedAcceleration::GeneralizedAcceleration()
{

}

biorbd::rigidbody::GeneralizedAcceleration::GeneralizedAcceleration(
        const biorbd::rigidbody::GeneralizedAcceleration &Q) :
    biorbd::utils::Vector(Q)
{

}

#ifdef BIORBD_USE_CASADI_MATH

biorbd::rigidbody::GeneralizedAcceleration::GeneralizedAcceleration(
        const RigidBodyDynamics::Math::VectorNd &v) :
    biorbd::utils::Vector (v)
{

}

#endif

biorbd::rigidbody::GeneralizedAcceleration::GeneralizedAcceleration(
        unsigned int nQddot) :
    biorbd::utils::Vector(nQddot)
{

}

biorbd::rigidbody::GeneralizedAcceleration::GeneralizedAcceleration(
        const biorbd::rigidbody::Joints &j) :
    biorbd::utils::Vector(j.nbQ()){

}

biorbd::rigidbody::GeneralizedAcceleration::~GeneralizedAcceleration()
{

}


#ifdef BIORBD_USE_CASADI_MATH

void biorbd::rigidbody::GeneralizedAcceleration::operator=(
        const biorbd::utils::Vector &other)
{
    this->biorbd::utils::Vector::operator=(other);
}

void biorbd::rigidbody::GeneralizedAcceleration::operator=(
        const MX_Xd_SubMatrix &other)
{
    this->biorbd::utils::Vector::operator=(other);
}

#endif
