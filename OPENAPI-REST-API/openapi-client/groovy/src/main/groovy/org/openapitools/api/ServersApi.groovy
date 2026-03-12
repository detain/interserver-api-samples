package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.BuyItNowList
import org.openapitools.model.BuyItNowServerOrder200Response
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.PlaceBuyNowServerRequest
import org.openapitools.model.ReverseDnsEntries
import org.openapitools.model.Server
import org.openapitools.model.ServerIpmiLiveInfo
import org.openapitools.model.ServerOrder
import org.openapitools.model.ServerRow
import org.openapitools.model.ServersBuyNowError
import org.openapitools.model.ServersBuyNowResponse
import org.openapitools.model.ServersCancel200Response
import org.openapitools.model.SuccessTextResponse
import org.openapitools.model.TextResponse

class ServersApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addServer ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/order"

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

    def buyItNowServerOrder ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/order/buy_now_server"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    BuyItNowServerOrder200Response.class )

    }

    def getMPServers ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/buy_now_servers_list"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    BuyItNowList.class )

    }

    def getNewServer ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    ServerOrder.class )

    }

    def getServerInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}"

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
                    Server.class )

    }

    def getServerInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/invoices"

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

    def getServerList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ServerRow.class )

    }

    def getServerReverseDns ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/reverse_dns"

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

    def getServersWelcomeEmail ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/welcome_email"

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

    def placeBuyNowServer ( PlaceBuyNowServerRequest placeBuyNowServerRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/order/buy_now_server"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType




        contentType = 'application/json';
        bodyParams = placeBuyNowServerRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    ServersBuyNowResponse.class )

    }

    def postServerReverseDns ( Integer id, ReverseDnsEntries reverseDnsEntries, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/reverse_dns"

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

    def putServers ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/order"

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

    def serverIpmiLiveGet ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/ipmi_live"

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
                    ServerIpmiLiveInfo.class )

    }

    def serverIpmiLivePost ( Integer id, String ip, Integer asset, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/ipmi_live"

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
        if (ip == null) {
            throw new RuntimeException("missing required params ip")
        }




        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("asset", asset)
        bodyParams.put("ip", ip)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    ServerIpmiLiveInfo.class )

    }

    def serverIpmiPowerGet ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/ipmi_power"

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
                    TextResponse.class )

    }

    def serverIpmiPowerPost ( Integer id, String action, Integer asset, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}/ipmi_power"

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




        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("asset", asset)
        bodyParams.put("action", action)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def serversCancel ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}"

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
                    ServersCancel200Response.class )

    }

    def updateServerInfo ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/servers/${id}"

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

}
