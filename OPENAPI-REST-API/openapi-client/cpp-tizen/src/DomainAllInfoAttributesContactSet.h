/*
 * DomainAllInfo_attributes_contact_set.h
 *
 * 
 */

#ifndef _DomainAllInfo_attributes_contact_set_H_
#define _DomainAllInfo_attributes_contact_set_H_


#include <string>
#include "DomainAdminContact.h"
#include "DomainOwnerContact.h"
#include "DomainTechContact.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainAllInfo_attributes_contact_set : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainAllInfo_attributes_contact_set();
	DomainAllInfo_attributes_contact_set(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainAllInfo_attributes_contact_set();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	DomainOwnerContact getOwner();

	/*! \brief Set 
	 */
	void setOwner(DomainOwnerContact  owner);
	/*! \brief Get 
	 */
	DomainAdminContact getAdmin();

	/*! \brief Set 
	 */
	void setAdmin(DomainAdminContact  admin);
	/*! \brief Get 
	 */
	DomainTechContact getTech();

	/*! \brief Set 
	 */
	void setTech(DomainTechContact  tech);

private:
	DomainOwnerContact owner;
	DomainAdminContact admin;
	DomainTechContact tech;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainAllInfo_attributes_contact_set_H_ */
