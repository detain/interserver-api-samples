
/*
 * DnsUpdateRecord.h
 *
 * The request data to update a dns record.
 */

#ifndef TINY_CPP_CLIENT_DnsUpdateRecord_H_
#define TINY_CPP_CLIENT_DnsUpdateRecord_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DnsRecordType.h"

namespace Tiny {


/*! \brief The request data to update a dns record.
 *
 *  \ingroup Models
 *
 */

class DnsUpdateRecord{
public:

    /*! \brief Constructor.
	 */
    DnsUpdateRecord();
    DnsUpdateRecord(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsUpdateRecord();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	DnsRecordType getType();

	/*! \brief Set 
	 */
	void setType(DnsRecordType type);
	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string content);
	/*! \brief Get 
	 */
	std::string getTtl();

	/*! \brief Set 
	 */
	void setTtl(std::string ttl);
	/*! \brief Get 
	 */
	std::string getPrio();

	/*! \brief Set 
	 */
	void setPrio(std::string prio);
	/*! \brief Get 
	 */
	std::string getDisabled();

	/*! \brief Set 
	 */
	void setDisabled(std::string disabled);
	/*! \brief Get 
	 */
	std::string getOrdername();

	/*! \brief Set 
	 */
	void setOrdername(std::string ordername);
	/*! \brief Get 
	 */
	std::string getAuth();

	/*! \brief Set 
	 */
	void setAuth(std::string auth);


    private:
    std::string name{};
    DnsRecordType type;
    std::string content{};
    std::string ttl{};
    std::string prio{};
    std::string disabled{};
    std::string ordername{};
    std::string auth{};
};
}

#endif /* TINY_CPP_CLIENT_DnsUpdateRecord_H_ */
