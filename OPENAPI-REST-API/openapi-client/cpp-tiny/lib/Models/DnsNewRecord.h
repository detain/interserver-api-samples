
/*
 * DnsNewRecord.h
 *
 * Request data for a new DNS record.
 */

#ifndef TINY_CPP_CLIENT_DnsNewRecord_H_
#define TINY_CPP_CLIENT_DnsNewRecord_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DnsRecordType.h"

namespace Tiny {


/*! \brief Request data for a new DNS record.
 *
 *  \ingroup Models
 *
 */

class DnsNewRecord{
public:

    /*! \brief Constructor.
	 */
    DnsNewRecord();
    DnsNewRecord(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsNewRecord();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Name part of record
	 */
	std::string getName();

	/*! \brief Set Name part of record
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	DnsRecordType getType();

	/*! \brief Set 
	 */
	void setType(DnsRecordType type);
	/*! \brief Get Content of record
	 */
	std::string getContent();

	/*! \brief Set Content of record
	 */
	void setContent(std::string content);
	/*! \brief Get Time-to-live
	 */
	int getTtl();

	/*! \brief Set Time-to-live
	 */
	void setTtl(int ttl);
	/*! \brief Get Priority
	 */
	int getPrio();

	/*! \brief Set Priority
	 */
	void setPrio(int prio);


    private:
    std::string name{};
    DnsRecordType type;
    std::string content{};
    int ttl{};
    int prio{};
};
}

#endif /* TINY_CPP_CLIENT_DnsNewRecord_H_ */
