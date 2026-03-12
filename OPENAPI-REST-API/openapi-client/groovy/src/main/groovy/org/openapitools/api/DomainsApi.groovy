package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.CancelDomain200Response
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.Domain
import org.openapitools.model.DomainContactDetails
import org.openapitools.model.DomainDnssecRecords
import org.openapitools.model.DomainDnssecRequest
import org.openapitools.model.DomainLookupResponse
import org.openapitools.model.DomainNameserverGetResponse
import org.openapitools.model.DomainNameserverPostRequest
import org.openapitools.model.DomainNameserverPutRequest
import org.openapitools.model.DomainOrder
import org.openapitools.model.DomainRow
import org.openapitools.model.DomainSearchResponse
import org.openapitools.model.DomainWhoisPrivacyRequest
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.SuccessTextResponse
import org.openapitools.model.TextResponse

class DomainsApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addDomain ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    null )

    }

    def addDomainDnssec ( Integer id, DomainDnssecRequest domainDnssecRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/dnssec"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (domainDnssecRequest == null) {
            throw new RuntimeException("missing required params domainDnssecRequest")
        }



        contentType = 'application/json';
        bodyParams = domainDnssecRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def addDomainNameserver ( Integer id, DomainNameserverPostRequest domainNameserverPostRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/nameservers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (domainNameserverPostRequest == null) {
            throw new RuntimeException("missing required params domainNameserverPostRequest")
        }



        contentType = 'application/json';
        bodyParams = domainNameserverPostRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def cancelDomain ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    CancelDomain200Response.class )

    }

    def deleteDomainDnssec ( Integer id, String action, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/dnssec"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (action == null) {
            throw new RuntimeException("missing required params action")
        }

        if (action != null) {
            queryParams.put("action", action)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def deleteDomainNameserver ( Integer id, Integer index, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/nameservers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (index == null) {
            throw new RuntimeException("missing required params index")
        }

        if (index != null) {
            queryParams.put("index", index)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    TextResponse.class )

    }

    def getDomainContact ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/contact"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainContactDetails.class )

    }

    def getDomainDnssec ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/dnssec"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainDnssecRecords.class )

    }

    def getDomainInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    Domain.class )

    }

    def getDomainInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/invoices"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    ChargeInvoiceRows.class )

    }

    def getDomainLookup ( String name, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/lookup/${name}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (name == null) {
            throw new RuntimeException("missing required params name")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainLookupResponse.class )

    }

    def getDomainNameservers ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/nameservers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainNameserverGetResponse.class )

    }

    def getDomainOrderFields ( String domain, String regType, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order/${domain}/${regType}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (domain == null) {
            throw new RuntimeException("missing required params domain")
        }
        // verify required params are set
        if (regType == null) {
            throw new RuntimeException("missing required params regType")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def getDomainOrderSearchResults ( String domain, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order/${domain}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (domain == null) {
            throw new RuntimeException("missing required params domain")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def getDomainRenewal ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/renew"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    SuccessTextResponse.class )

    }

    def getDomainSearch ( String name, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/search/${name}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (name == null) {
            throw new RuntimeException("missing required params name")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainSearchResponse.class )

    }

    def getDomainTransfer ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/transfer"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    SuccessTextResponse.class )

    }

    def getDomainWhoisPrivacy ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/whois"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    SuccessTextResponse.class )

    }

    def getDomainsList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    DomainRow.class )

    }

    def getDomainsWelcomeEmail ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/welcome_email"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    SuccessTextResponse.class )

    }

    def getNewDomain ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    DomainOrder.class )

    }

    def patchDomains ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PATCH", "",
                    null )

    }

    def postDomainRenewal ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/renew"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def postDomainTransfer ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/transfer"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def putDomains ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    null )

    }

    def updateDomainContact ( Integer id, DomainContactDetails domainContactDetails, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/contact"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (domainContactDetails == null) {
            throw new RuntimeException("missing required params domainContactDetails")
        }



        contentType = 'application/json';
        bodyParams = domainContactDetails


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def updateDomainInfo ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    null )

    }

    def updateDomainNameservers ( Integer id, DomainNameserverPutRequest domainNameserverPutRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/nameservers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (domainNameserverPutRequest == null) {
            throw new RuntimeException("missing required params domainNameserverPutRequest")
        }



        contentType = 'application/json';
        bodyParams = domainNameserverPutRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    TextResponse.class )

    }

    def updateDomainWhoisPrivacy ( Integer id, DomainWhoisPrivacyRequest domainWhoisPrivacyRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/domains/${id}/whois"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (domainWhoisPrivacyRequest == null) {
            throw new RuntimeException("missing required params domainWhoisPrivacyRequest")
        }



        contentType = 'application/json';
        bodyParams = domainWhoisPrivacyRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

}
