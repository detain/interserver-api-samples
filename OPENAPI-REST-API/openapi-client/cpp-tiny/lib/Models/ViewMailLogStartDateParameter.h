
/*
 * ViewMailLog_startDate_parameter.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ViewMailLog_startDate_parameter_H_
#define TINY_CPP_CLIENT_ViewMailLog_startDate_parameter_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ViewMailLog_startDate_parameter{
public:

    /*! \brief Constructor.
	 */
    ViewMailLog_startDate_parameter();
    ViewMailLog_startDate_parameter(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ViewMailLog_startDate_parameter();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_ViewMailLog_startDate_parameter_H_ */
