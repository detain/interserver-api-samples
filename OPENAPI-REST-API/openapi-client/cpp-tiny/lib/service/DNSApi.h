#ifndef TINY_CPP_CLIENT_DNSApi_H_
#define TINY_CPP_CLIENT_DNSApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "DnsListItem.h"
#include "DnsRecord.h"
#include "DnsRecordType.h"
#include "GetAccountInfo_401_response.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class DNSApi : public Service {
public:
    DNSApi() = default;

    virtual ~DNSApi() = default;

    /**
    * Create DNS Domain.
    *
    * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
    * \param domain The domain name. *Required*
    * \param ip IP Address to point the domain to. *Required*
    */
    Response<
            String
        >
    addDnsDomain(
            
            std::string domain
            , 
            
            std::string ip
            
    );
    /**
    * Add DNS Record to Domain.
    *
    * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
    * \param id The DNS Domain ID. *Required*
    * \param name Name part of record *Required*
    * \param type  *Required*
    * \param content Content of record *Required*
    * \param ttl Time-to-live
    * \param prio Priority
    */
    Response<
            String
        >
    addDnsRecord(
            
            std::string id
            , 
            
            std::string name
            , 
            
            DnsRecordType type
            , 
            
            std::string content
            , 
            
            int ttl
            , 
            
            int prio
            
    );
    /**
    * Delete DNS Domain.
    *
    * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
    * \param id The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain. *Required*
    */
    Response<
            String
        >
    deleteDnsDomain(
            
            std::string id
            
    );
    /**
    * Delete DNS Record.
    *
    * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
    * \param domainId The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
    * \param recordId The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. *Required*
    */
    Response<
            String
        >
    deleteDnsRecord(
            
            int domainId
            , 
            
            int recordId
            
    );
    /**
    * List Domain DNS Records.
    *
    * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
    * \param id The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. *Required*
    */
    Response<
                    std::list<DnsRecord>
        >
    getDnsDomain(
            
            int id
            
    );
    /**
    * List DNS Domains.
    *
    * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
    */
    Response<
                    std::list<DnsListItem>
        >
    getDnsList(
    );
    /**
    * Update DNS Record.
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
    */
    Response<
            String
        >
    updateDnsRecord(
            
            int domainId
            , 
            
            int recordId
            , 
            
            std::string name
            , 
            
            DnsRecordType type
            , 
            
            std::string content
            , 
            
            std::string ttl
            , 
            
            std::string prio
            , 
            
            std::string disabled
            , 
            
            std::string ordername
            , 
            
            std::string auth
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_DNSApi_H_ */