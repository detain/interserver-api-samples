
/*
 * ServerLocation1.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerLocation1_H_
#define TINY_CPP_CLIENT_ServerLocation1_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerLocation1{
public:

    /*! \brief Constructor.
	 */
    ServerLocation1();
    ServerLocation1(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerLocation1();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getLocationId();

	/*! \brief Set 
	 */
	void setLocationId(int location_id);
	/*! \brief Get 
	 */
	std::string getLocationName();

	/*! \brief Set 
	 */
	void setLocationName(std::string location_name);
	/*! \brief Get 
	 */
	std::string getLocationLat();

	/*! \brief Set 
	 */
	void setLocationLat(std::string location_lat);
	/*! \brief Get 
	 */
	std::string getLocationLong();

	/*! \brief Set 
	 */
	void setLocationLong(std::string location_long);
	/*! \brief Get 
	 */
	std::string getLocationDescription();

	/*! \brief Set 
	 */
	void setLocationDescription(std::string location_description);
	/*! \brief Get 
	 */
	int getLocationIpmiGroup();

	/*! \brief Set 
	 */
	void setLocationIpmiGroup(int location_ipmi_group);


    private:
    int location_id{};
    std::string location_name{};
    std::string location_lat{};
    std::string location_long{};
    std::string location_description{};
    int location_ipmi_group{};
};
}

#endif /* TINY_CPP_CLIENT_ServerLocation1_H_ */
