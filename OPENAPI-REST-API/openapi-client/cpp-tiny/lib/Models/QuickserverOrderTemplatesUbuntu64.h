
/*
 * QuickserverOrderTemplatesUbuntu64.h
 *
 * Ubuntu template details.
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrderTemplatesUbuntu64_H_
#define TINY_CPP_CLIENT_QuickserverOrderTemplatesUbuntu64_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Ubuntu template details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrderTemplatesUbuntu64{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrderTemplatesUbuntu64();
    QuickserverOrderTemplatesUbuntu64(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrderTemplatesUbuntu64();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrderTemplatesUbuntu64_H_ */
