
/*
 * OperatingSystem.h
 *
 * An operating system option available for server provisioning.
 */

#ifndef TINY_CPP_CLIENT_OperatingSystem_H_
#define TINY_CPP_CLIENT_OperatingSystem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An operating system option available for server provisioning.
 *
 *  \ingroup Models
 *
 */

class OperatingSystem{
public:

    /*! \brief Constructor.
	 */
    OperatingSystem();
    OperatingSystem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~OperatingSystem();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get 
	 */
	long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long monthly_price);


    private:
    int id{};
    std::string short_desc{};
    long monthly_price{};
};
}

#endif /* TINY_CPP_CLIENT_OperatingSystem_H_ */
