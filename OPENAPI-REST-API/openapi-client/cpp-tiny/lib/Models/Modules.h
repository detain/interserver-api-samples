
/*
 * Modules.h
 *
 * The modules and settings.
 */

#ifndef TINY_CPP_CLIENT_Modules_H_
#define TINY_CPP_CLIENT_Modules_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ModuleSettings.h"
#include <map>

namespace Tiny {


/*! \brief The modules and settings.
 *
 *  \ingroup Models
 *
 */

class Modules{
public:

    /*! \brief Constructor.
	 */
    Modules();
    Modules(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Modules();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_Modules_H_ */
