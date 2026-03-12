
/*
 * VpsCPData.h
 *
 * Control panel license options available for a VPS.
 */

#ifndef TINY_CPP_CLIENT_VpsCPData_H_
#define TINY_CPP_CLIENT_VpsCPData_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Control panel license options available for a VPS.
 *
 *  \ingroup Models
 *
 */

class VpsCPData{
public:

    /*! \brief Constructor.
	 */
    VpsCPData();
    VpsCPData(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsCPData();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Control panel name (e.g., cPanel).
	 */
	std::string getName();

	/*! \brief Set Control panel name (e.g., cPanel).
	 */
	void setName(std::string name);
	/*! \brief Get Monthly cost in cents for the control panel license.
	 */
	int getCost();

	/*! \brief Set Monthly cost in cents for the control panel license.
	 */
	void setCost(int cost);


    private:
    std::string name{};
    int cost{};
};
}

#endif /* TINY_CPP_CLIENT_VpsCPData_H_ */
