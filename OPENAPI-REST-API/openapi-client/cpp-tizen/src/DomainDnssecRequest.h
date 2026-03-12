/*
 * DomainDnssecRequest.h
 *
 * Request payload for adding DNSSEC DS records to a domain.
 */

#ifndef _DomainDnssecRequest_H_
#define _DomainDnssecRequest_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request payload for adding DNSSEC DS records to a domain.
 *
 *  \ingroup Models
 *
 */

class DomainDnssecRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainDnssecRequest();
	DomainDnssecRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainDnssecRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get List of DNSSEC algorithm IDs for each record.
	 */
	std::list<int> getAlgorithm();

	/*! \brief Set List of DNSSEC algorithm IDs for each record.
	 */
	void setAlgorithm(std::list <int> algorithm);
	/*! \brief Get List of digest type IDs for each record.
	 */
	std::list<int> getDigestType();

	/*! \brief Set List of digest type IDs for each record.
	 */
	void setDigestType(std::list <int> digest_type);
	/*! \brief Get List of hex digests for each record.
	 */
	std::list<std::string> getDigest();

	/*! \brief Set List of hex digests for each record.
	 */
	void setDigest(std::list <std::string> digest);
	/*! \brief Get List of key tag values corresponding to each record.
	 */
	std::list<int> getKeyTag();

	/*! \brief Set List of key tag values corresponding to each record.
	 */
	void setKeyTag(std::list <int> key_tag);

private:
	std::list <int>algorithm;
	std::list <int>digest_type;
	std::list <std::string>digest;
	std::list <int>key_tag;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainDnssecRequest_H_ */
