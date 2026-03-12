
/*
 * DomainAllInfo_attributes_contact_set.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DomainAllInfo_attributes_contact_set_H_
#define TINY_CPP_CLIENT_DomainAllInfo_attributes_contact_set_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainAdminContact.h"
#include "DomainOwnerContact.h"
#include "DomainTechContact.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainAllInfo_attributes_contact_set{
public:

    /*! \brief Constructor.
	 */
    DomainAllInfo_attributes_contact_set();
    DomainAllInfo_attributes_contact_set(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainAllInfo_attributes_contact_set();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	DomainOwnerContact getOwner();

	/*! \brief Set 
	 */
	void setOwner(DomainOwnerContact owner);
	/*! \brief Get 
	 */
	DomainAdminContact getAdmin();

	/*! \brief Set 
	 */
	void setAdmin(DomainAdminContact admin);
	/*! \brief Get 
	 */
	DomainTechContact getTech();

	/*! \brief Set 
	 */
	void setTech(DomainTechContact tech);


    private:
    DomainOwnerContact owner;
    DomainAdminContact admin;
    DomainTechContact tech;
};
}

#endif /* TINY_CPP_CLIENT_DomainAllInfo_attributes_contact_set_H_ */
