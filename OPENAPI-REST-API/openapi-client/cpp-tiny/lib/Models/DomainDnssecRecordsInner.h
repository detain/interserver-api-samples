
/*
 * DomainDnssecRecords_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DomainDnssecRecords_inner_H_
#define TINY_CPP_CLIENT_DomainDnssecRecords_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainDnssecRecords_inner{
public:

    /*! \brief Constructor.
	 */
    DomainDnssecRecords_inner();
    DomainDnssecRecords_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainDnssecRecords_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getAlgorithm();

	/*! \brief Set 
	 */
	void setAlgorithm(std::string algorithm);
	/*! \brief Get 
	 */
	std::string getDigestType();

	/*! \brief Set 
	 */
	void setDigestType(std::string digest_type);
	/*! \brief Get 
	 */
	std::string getDigest();

	/*! \brief Set 
	 */
	void setDigest(std::string digest);
	/*! \brief Get 
	 */
	std::string getKeyTag();

	/*! \brief Set 
	 */
	void setKeyTag(std::string key_tag);


    private:
    std::string algorithm{};
    std::string digest_type{};
    std::string digest{};
    std::string key_tag{};
};
}

#endif /* TINY_CPP_CLIENT_DomainDnssecRecords_inner_H_ */
