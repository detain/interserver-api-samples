
/*
 * DnsRecord.h
 *
 * A single DNS Record row for a Domain
 */

#ifndef TINY_CPP_CLIENT_DnsRecord_H_
#define TINY_CPP_CLIENT_DnsRecord_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DnsRecordType.h"

namespace Tiny {


/*! \brief A single DNS Record row for a Domain
 *
 *  \ingroup Models
 *
 */

class DnsRecord{
public:

    /*! \brief Constructor.
	 */
    DnsRecord();
    DnsRecord(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsRecord();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID of the DNS Record.
	 */
	std::string getId();

	/*! \brief Set The ID of the DNS Record.
	 */
	void setId(std::string id);
	/*! \brief Get The ID of the Domain this is a record of.
	 */
	std::string getDomainId();

	/*! \brief Set The ID of the Domain this is a record of.
	 */
	void setDomainId(std::string domain_id);
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
	/*! \brief Get The content of the record, such as the IP address or hsotname.
	 */
	std::string getContent();

	/*! \brief Set The content of the record, such as the IP address or hsotname.
	 */
	void setContent(std::string content);
	/*! \brief Get Time To Live (seconds)
	 */
	std::string getTtl();

	/*! \brief Set Time To Live (seconds)
	 */
	void setTtl(std::string ttl);
	/*! \brief Get Priority
	 */
	std::string getPrio();

	/*! \brief Set Priority
	 */
	void setPrio(std::string prio);
	/*! \brief Get 
	 */
	std::string getDisabled();

	/*! \brief Set 
	 */
	void setDisabled(std::string disabled);
	/*! \brief Get Alternate name to use for sorting
	 */
	std::string getOrdername();

	/*! \brief Set Alternate name to use for sorting
	 */
	void setOrdername(std::string ordername);
	/*! \brief Get 
	 */
	std::string getAuth();

	/*! \brief Set 
	 */
	void setAuth(std::string auth);


    private:
    std::string id{};
    std::string domain_id{};
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

#endif /* TINY_CPP_CLIENT_DnsRecord_H_ */
