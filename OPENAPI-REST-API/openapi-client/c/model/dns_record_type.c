#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_record_type.h"


char* dns_record_type_dns_record_type_ToString(interserver_management_api_dns_record_type__e dns_record_type) {
    char *dns_record_typeArray[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    return dns_record_typeArray[dns_record_type];
}

interserver_management_api_dns_record_type__e dns_record_type_dns_record_type_FromString(char* dns_record_type) {
    int stringToReturn = 0;
    char *dns_record_typeArray[] =  { "NULL", "A", "A6", "AAAA", "AFSDB", "ALIAS", "CAA", "CDNSKEY", "CDS", "CERT", "CNAME", "DHCID", "DLV", "DNSKEY", "DNAME", "DS", "EUI48", "EUI64", "HINFO", "IPSECKEY", "KEY", "KX", "LOC", "MAILA", "MAILB", "MINFO", "MR", "MX", "NAPTR", "NS", "NSEC", "NSEC3", "NSEC3PARAM", "OPENPGPKEY", "OPT", "PTR", "RKEY", "RP", "RRSIG", "SIG", "SOA", "SPF", "SRV", "SSHFP", "TLSA", "TKEY", "TSIG", "TXT", "WKS", "URI⏎" };
    size_t sizeofArray = sizeof(dns_record_typeArray) / sizeof(dns_record_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(dns_record_type, dns_record_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *dns_record_type_convertToJSON(interserver_management_api_dns_record_type__e dns_record_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "dns_record_type", dns_record_type_dns_record_type_ToString(dns_record_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

interserver_management_api_dns_record_type__e dns_record_type_parseFromJSON(cJSON *dns_record_typeJSON) {
    if(!cJSON_IsString(dns_record_typeJSON) || (dns_record_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return dns_record_type_dns_record_type_FromString(dns_record_typeJSON->valuestring);
}
