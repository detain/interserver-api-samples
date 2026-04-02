#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/dns_list_item.h"
#include "../model/dns_record.h"
#include "../model/dns_record_type.h"
#include "../model/get_account_info_401_response.h"
#include "../model/success_text_response.h"

// Enum  for DNSAPI_addDnsRecord
typedef enum  { interserver_management_api_addDnsRecord__NULL = 0, interserver_management_api_addDnsRecord__A, interserver_management_api_addDnsRecord__A6, interserver_management_api_addDnsRecord__AAAA, interserver_management_api_addDnsRecord__AFSDB, interserver_management_api_addDnsRecord__ALIAS, interserver_management_api_addDnsRecord__CAA, interserver_management_api_addDnsRecord__CDNSKEY, interserver_management_api_addDnsRecord__CDS, interserver_management_api_addDnsRecord__CERT, interserver_management_api_addDnsRecord__CNAME, interserver_management_api_addDnsRecord__DHCID, interserver_management_api_addDnsRecord__DLV, interserver_management_api_addDnsRecord__DNSKEY, interserver_management_api_addDnsRecord__DNAME, interserver_management_api_addDnsRecord__DS, interserver_management_api_addDnsRecord__EUI48, interserver_management_api_addDnsRecord__EUI64, interserver_management_api_addDnsRecord__HINFO, interserver_management_api_addDnsRecord__IPSECKEY, interserver_management_api_addDnsRecord__KEY, interserver_management_api_addDnsRecord__KX, interserver_management_api_addDnsRecord__LOC, interserver_management_api_addDnsRecord__MAILA, interserver_management_api_addDnsRecord__MAILB, interserver_management_api_addDnsRecord__MINFO, interserver_management_api_addDnsRecord__MR, interserver_management_api_addDnsRecord__MX, interserver_management_api_addDnsRecord__NAPTR, interserver_management_api_addDnsRecord__NS, interserver_management_api_addDnsRecord__NSEC, interserver_management_api_addDnsRecord__NSEC3, interserver_management_api_addDnsRecord__NSEC3PARAM, interserver_management_api_addDnsRecord__OPENPGPKEY, interserver_management_api_addDnsRecord__OPT, interserver_management_api_addDnsRecord__PTR, interserver_management_api_addDnsRecord__RKEY, interserver_management_api_addDnsRecord__RP, interserver_management_api_addDnsRecord__RRSIG, interserver_management_api_addDnsRecord__SIG, interserver_management_api_addDnsRecord__SOA, interserver_management_api_addDnsRecord__SPF, interserver_management_api_addDnsRecord__SRV, interserver_management_api_addDnsRecord__SSHFP, interserver_management_api_addDnsRecord__TLSA, interserver_management_api_addDnsRecord__TKEY, interserver_management_api_addDnsRecord__TSIG, interserver_management_api_addDnsRecord__TXT, interserver_management_api_addDnsRecord__WKS, interserver_management_api_addDnsRecord__URI⏎ } interserver_management_api_addDnsRecord_type_e;

// Enum  for DNSAPI_updateDnsRecord
typedef enum  { interserver_management_api_updateDnsRecord__NULL = 0, interserver_management_api_updateDnsRecord__A, interserver_management_api_updateDnsRecord__A6, interserver_management_api_updateDnsRecord__AAAA, interserver_management_api_updateDnsRecord__AFSDB, interserver_management_api_updateDnsRecord__ALIAS, interserver_management_api_updateDnsRecord__CAA, interserver_management_api_updateDnsRecord__CDNSKEY, interserver_management_api_updateDnsRecord__CDS, interserver_management_api_updateDnsRecord__CERT, interserver_management_api_updateDnsRecord__CNAME, interserver_management_api_updateDnsRecord__DHCID, interserver_management_api_updateDnsRecord__DLV, interserver_management_api_updateDnsRecord__DNSKEY, interserver_management_api_updateDnsRecord__DNAME, interserver_management_api_updateDnsRecord__DS, interserver_management_api_updateDnsRecord__EUI48, interserver_management_api_updateDnsRecord__EUI64, interserver_management_api_updateDnsRecord__HINFO, interserver_management_api_updateDnsRecord__IPSECKEY, interserver_management_api_updateDnsRecord__KEY, interserver_management_api_updateDnsRecord__KX, interserver_management_api_updateDnsRecord__LOC, interserver_management_api_updateDnsRecord__MAILA, interserver_management_api_updateDnsRecord__MAILB, interserver_management_api_updateDnsRecord__MINFO, interserver_management_api_updateDnsRecord__MR, interserver_management_api_updateDnsRecord__MX, interserver_management_api_updateDnsRecord__NAPTR, interserver_management_api_updateDnsRecord__NS, interserver_management_api_updateDnsRecord__NSEC, interserver_management_api_updateDnsRecord__NSEC3, interserver_management_api_updateDnsRecord__NSEC3PARAM, interserver_management_api_updateDnsRecord__OPENPGPKEY, interserver_management_api_updateDnsRecord__OPT, interserver_management_api_updateDnsRecord__PTR, interserver_management_api_updateDnsRecord__RKEY, interserver_management_api_updateDnsRecord__RP, interserver_management_api_updateDnsRecord__RRSIG, interserver_management_api_updateDnsRecord__SIG, interserver_management_api_updateDnsRecord__SOA, interserver_management_api_updateDnsRecord__SPF, interserver_management_api_updateDnsRecord__SRV, interserver_management_api_updateDnsRecord__SSHFP, interserver_management_api_updateDnsRecord__TLSA, interserver_management_api_updateDnsRecord__TKEY, interserver_management_api_updateDnsRecord__TSIG, interserver_management_api_updateDnsRecord__TXT, interserver_management_api_updateDnsRecord__WKS, interserver_management_api_updateDnsRecord__URI⏎ } interserver_management_api_updateDnsRecord_type_e;


// Create DNS Domain
//
// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
//
success_text_response_t*
DNSAPI_addDnsDomain(apiClient_t *apiClient, char *domain, char *ip);


// Add DNS Record to Domain
//
// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
//
void
DNSAPI_addDnsRecord(apiClient_t *apiClient, char *id, char *name, dns_record_type_e type, char *content, int *ttl, int *prio);


// Delete DNS Domain
//
// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
//
success_text_response_t*
DNSAPI_deleteDnsDomain(apiClient_t *apiClient, char *id);


// Delete DNS Record
//
// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
//
success_text_response_t*
DNSAPI_deleteDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId);


// List Domain DNS Records
//
// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
//
list_t*
DNSAPI_getDnsDomain(apiClient_t *apiClient, int *id);


// List DNS Domains
//
// Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
//
list_t*
DNSAPI_getDnsList(apiClient_t *apiClient);


// Update DNS Record
//
// Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
//
success_text_response_t*
DNSAPI_updateDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId, char *name, dns_record_type_e type, char *content, char *ttl, char *prio, char *disabled, char *ordername, char *auth);


