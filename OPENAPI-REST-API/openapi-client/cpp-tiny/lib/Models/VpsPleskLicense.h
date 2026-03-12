
/*
 * VpsPleskLicense.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsPleskLicense_H_
#define TINY_CPP_CLIENT_VpsPleskLicense_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsPleskLicense{
public:

    /*! \brief Constructor.
	 */
    VpsPleskLicense();
    VpsPleskLicense(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsPleskLicense();


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
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getSubName();

	/*! \brief Set 
	 */
	void setSubName(std::string sub_name);
	/*! \brief Get 
	 */
	int getCost();

	/*! \brief Set 
	 */
	void setCost(int cost);


    private:
    int id{};
    std::string name{};
    std::string sub_name{};
    int cost{};
};
}

#endif /* TINY_CPP_CLIENT_VpsPleskLicense_H_ */
