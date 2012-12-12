/**
 * PURPOSE:
 * ()
 *
 * LIBRARY DEPENDENCIES:
 * ((inputAbstraction/src/ThrustMaster.cpp))
 */

#ifndef _THRUST_MASTER_HH_
#define _THRUST_MASTER_HH_

#include "SingleInput.hh"

namespace idf {

/**
 * represents a ThrustMaster hand controller's input layout
 *
 * @author Derek Bankieris
 */
class ThrustMaster {

    public:

    /** constructor */
    ThrustMaster();

    /** forward-backward pivoting */
    SingleInput forwardBackwardPivot;

    /** left-right pivoting */
    SingleInput leftRightPivot;

    /** twisting */
    SingleInput twist;

    /** forward-backward translation */
    SingleInput forwardBackwardTranslation;

    /** left-right translation */
    SingleInput leftRightTranslation;

    /** up-down translation */
    SingleInput upDownTranslation;

    /** the left button */
    SingleInput leftButton;

    /** the middle button */
    SingleInput middleButton;

    /** the right button */
    SingleInput rightButton;

    /** the trigger */
    SingleInput trigger;

};

}

#endif