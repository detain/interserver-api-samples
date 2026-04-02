package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.DownloadQsBackup200Response
import org.openapitools.model.DownloadQsBackupRequest
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.QueueResponse
import org.openapitools.model.RestoreRequest
import org.openapitools.model.ReverseDnsEntries
import org.openapitools.model.ServiceOrderPostResponse
import org.openapitools.model.SuccessTextResponse
import org.openapitools.model.TextResponse
import org.openapitools.model.VPSCancel200Response
import org.openapitools.model.Vps
import org.openapitools.model.VpsBackupRows
import org.openapitools.model.VpsOrder
import org.openapitools.model.VpsOrderPostRequest
import org.openapitools.model.VpsOrderPutRequest
import org.openapitools.model.VpsOrderPutResponse
import org.openapitools.model.VpsRow
import org.openapitools.model.VpsTemplatesList
import org.openapitools.model.VpsTrafficResponse

class VpsApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addVps ( VpsOrderPostRequest vpsOrderPostRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType




        contentType = 'application/json';
        bodyParams = vpsOrderPostRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    ServiceOrderPostResponse.class )

    }

    def deleteVpsBackup ( Integer id, String _file, String all, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/backups"

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
        if (_file == null) {
            throw new RuntimeException("missing required params _file")
        }

        if (all != null) {
            queryParams.put("all", all)
        }
        if (_file != null) {
            queryParams.put("file", _file)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def doVpsBlockSmtp ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/block_smtp"

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
                    QueueResponse.class )

    }

    def doVpsDisableCd ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/disable_cd"

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
                    QueueResponse.class )

    }

    def doVpsDisableQuota ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/disable_quota"

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
                    QueueResponse.class )

    }

    def doVpsEjectCd ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/eject_cd"

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
                    QueueResponse.class )

    }

    def doVpsEnableQuota ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/enable_quota"

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
                    QueueResponse.class )

    }

    def doVpsRestart ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/restart"

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
                    QueueResponse.class )

    }

    def doVpsStart ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/start"

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
                    QueueResponse.class )

    }

    def doVpsStop ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/stop"

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
                    QueueResponse.class )

    }

    def downloadVpsBackup ( Integer id, DownloadQsBackupRequest downloadQsBackupRequest, String all, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/backups"

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
        if (downloadQsBackupRequest == null) {
            throw new RuntimeException("missing required params downloadQsBackupRequest")
        }

        if (all != null) {
            queryParams.put("all", all)
        }


        contentType = 'application/json';
        bodyParams = downloadQsBackupRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PATCH", "",
                    DownloadQsBackup200Response.class )

    }

    def getNewVps ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    VpsOrder.class )

    }

    def getVpsBackups ( Integer id, String all, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/backups"

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

        if (all != null) {
            queryParams.put("all", all)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    VpsBackupRows.class )

    }

    def getVpsBuyHdSpace ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/buy_hd_space"

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
                    null )

    }

    def getVpsBuyIp ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/buy_ip"

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
                    null )

    }

    def getVpsChangeTimezone ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/change_timezone"

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
                    String.class )

    }

    def getVpsInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}"

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
                    Vps.class )

    }

    def getVpsInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/invoices"

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

    def getVpsList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    VpsRow.class )

    }

    def getVpsReinstallOs ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/reinstall_os"

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
                    VpsTemplatesList.class )

    }

    def getVpsReverseDns ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/reverse_dns"

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

    def getVpsSetupVnc ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/setup_vnc"

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
                    null )

    }

    def getVpsSlices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/slices"

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
                    null )

    }

    def getVpsTrafficUsage ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/traffic_usage"

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
                    VpsTrafficResponse.class )

    }

    def getVpsViewDesktop ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/view_desktop"

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
                    null )

    }

    def getVpsWelcomeEmail ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/welcome_email"

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

    def postVpsBackup ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/backup"

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
                    QueueResponse.class )

    }

    def postVpsBuyHdSpace ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/buy_hd_space"

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

    def postVpsBuyIp ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/buy_ip"

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

    def postVpsChangeHostname ( Integer id, String hostname, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/change_hostname"

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




        contentType = 'multipart/form-data';
        bodyParams = hostname

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsChangeRootPassword ( Integer id, String password, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/change_root_password"

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
        if (password == null) {
            throw new RuntimeException("missing required params password")
        }




        contentType = 'multipart/form-data';
        bodyParams = password

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsChangeTimezone ( Integer id, String timezone, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/change_timezone"

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
        if (timezone == null) {
            throw new RuntimeException("missing required params timezone")
        }




        contentType = 'multipart/form-data';
        bodyParams = timezone

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsChangeWebuzoPassword ( Integer id, String password, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/change_webuzo_password"

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
        if (password == null) {
            throw new RuntimeException("missing required params password")
        }




        contentType = 'multipart/form-data';
        bodyParams = password

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsInsertCd ( Integer id, String url, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/insert_cd"

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




        contentType = 'multipart/form-data';
        bodyParams = url

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsReinstallOs ( Integer id, String template, String localPassword, String password, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/reinstall_os"

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
        if (template == null) {
            throw new RuntimeException("missing required params template")
        }
        // verify required params are set
        if (localPassword == null) {
            throw new RuntimeException("missing required params localPassword")
        }




        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("template", template)
        bodyParams.put("password", password)
        bodyParams.put("localPassword", localPassword)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsResetPassword ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/reset_password"

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
                    QueueResponse.class )

    }

    def postVpsRestore ( Integer id, RestoreRequest restoreRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/restore"

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
        if (restoreRequest == null) {
            throw new RuntimeException("missing required params restoreRequest")
        }



        contentType = 'application/json';
        bodyParams = restoreRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    QueueResponse.class )

    }

    def postVpsReverseDns ( Integer id, ReverseDnsEntries reverseDnsEntries, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/reverse_dns"

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

    def postVpsSetupVnc ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/setup_vnc"

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
                    QueueResponse.class )

    }

    def postVpsSlices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/slices"

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

    def postVpsViewDesktop ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}/view_desktop"

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

    def putVps ( VpsOrderPutRequest vpsOrderPutRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType




        contentType = 'application/json';
        bodyParams = vpsOrderPutRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    VpsOrderPutResponse.class )

    }

    def updateVpsInfo ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}"

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

    def vPSCancel ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/vps/${id}"

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
                    VPSCancel200Response.class )

    }

}
