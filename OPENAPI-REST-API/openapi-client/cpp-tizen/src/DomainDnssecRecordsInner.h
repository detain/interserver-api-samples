/*
 * DomainDnssecRecords_inner.h
 *
 * 
 */

#ifndef _DomainDnssecRecords_inner_H_
#define _DomainDnssecRecords_inner_H_


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

class DomainDnssecRecords_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainDnssecRecords_inner();
	DomainDnssecRecords_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainDnssecRecords_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAlgorithm();

	/*! \brief Set 
	 */
	void setAlgorithm(std::string  algorithm);
	/*! \brief Get 
	 */
	std::string getDigestType();

	/*! \brief Set 
	 */
	void setDigestType(std::string  digest_type);
	/*! \brief Get 
	 */
	std::string getDigest();

	/*! \brief Set 
	 */
	void setDigest(std::string  digest);
	/*! \brief Get 
	 */
	std::string getKeyTag();

	/*! \brief Set 
	 */
	void setKeyTag(std::string  key_tag);

private:
	std::string algorithm;
	std::string digest_type;
	std::string digest;
	std::string key_tag;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainDnssecRecords_inner_H_ */
