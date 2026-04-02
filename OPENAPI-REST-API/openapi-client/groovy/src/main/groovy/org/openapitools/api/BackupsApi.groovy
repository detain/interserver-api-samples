package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.Backup
import org.openapitools.model.BackupLoginResponse
import org.openapitools.model.BackupOrderPostResponse
import org.openapitools.model.BackupOrderPutResponse
import org.openapitools.model.BackupRow
import org.openapitools.model.BackupsOrder
import org.openapitools.model.CancelBackup200Response
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.SuccessTextResponse

class BackupsApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addBackup ( Boolean validateOnly, Integer serviceType, String coupon, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("validateOnly", validateOnly)
        bodyParams.put("serviceType", serviceType)
        bodyParams.put("coupon", coupon)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    BackupOrderPostResponse.class )

    }

    def cancelBackup ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}"

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
                    CancelBackup200Response.class )

    }

    def getBackupInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}"

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
                    Backup.class )

    }

    def getBackupInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}/invoices"

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

    def getBackupLogin ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}/login"

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
                    BackupLoginResponse.class )

    }

    def getBackupsList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    BackupRow.class )

    }

    def getBackupsWelcomeEmail ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}/welcome_email"

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

    def getNewBackup ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    BackupsOrder.class )

    }

    def updateBackupInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/${id}"

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

    def validateBackupOrder ( Boolean validateOnly, Integer serviceType, String coupon, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/backups/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("validateOnly", validateOnly)
        bodyParams.put("serviceType", serviceType)
        bodyParams.put("coupon", coupon)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    BackupOrderPutResponse.class )

    }

}
