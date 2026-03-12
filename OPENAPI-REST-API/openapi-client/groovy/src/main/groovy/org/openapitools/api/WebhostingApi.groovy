package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.GetWebsiteBuyIp200Response
import org.openapitools.model.PostWebsiteBuyIp200Response
import org.openapitools.model.PostWebsiteBuyIpRequest
import org.openapitools.model.PostWebsiteMigration200Response
import org.openapitools.model.PostWebsiteMigrationRequest
import org.openapitools.model.PostWebsiteMigrationRequest1
import org.openapitools.model.ReverseDnsEntries
import org.openapitools.model.SuccessTextResponse
import org.openapitools.model.TextResponse
import org.openapitools.model.WebhostingCancel200Response
import org.openapitools.model.Website
import org.openapitools.model.WebsiteBackups
import org.openapitools.model.WebsiteLoginResponse
import org.openapitools.model.WebsiteRow
import org.openapitools.model.WebsitesOrder

class WebhostingApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addWebsite ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/order"

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

    def getNewWebsite ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    WebsitesOrder.class )

    }

    def getWebsiteBuyIp ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/buy_ip"

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
                    GetWebsiteBuyIp200Response.class )

    }

    def getWebsiteInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}"

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
                    Website.class )

    }

    def getWebsiteInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/invoices"

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

    def getWebsiteList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json", "multipart/form-data"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    WebsiteRow.class )

    }

    def getWebsitesBackups ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/backups"

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
                    WebsiteBackups.class )

    }

    def getWebsitesLogin ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/login"

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
                    WebsiteLoginResponse.class )

    }

    def getWebsitesWelcomeEmail ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/welcome_email"

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

    def gettWebsiteReverseDns ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/reverse_dns"

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
                    ReverseDnsEntries.class )

    }

    def postWebsiteBuyIp ( Integer id, PostWebsiteBuyIpRequest postWebsiteBuyIpRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/buy_ip"

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
        if (postWebsiteBuyIpRequest == null) {
            throw new RuntimeException("missing required params postWebsiteBuyIpRequest")
        }



        contentType = 'application/json';
        bodyParams = postWebsiteBuyIpRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    PostWebsiteBuyIp200Response.class )

    }

    def postWebsiteMigration ( Integer id, PostWebsiteMigrationRequest postWebsiteMigrationRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/migration"

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
        if (postWebsiteMigrationRequest == null) {
            throw new RuntimeException("missing required params postWebsiteMigrationRequest")
        }



        contentType = 'application/json';
        bodyParams = postWebsiteMigrationRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    PostWebsiteMigration200Response.class )

    }

    def postWebsitesReverseDns ( Integer id, ReverseDnsEntries reverseDnsEntries, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}/reverse_dns"

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
        if (reverseDnsEntries == null) {
            throw new RuntimeException("missing required params reverseDnsEntries")
        }



        contentType = 'application/json';
        bodyParams = reverseDnsEntries


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def putWebsites ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/order"

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

    def updateWebsiteInfo ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}"

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

    def webhostingCancel ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/websites/${id}"

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
                    WebhostingCancel200Response.class )

    }

}
