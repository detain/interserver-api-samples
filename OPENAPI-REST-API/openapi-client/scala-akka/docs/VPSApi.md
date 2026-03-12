# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addVps**](VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order
[**addVpsWithHttpInfo**](VPSApi.md#addVpsWithHttpInfo) | **POST** /vps/order | Place VPS Order
[**deleteVpsBackup**](VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**deleteVpsBackupWithHttpInfo**](VPSApi.md#deleteVpsBackupWithHttpInfo) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**doVpsBlockSmtp**](VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsBlockSmtpWithHttpInfo**](VPSApi.md#doVpsBlockSmtpWithHttpInfo) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsDisableCd**](VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableCdWithHttpInfo**](VPSApi.md#doVpsDisableCdWithHttpInfo) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableQuota**](VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsDisableQuotaWithHttpInfo**](VPSApi.md#doVpsDisableQuotaWithHttpInfo) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsEjectCd**](VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEjectCdWithHttpInfo**](VPSApi.md#doVpsEjectCdWithHttpInfo) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEnableQuota**](VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsEnableQuotaWithHttpInfo**](VPSApi.md#doVpsEnableQuotaWithHttpInfo) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsRestart**](VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsRestartWithHttpInfo**](VPSApi.md#doVpsRestartWithHttpInfo) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsStart**](VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS
[**doVpsStartWithHttpInfo**](VPSApi.md#doVpsStartWithHttpInfo) | **GET** /vps/{id}/start | Start VPS
[**doVpsStop**](VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**doVpsStopWithHttpInfo**](VPSApi.md#doVpsStopWithHttpInfo) | **GET** /vps/{id}/stop | Stop VPS
[**downloadVpsBackup**](VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**downloadVpsBackupWithHttpInfo**](VPSApi.md#downloadVpsBackupWithHttpInfo) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**getNewVps**](VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information
[**getNewVpsWithHttpInfo**](VPSApi.md#getNewVpsWithHttpInfo) | **GET** /vps/order | VPS Ordering Information
[**getVpsBackups**](VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBackupsWithHttpInfo**](VPSApi.md#getVpsBackupsWithHttpInfo) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBuyHdSpace**](VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyHdSpaceWithHttpInfo**](VPSApi.md#getVpsBuyHdSpaceWithHttpInfo) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyIp**](VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsBuyIpWithHttpInfo**](VPSApi.md#getVpsBuyIpWithHttpInfo) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsChangeTimezone**](VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsChangeTimezoneWithHttpInfo**](VPSApi.md#getVpsChangeTimezoneWithHttpInfo) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsInfo**](VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInfoWithHttpInfo**](VPSApi.md#getVpsInfoWithHttpInfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInvoices**](VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsInvoicesWithHttpInfo**](VPSApi.md#getVpsInvoicesWithHttpInfo) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsList**](VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders
[**getVpsListWithHttpInfo**](VPSApi.md#getVpsListWithHttpInfo) | **GET** /vps | List VPS Orders
[**getVpsReinstallOs**](VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReinstallOsWithHttpInfo**](VPSApi.md#getVpsReinstallOsWithHttpInfo) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReverseDns**](VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsReverseDnsWithHttpInfo**](VPSApi.md#getVpsReverseDnsWithHttpInfo) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsSetupVnc**](VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSetupVncWithHttpInfo**](VPSApi.md#getVpsSetupVncWithHttpInfo) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSlices**](VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsSlicesWithHttpInfo**](VPSApi.md#getVpsSlicesWithHttpInfo) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsTrafficUsage**](VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsTrafficUsageWithHttpInfo**](VPSApi.md#getVpsTrafficUsageWithHttpInfo) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsViewDesktop**](VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsViewDesktopWithHttpInfo**](VPSApi.md#getVpsViewDesktopWithHttpInfo) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsWelcomeEmail**](VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**getVpsWelcomeEmailWithHttpInfo**](VPSApi.md#getVpsWelcomeEmailWithHttpInfo) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**postVpsBackup**](VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBackupWithHttpInfo**](VPSApi.md#postVpsBackupWithHttpInfo) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBuyHdSpace**](VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyHdSpaceWithHttpInfo**](VPSApi.md#postVpsBuyHdSpaceWithHttpInfo) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyIp**](VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsBuyIpWithHttpInfo**](VPSApi.md#postVpsBuyIpWithHttpInfo) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsChangeHostname**](VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeHostnameWithHttpInfo**](VPSApi.md#postVpsChangeHostnameWithHttpInfo) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeRootPassword**](VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeRootPasswordWithHttpInfo**](VPSApi.md#postVpsChangeRootPasswordWithHttpInfo) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeTimezone**](VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeTimezoneWithHttpInfo**](VPSApi.md#postVpsChangeTimezoneWithHttpInfo) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeWebuzoPassword**](VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsChangeWebuzoPasswordWithHttpInfo**](VPSApi.md#postVpsChangeWebuzoPasswordWithHttpInfo) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsInsertCd**](VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsInsertCdWithHttpInfo**](VPSApi.md#postVpsInsertCdWithHttpInfo) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsReinstallOs**](VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsReinstallOsWithHttpInfo**](VPSApi.md#postVpsReinstallOsWithHttpInfo) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsResetPassword**](VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsResetPasswordWithHttpInfo**](VPSApi.md#postVpsResetPasswordWithHttpInfo) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsRestore**](VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsRestoreWithHttpInfo**](VPSApi.md#postVpsRestoreWithHttpInfo) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsReverseDns**](VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsReverseDnsWithHttpInfo**](VPSApi.md#postVpsReverseDnsWithHttpInfo) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsSetupVnc**](VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSetupVncWithHttpInfo**](VPSApi.md#postVpsSetupVncWithHttpInfo) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSlices**](VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsSlicesWithHttpInfo**](VPSApi.md#postVpsSlicesWithHttpInfo) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsViewDesktop**](VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**postVpsViewDesktopWithHttpInfo**](VPSApi.md#postVpsViewDesktopWithHttpInfo) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**putVps**](VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order
[**putVpsWithHttpInfo**](VPSApi.md#putVpsWithHttpInfo) | **PUT** /vps/order | Validate VPS Order
[**updateVpsInfo**](VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**updateVpsInfoWithHttpInfo**](VPSApi.md#updateVpsInfoWithHttpInfo) | **POST** /vps/{id} | Update VPS Order
[**vPSCancel**](VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service
[**vPSCancelWithHttpInfo**](VPSApi.md#vPSCancelWithHttpInfo) | **DELETE** /vps/{id} | Cancel VPS Service



## addVps

> addVps(addVpsRequest): ApiRequest[Unit]

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val vpsOrderPostRequest: VpsOrderPostRequest =  // VpsOrderPostRequest | 
    
    val request = apiInstance.addVps(vpsOrderPostRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#addVps")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#addVps")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPostRequest** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional]

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## deleteVpsBackup

> deleteVpsBackup(deleteVpsBackupRequest): ApiRequest[SuccessTextResponse]

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val file: String = file_example // String | The backup filename to delete.

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
    
    val request = apiInstance.deleteVpsBackup(id, file, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#deleteVpsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#deleteVpsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **file** | **String**| The backup filename to delete. |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

ApiRequest[[**SuccessTextResponse**](SuccessTextResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |


## doVpsBlockSmtp

> doVpsBlockSmtp(doVpsBlockSmtpRequest): ApiRequest[QueueResponse]

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsBlockSmtp(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsBlockSmtp")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsBlockSmtp")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsDisableCd

> doVpsDisableCd(doVpsDisableCdRequest): ApiRequest[QueueResponse]

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsDisableCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsDisableCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsDisableCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsDisableQuota

> doVpsDisableQuota(doVpsDisableQuotaRequest): ApiRequest[QueueResponse]

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsDisableQuota(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsDisableQuota")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsDisableQuota")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsEjectCd

> doVpsEjectCd(doVpsEjectCdRequest): ApiRequest[QueueResponse]

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsEjectCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsEjectCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsEjectCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsEnableQuota

> doVpsEnableQuota(doVpsEnableQuotaRequest): ApiRequest[QueueResponse]

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsEnableQuota(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsEnableQuota")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsEnableQuota")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsRestart

> doVpsRestart(doVpsRestartRequest): ApiRequest[QueueResponse]

Restart VPS

Restarts the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsRestart(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsRestart")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsRestart")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsStart

> doVpsStart(doVpsStartRequest): ApiRequest[QueueResponse]

Start VPS

Powers on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsStart(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsStart")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsStart")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## doVpsStop

> doVpsStop(doVpsStopRequest): ApiRequest[QueueResponse]

Stop VPS

Powers off the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number.
    
    val request = apiInstance.doVpsStop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#doVpsStop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#doVpsStop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number. |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## downloadVpsBackup

> downloadVpsBackup(downloadVpsBackupRequest): ApiRequest[DownloadQsBackup200Response]

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example

```scala
// Import classes:
import 
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val downloadQsBackupRequest: DownloadQsBackupRequest =  // DownloadQsBackupRequest | 

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
    
    val request = apiInstance.downloadVpsBackup(id, downloadQsBackupRequest, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#downloadVpsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#downloadVpsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

ApiRequest[[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Download URL for the backup file. |  -  |
| **401** | Unauthorized |  -  |


## getNewVps

> getNewVps(): ApiRequest[VpsOrder]

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getNewVps()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getNewVps")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getNewVps")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**VpsOrder**](VpsOrder.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Order information |  -  |
| **401** | Unauthorized |  -  |


## getVpsBackups

> getVpsBackups(getVpsBackupsRequest): ApiRequest[VpsBackupRows]

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
    
    val request = apiInstance.getVpsBackups(id, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsBackups")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsBackups")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

ApiRequest[[**VpsBackupRows**](VpsBackupRows.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of the available backups |  -  |
| **401** | Unauthorized |  -  |


## getVpsBuyHdSpace

> getVpsBuyHdSpace(getVpsBuyHdSpaceRequest): ApiRequest[Unit]

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsBuyHdSpace(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsBuyHdSpace")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsBuyHdSpace")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Buy HD Space information |  -  |
| **401** | Unauthorized |  -  |


## getVpsBuyIp

> getVpsBuyIp(getVpsBuyIpRequest): ApiRequest[Unit]

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsBuyIp(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsBuyIp")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsBuyIp")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Buy IP information |  -  |
| **401** | Unauthorized |  -  |


## getVpsChangeTimezone

> getVpsChangeTimezone(getVpsChangeTimezoneRequest): ApiRequest[Seq[String]]

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsChangeTimezone(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsChangeTimezone")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsChangeTimezone")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[**Seq[String]**]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |


## getVpsInfo

> getVpsInfo(getVpsInfoRequest): ApiRequest[Vps]

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**Vps**](Vps.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The VPS Information |  -  |
| **401** | Unauthorized |  -  |


## getVpsInvoices

> getVpsInvoices(getVpsInvoicesRequest): ApiRequest[ChargeInvoiceRows]

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsInvoices(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsInvoices")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsInvoices")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**ChargeInvoiceRows**](ChargeInvoiceRows.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Invoices response |  -  |
| **401** | Unauthorized |  -  |


## getVpsList

> getVpsList(): ApiRequest[Seq[VpsRow]]

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getVpsList()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsList")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsList")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**Seq[VpsRow]**](VpsRow.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Vps&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |


## getVpsReinstallOs

> getVpsReinstallOs(getVpsReinstallOsRequest): ApiRequest[VpsTemplatesList]

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsReinstallOs(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsReinstallOs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsReinstallOs")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**VpsTemplatesList**](VpsTemplatesList.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |


## getVpsReverseDns

> getVpsReverseDns(getVpsReverseDnsRequest): ApiRequest[ReverseDnsEntries]

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsReverseDns(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsReverseDns")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsReverseDns")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**ReverseDnsEntries**](ReverseDnsEntries.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |


## getVpsSetupVnc

> getVpsSetupVnc(getVpsSetupVncRequest): ApiRequest[Unit]

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsSetupVnc(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsSetupVnc")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsSetupVnc")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |


## getVpsSlices

> getVpsSlices(getVpsSlicesRequest): ApiRequest[Unit]

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsSlices(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsSlices")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsSlices")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Slices information |  -  |
| **401** | Unauthorized |  -  |


## getVpsTrafficUsage

> getVpsTrafficUsage(getVpsTrafficUsageRequest): ApiRequest[VpsTrafficResponse]

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsTrafficUsage(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsTrafficUsage")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsTrafficUsage")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**VpsTrafficResponse**](VpsTrafficResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Traffic usage |  -  |
| **401** | Unauthorized |  -  |


## getVpsViewDesktop

> getVpsViewDesktop(getVpsViewDesktopRequest): ApiRequest[Unit]

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.getVpsViewDesktop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsViewDesktop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsViewDesktop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |


## getVpsWelcomeEmail

> getVpsWelcomeEmail(getVpsWelcomeEmailRequest): ApiRequest[SuccessTextResponse]

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: String = 4813 // String | VPS ID
    
    val request = apiInstance.getVpsWelcomeEmail(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#getVpsWelcomeEmail")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#getVpsWelcomeEmail")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID |

### Return type

ApiRequest[[**SuccessTextResponse**](SuccessTextResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |


## postVpsBackup

> postVpsBackup(postVpsBackupRequest): ApiRequest[QueueResponse]

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsBackup(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsBuyHdSpace

> postVpsBuyHdSpace(postVpsBuyHdSpaceRequest): ApiRequest[Unit]

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsBuyHdSpace(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsBuyHdSpace")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsBuyHdSpace")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Post Buy HD Space for VPS response |  -  |
| **401** | Unauthorized |  -  |


## postVpsBuyIp

> postVpsBuyIp(postVpsBuyIpRequest): ApiRequest[Unit]

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsBuyIp(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsBuyIp")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsBuyIp")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Submit VPS Buy IP form response |  -  |
| **401** | Unauthorized |  -  |


## postVpsChangeHostname

> postVpsChangeHostname(postVpsChangeHostnameRequest): ApiRequest[QueueResponse]

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val hostname: String = hostname_example // String | 
    
    val request = apiInstance.postVpsChangeHostname(id, hostname)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsChangeHostname")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsChangeHostname")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **hostname** | **String**|  | [optional]

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsChangeRootPassword

> postVpsChangeRootPassword(postVpsChangeRootPasswordRequest): ApiRequest[QueueResponse]

Change VPS Root Password

Changes the root password of the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val password: String = password_example // String | 
    
    val request = apiInstance.postVpsChangeRootPassword(id, password)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsChangeRootPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsChangeRootPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **password** | **String**|  |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsChangeTimezone

> postVpsChangeTimezone(postVpsChangeTimezoneRequest): ApiRequest[QueueResponse]

Change VPS Timezone

Changes the system timezone on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val timezone: String = timezone_example // String | The time zone
    
    val request = apiInstance.postVpsChangeTimezone(id, timezone)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsChangeTimezone")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsChangeTimezone")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **timezone** | **String**| The time zone |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsChangeWebuzoPassword

> postVpsChangeWebuzoPassword(postVpsChangeWebuzoPasswordRequest): ApiRequest[QueueResponse]

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val password: String = password_example // String | 
    
    val request = apiInstance.postVpsChangeWebuzoPassword(id, password)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsChangeWebuzoPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsChangeWebuzoPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **password** | **String**|  |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsInsertCd

> postVpsInsertCd(postVpsInsertCdRequest): ApiRequest[QueueResponse]

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val url: String = url_example // String | 
    
    val request = apiInstance.postVpsInsertCd(id, url)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsInsertCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsInsertCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **url** | **String**|  | [optional]

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsReinstallOs

> postVpsReinstallOs(postVpsReinstallOsRequest): ApiRequest[QueueResponse]

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val template: String = template_example // String | OS Template Filename

    val localPassword: String = localPassword_example // String | Password for this account.

    val password: String = password_example // String | Password for Root / Administrator Account.
    
    val request = apiInstance.postVpsReinstallOs(id, template, localPassword, password)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsReinstallOs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsReinstallOs")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **template** | **String**| OS Template Filename |
 **localPassword** | **String**| Password for this account. |
 **password** | **String**| Password for Root / Administrator Account. | [optional]

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsResetPassword

> postVpsResetPassword(postVpsResetPasswordRequest): ApiRequest[QueueResponse]

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsResetPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsResetPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsResetPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsRestore

> postVpsRestore(postVpsRestoreRequest): ApiRequest[QueueResponse]

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example

```scala
// Import classes:
import 
import 
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val restoreRequest: RestoreRequest =  // RestoreRequest | VPS Restore request
    
    val request = apiInstance.postVpsRestore(id, restoreRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsRestore")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsRestore")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **400** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |


## postVpsReverseDns

> postVpsReverseDns(postVpsReverseDnsRequest): ApiRequest[TextResponse]

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```scala
// Import classes:
import 
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number

    val reverseDnsEntries: ReverseDnsEntries =  // ReverseDnsEntries | 
    
    val request = apiInstance.postVpsReverseDns(id, reverseDnsEntries)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsReverseDns")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsReverseDns")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |

### Return type

ApiRequest[[**TextResponse**](TextResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Update VPS Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |


## postVpsSetupVnc

> postVpsSetupVnc(postVpsSetupVncRequest): ApiRequest[QueueResponse]

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsSetupVnc(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsSetupVnc")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsSetupVnc")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**QueueResponse**](QueueResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |


## postVpsSlices

> postVpsSlices(postVpsSlicesRequest): ApiRequest[Unit]

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsSlices(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsSlices")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsSlices")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Update VPS slices response |  -  |
| **401** | Unauthorized |  -  |


## postVpsViewDesktop

> postVpsViewDesktop(postVpsViewDesktopRequest): ApiRequest[Unit]

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.postVpsViewDesktop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#postVpsViewDesktop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#postVpsViewDesktop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Submit VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |


## putVps

> putVps(putVpsRequest): ApiRequest[VpsOrderPutResponse]

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example

```scala
// Import classes:
import 
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val vpsOrderPutRequest: VpsOrderPutRequest =  // VpsOrderPutRequest | 
    
    val request = apiInstance.putVps(vpsOrderPutRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#putVps")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#putVps")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPutRequest** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional]

### Return type

ApiRequest[[**VpsOrderPutResponse**](VpsOrderPutResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate VPS order response. |  -  |
| **401** | Unauthorized |  -  |


## updateVpsInfo

> updateVpsInfo(updateVpsInfoRequest): ApiRequest[Unit]

Update VPS Order

Updates settings on a VPS order.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: String = id_example // String | VPS ID number.
    
    val request = apiInstance.updateVpsInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#updateVpsInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#updateVpsInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID number. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## vPSCancel

> vPSCancel(vPSCancelRequest): ApiRequest[VPSCancel200Response]

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = VPSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | VPS ID number
    
    val request = apiInstance.vPSCancel(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling VPSApi#vPSCancel")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling VPSApi#vPSCancel")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| VPS ID number |

### Return type

ApiRequest[[**VPSCancel200Response**](VPSCancel200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Cancel |  -  |
| **401** | Unauthorized |  -  |

