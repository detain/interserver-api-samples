package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.CancelScrubIp200Response
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.CreateFilter
import org.openapitools.model.CreateFilter201Response
import org.openapitools.model.CreateFilter400Response
import org.openapitools.model.CreateFilter500Response
import org.openapitools.model.CreateFirewallRule
import org.openapitools.model.CreateGeoFirewallRule
import org.openapitools.model.CreateGeoRule400Response
import org.openapitools.model.CreateRule201Response
import org.openapitools.model.CreateRule400Response
import org.openapitools.model.CreateRule500Response
import org.openapitools.model.DeleteFilter200Response
import org.openapitools.model.DeleteFilter400Response
import org.openapitools.model.DeleteFilter500Response
import org.openapitools.model.DeleteFirewallRule
import org.openapitools.model.DeleteGeoFirewallRule
import org.openapitools.model.DisableScrub200Response
import org.openapitools.model.DisableScrub400Response
import org.openapitools.model.DisableScrub500Response
import org.openapitools.model.EnableScrub200Response
import org.openapitools.model.EnableScrub500Response
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.GetOrderDetail200Response
import org.openapitools.model.GetScrubIpDetails200Response
import org.openapitools.model.PlaceScrubOrder201Response
import org.openapitools.model.ScrubIpFilterTypes
import org.openapitools.model.ScrubIpPlaceOrder
import org.openapitools.model.ScrubIpsDeleteRule200Response
import org.openapitools.model.ScrubIpsDeleteRule400Response
import org.openapitools.model.ScrubIpsDeleteRule500Response
import org.openapitools.model.ScrubIpsLogRowSchema
import org.openapitools.model.ScrubIpsRowSchema

class ScrubIpsApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def cancelScrubIp ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}"

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
                    CancelScrubIp200Response.class )

    }

    def createFilter ( Integer id, CreateFilter createFilter, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/create_filter"

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
        if (createFilter == null) {
            throw new RuntimeException("missing required params createFilter")
        }



        contentType = 'application/json';
        bodyParams = createFilter


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    CreateFilter201Response.class )

    }

    def createGeoRule ( Integer id, CreateGeoFirewallRule createGeoFirewallRule, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/create_geo_rule"

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
        if (createGeoFirewallRule == null) {
            throw new RuntimeException("missing required params createGeoFirewallRule")
        }



        contentType = 'application/json';
        bodyParams = createGeoFirewallRule


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    CreateRule201Response.class )

    }

    def createRule ( Integer id, CreateFirewallRule createFirewallRule, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/create_rule"

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
        if (createFirewallRule == null) {
            throw new RuntimeException("missing required params createFirewallRule")
        }



        contentType = 'application/json';
        bodyParams = createFirewallRule


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    CreateRule201Response.class )

    }

    def deleteFilter ( Integer id, CreateFilter createFilter, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/delete_filter"

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
        if (createFilter == null) {
            throw new RuntimeException("missing required params createFilter")
        }



        contentType = 'application/json';
        bodyParams = createFilter


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    DeleteFilter200Response.class )

    }

    def disableScrub ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/disable"

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
                    DisableScrub200Response.class )

    }

    def enableScrub ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/enable"

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
                    EnableScrub200Response.class )

    }

    def getOrderDetail ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    GetOrderDetail200Response.class )

    }

    def getScrubIpDetails ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}"

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
                    GetScrubIpDetails200Response.class )

    }

    def getScrubIpFilterTypes ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/filter_types"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    ScrubIpFilterTypes.class )

    }

    def getScrubIpInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/invoices"

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

    def getScrubIpLogs ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/logs"

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
                    "GET", "array",
                    ScrubIpsLogRowSchema.class )

    }

    def getScrubIpsList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ScrubIpsRowSchema.class )

    }

    def placeScrubOrder ( ScrubIpPlaceOrder scrubIpPlaceOrder, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (scrubIpPlaceOrder == null) {
            throw new RuntimeException("missing required params scrubIpPlaceOrder")
        }



        contentType = 'application/json';
        bodyParams = scrubIpPlaceOrder


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    PlaceScrubOrder201Response.class )

    }

    def scrubIpsDeleteGeoRule ( Integer id, DeleteGeoFirewallRule deleteGeoFirewallRule, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/delete_geo_rule"

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
        if (deleteGeoFirewallRule == null) {
            throw new RuntimeException("missing required params deleteGeoFirewallRule")
        }



        contentType = 'application/json';
        bodyParams = deleteGeoFirewallRule


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    ScrubIpsDeleteRule200Response.class )

    }

    def scrubIpsDeleteRule ( Integer id, DeleteFirewallRule deleteFirewallRule, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/scrub_ips/${id}/delete_rule"

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
        if (deleteFirewallRule == null) {
            throw new RuntimeException("missing required params deleteFirewallRule")
        }



        contentType = 'application/json';
        bodyParams = deleteFirewallRule


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    ScrubIpsDeleteRule200Response.class )

    }

}
