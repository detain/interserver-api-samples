package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.BuyItNowList
import org.openapitools.model.CaptchaResponse
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.GetOauthRedirect200Response
import org.openapitools.model.LoginErrorResponse
import org.openapitools.model.LoginInfo
import org.openapitools.model.LoginSubmissionExample
import org.openapitools.model.LoginSubmissionExampleGRecaptchaResponse
import org.openapitools.model.LoginSuccessResponse
import org.openapitools.model.PatchOauthTwoFactor200Response
import org.openapitools.model.PatchOauthTwoFactorRequest
import org.openapitools.model.PostOauthCallback200Response
import org.openapitools.model.PostOauthCallbackRequest
import org.openapitools.model.ServicesInfo

class PublicApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def getCaptcha ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/captcha"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    CaptchaResponse.class )

    }

    def getCountries ( String fetchBy, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/account/countries"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType


        if (fetchBy != null) {
            queryParams.put("fetch_by", fetchBy)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    Object.class )

    }

    def getInfo ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/info"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    ServicesInfo.class )

    }

    def getLoginInfo ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/login"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    LoginInfo.class )

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

    def getOauthRedirect ( String provider, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/oauth"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (provider == null) {
            throw new RuntimeException("missing required params provider")
        }

        if (provider != null) {
            queryParams.put("provider", provider)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    GetOauthRedirect200Response.class )

    }

    def getTimezones ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/account/timezones"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    String.class )

    }

    def patchOauthTwoFactor ( PatchOauthTwoFactorRequest patchOauthTwoFactorRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/oauth"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (patchOauthTwoFactorRequest == null) {
            throw new RuntimeException("missing required params patchOauthTwoFactorRequest")
        }



        contentType = 'application/json';
        bodyParams = patchOauthTwoFactorRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PATCH", "",
                    PatchOauthTwoFactor200Response.class )

    }

    def pingServer ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/ping"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    String.class )

    }

    def postOauthCallback ( String provider, PostOauthCallbackRequest postOauthCallbackRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/oauth"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (provider == null) {
            throw new RuntimeException("missing required params provider")
        }

        if (provider != null) {
            queryParams.put("provider", provider)
        }


        contentType = 'application/json';
        bodyParams = postOauthCallbackRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    PostOauthCallback200Response.class )

    }

    def submitLogin ( String login, String passwd, String remember, LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse, String tfa, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/login"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (login == null) {
            throw new RuntimeException("missing required params login")
        }
        // verify required params are set
        if (passwd == null) {
            throw new RuntimeException("missing required params passwd")
        }




        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("login", login)
        bodyParams.put("passwd", passwd)
        bodyParams.put("remember", remember)
        bodyParams.put("g-recaptcha-response", gRecaptchaResponse)
        bodyParams.put("tfa", tfa)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    LoginSuccessResponse.class )

    }

    def submitSignup ( LoginSubmissionExample loginSubmissionExample, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/signup"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType




        contentType = 'application/json';
        bodyParams = loginSubmissionExample


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    null )

    }

}
