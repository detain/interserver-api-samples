
/*
 * AssetServer_CPU_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AssetServer_CPU_inner_H_
#define TINY_CPP_CLIENT_AssetServer_CPU_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AssetServer_CPU_inner{
public:

    /*! \brief Constructor.
	 */
    AssetServer_CPU_inner();
    AssetServer_CPU_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AssetServer_CPU_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AssetServer_CPU_inner_H_ */
