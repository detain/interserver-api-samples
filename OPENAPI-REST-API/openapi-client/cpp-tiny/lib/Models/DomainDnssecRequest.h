
/*
 * DomainDnssecRequest.h
 *
 * Request payload for adding DNSSEC DS records to a domain.
 */

#ifndef TINY_CPP_CLIENT_DomainDnssecRequest_H_
#define TINY_CPP_CLIENT_DomainDnssecRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Request payload for adding DNSSEC DS records to a domain.
 *
 *  \ingroup Models
 *
 */

class DomainDnssecRequest{
public:

    /*! \brief Constructor.
	 */
    DomainDnssecRequest();
    DomainDnssecRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainDnssecRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get List of DNSSEC algorithm IDs for each record.
	 */
	std::list<int> getAlgorithm();

	/*! \brief Set List of DNSSEC algorithm IDs for each record.
	 */
	void setAlgorithm(std::list<int> algorithm);
	/*! \brief Get List of digest type IDs for each record.
	 */
	std::list<int> getDigestType();

	/*! \brief Set List of digest type IDs for each record.
	 */
	void setDigestType(std::list<int> digest_type);
	/*! \brief Get List of hex digests for each record.
	 */
	std::list<std::string> getDigest();

	/*! \brief Set List of hex digests for each record.
	 */
	void setDigest(std::list<std::string> digest);
	/*! \brief Get List of key tag values corresponding to each record.
	 */
	std::list<int> getKeyTag();

	/*! \brief Set List of key tag values corresponding to each record.
	 */
	void setKeyTag(std::list<int> key_tag);


    private:
    std::list<int> algorithm;
    std::list<int> digest_type;
    std::list<std::string> digest;
    std::list<int> key_tag;
};
}

#endif /* TINY_CPP_CLIENT_DomainDnssecRequest_H_ */
