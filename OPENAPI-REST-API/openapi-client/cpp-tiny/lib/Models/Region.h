
/*
 * Region.h
 *
 * A datacenter region where a server can be provisioned.
 */

#ifndef TINY_CPP_CLIENT_Region_H_
#define TINY_CPP_CLIENT_Region_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A datacenter region where a server can be provisioned.
 *
 *  \ingroup Models
 *
 */

class Region{
public:

    /*! \brief Constructor.
	 */
    Region();
    Region(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Region();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getRegionId();

	/*! \brief Set 
	 */
	void setRegionId(int region_id);
	/*! \brief Get 
	 */
	std::string getRegionName();

	/*! \brief Set 
	 */
	void setRegionName(std::string region_name);


    private:
    int region_id{};
    std::string region_name{};
};
}

#endif /* TINY_CPP_CLIENT_Region_H_ */
