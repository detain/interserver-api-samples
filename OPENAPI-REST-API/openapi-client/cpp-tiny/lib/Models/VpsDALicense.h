
/*
 * VpsDALicense.h
 *
 * A DirectAdmin license tier option.
 */

#ifndef TINY_CPP_CLIENT_VpsDALicense_H_
#define TINY_CPP_CLIENT_VpsDALicense_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A DirectAdmin license tier option.
 *
 *  \ingroup Models
 *
 */

class VpsDALicense{
public:

    /*! \brief Constructor.
	 */
    VpsDALicense();
    VpsDALicense(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsDALicense();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get License tier name.
	 */
	std::string getName();

	/*! \brief Set License tier name.
	 */
	void setName(std::string name);
	/*! \brief Get License tier sub-name.
	 */
	std::string getSubName();

	/*! \brief Set License tier sub-name.
	 */
	void setSubName(std::string sub_name);
	/*! \brief Get Monthly cost in cents.
	 */
	int getCost();

	/*! \brief Set Monthly cost in cents.
	 */
	void setCost(int cost);
	/*! \brief Get Image path for the disabled state icon.
	 */
	std::string getImgDisabled();

	/*! \brief Set Image path for the disabled state icon.
	 */
	void setImgDisabled(std::string img_disabled);
	/*! \brief Get Image path for the active state icon.
	 */
	std::string getImgActive();

	/*! \brief Set Image path for the active state icon.
	 */
	void setImgActive(std::string img_active);


    private:
    std::string name{};
    std::string sub_name{};
    int cost{};
    std::string img_disabled{};
    std::string img_active{};
};
}

#endif /* TINY_CPP_CLIENT_VpsDALicense_H_ */
