#ifndef _DNSManager_H_
#define _DNSManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "DnsListItem.h"
#include "DnsRecord.h"
#include "DnsRecordType.h"
#include "GetAccountInfo_401_response.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup DNS DNS
 * \ingroup Operations
 *  @{
 */
class DNSManager {
public:
	DNSManager();
	virtual ~DNSManager();

/*! \brief Create DNS Domain. *Synchronous*
 *
 * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
 * \param domain The domain name. *Required*
 * \param ip IP Address to point the domain to. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDnsDomainSync(char * accessToken,
	std::string domain, std::string ip, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Create DNS Domain. *Asynchronous*
 *
 * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
 * \param domain The domain name. *Required*
 * \param ip IP Address to point the domain to. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDnsDomainAsync(char * accessToken,
	std::string domain, std::string ip, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add DNS Record to Domain. *Synchronous*
 *
 * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
 * \param id The DNS Domain ID. *Required*
 * \param name Name part of record *Required*
 * \param type  *Required*
 * \param content Content of record *Required*
 * \param ttl Time-to-live
 * \param prio Priority
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDnsRecordSync(char * accessToken,
	std::string id, std::string name, DnsRecordType type, std::string content, int ttl, int prio, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add DNS Record to Domain. *Asynchronous*
 *
 * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
 * \param id The DNS Domain ID. *Required*
 * \param name Name part of record *Required*
 * \param type  *Required*
 * \param content Content of record *Required*
 * \param ttl Time-to-live
 * \param prio Priority
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDnsRecordAsync(char * accessToken,
	std::string id, std::string name, DnsRecordType type, std::string content, int ttl, int prio, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete DNS Domain. *Synchronous*
 *
 * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
 * \param id The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDnsDomainSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete DNS Domain. *Asynchronous*
 *
 * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
 * \param id The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDnsDomainAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete DNS Record. *Synchronous*
 *
 * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
 * \param domainId The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param recordId The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDnsRecordSync(char * accessToken,
	int domainId, int recordId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete DNS Record. *Asynchronous*
 *
 * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
 * \param domainId The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param recordId The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDnsRecordAsync(char * accessToken,
	int domainId, int recordId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief List Domain DNS Records. *Synchronous*
 *
 * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
 * \param id The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDnsDomainSync(char * accessToken,
	int id, 
	void(* handler)(std::list<DnsRecord>, Error, void* )
	, void* userData);

/*! \brief List Domain DNS Records. *Asynchronous*
 *
 * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
 * \param id The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDnsDomainAsync(char * accessToken,
	int id, 
	void(* handler)(std::list<DnsRecord>, Error, void* )
	, void* userData);


/*! \brief List DNS Domains. *Synchronous*
 *
 * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDnsListSync(char * accessToken,
	
	void(* handler)(std::list<DnsListItem>, Error, void* )
	, void* userData);

/*! \brief List DNS Domains. *Asynchronous*
 *
 * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDnsListAsync(char * accessToken,
	
	void(* handler)(std::list<DnsListItem>, Error, void* )
	, void* userData);


/*! \brief Update DNS Record. *Synchronous*
 *
 * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
 * \param domainId The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param recordId The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. *Required*
 * \param name 
 * \param type 
 * \param content 
 * \param ttl 
 * \param prio 
 * \param disabled 
 * \param ordername 
 * \param auth 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDnsRecordSync(char * accessToken,
	int domainId, int recordId, std::string name, DnsRecordType type, std::string content, std::string ttl, std::string prio, std::string disabled, std::string ordername, std::string auth, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update DNS Record. *Asynchronous*
 *
 * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
 * \param domainId The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
 * \param recordId The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. *Required*
 * \param name 
 * \param type 
 * \param content 
 * \param ttl 
 * \param prio 
 * \param disabled 
 * \param ordername 
 * \param auth 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDnsRecordAsync(char * accessToken,
	int domainId, int recordId, std::string name, DnsRecordType type, std::string content, std::string ttl, std::string prio, std::string disabled, std::string ordername, std::string auth, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* DNSManager_H_ */
