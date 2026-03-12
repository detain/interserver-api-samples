/*
 * DomainNameserverGetResponse_inner.h
 *
 * 
 */

#ifndef _DomainNameserverGetResponse_inner_H_
#define _DomainNameserverGetResponse_inner_H_


#include <string>
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

class DomainNameserverGetResponse_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainNameserverGetResponse_inner();
	DomainNameserverGetResponse_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainNameserverGetResponse_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getIpaddress();

	/*! \brief Set 
	 */
	void setIpaddress(std::string  ipaddress);
	/*! \brief Get Whether the registrar allows deletion of this nameserver entry.
	 */
	std::string getCanDelete();

	/*! \brief Set Whether the registrar allows deletion of this nameserver entry.
	 */
	void setCanDelete(std::string  can_delete);

private:
	std::string name;
	std::string ipaddress;
	std::string can_delete;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainNameserverGetResponse_inner_H_ */
