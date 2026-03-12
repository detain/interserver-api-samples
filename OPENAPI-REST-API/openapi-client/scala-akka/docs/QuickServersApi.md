# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addQs**](QuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order
[**addQsWithHttpInfo**](QuickServersApi.md#addQsWithHttpInfo) | **POST** /qs/order | Place QuickServer Order
[**deleteQsBackup**](QuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**deleteQsBackupWithHttpInfo**](QuickServersApi.md#deleteQsBackupWithHttpInfo) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**doQsBlockSmtp**](QuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**doQsBlockSmtpWithHttpInfo**](QuickServersApi.md#doQsBlockSmtpWithHttpInfo) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**doQsDisableCd**](QuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**doQsDisableCdWithHttpInfo**](QuickServersApi.md#doQsDisableCdWithHttpInfo) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**doQsDisableQuota**](QuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**doQsDisableQuotaWithHttpInfo**](QuickServersApi.md#doQsDisableQuotaWithHttpInfo) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**doQsEjectCd**](QuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**doQsEjectCdWithHttpInfo**](QuickServersApi.md#doQsEjectCdWithHttpInfo) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**doQsEnableQuota**](QuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**doQsEnableQuotaWithHttpInfo**](QuickServersApi.md#doQsEnableQuotaWithHttpInfo) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**doQsRestart**](QuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer
[**doQsRestartWithHttpInfo**](QuickServersApi.md#doQsRestartWithHttpInfo) | **GET** /qs/{id}/restart | Restart QuickServer
[**doQsStart**](QuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer
[**doQsStartWithHttpInfo**](QuickServersApi.md#doQsStartWithHttpInfo) | **GET** /qs/{id}/start | Start QuickServer
[**doQsStop**](QuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer
[**doQsStopWithHttpInfo**](QuickServersApi.md#doQsStopWithHttpInfo) | **GET** /qs/{id}/stop | Stop QuickServer
[**downloadQsBackup**](QuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**downloadQsBackupWithHttpInfo**](QuickServersApi.md#downloadQsBackupWithHttpInfo) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**getNewQs**](QuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information
[**getNewQsWithHttpInfo**](QuickServersApi.md#getNewQsWithHttpInfo) | **GET** /qs/order | Get QuickServer Ordering Information
[**getQsBackups**](QuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups
[**getQsBackupsWithHttpInfo**](QuickServersApi.md#getQsBackupsWithHttpInfo) | **GET** /qs/{id}/backups | List QuickServer Backups
[**getQsChangeHostname**](QuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**getQsChangeHostnameWithHttpInfo**](QuickServersApi.md#getQsChangeHostnameWithHttpInfo) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**getQsChangeRootPassword**](QuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**getQsChangeRootPasswordWithHttpInfo**](QuickServersApi.md#getQsChangeRootPasswordWithHttpInfo) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**getQsChangeTimezone**](QuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**getQsChangeTimezoneWithHttpInfo**](QuickServersApi.md#getQsChangeTimezoneWithHttpInfo) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**getQsChangeWebuzoPassword**](QuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**getQsChangeWebuzoPasswordWithHttpInfo**](QuickServersApi.md#getQsChangeWebuzoPasswordWithHttpInfo) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**getQsInfo**](QuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order
[**getQsInfoWithHttpInfo**](QuickServersApi.md#getQsInfoWithHttpInfo) | **GET** /qs/{id} | Get QuickServer Order
[**getQsInsertCd**](QuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**getQsInsertCdWithHttpInfo**](QuickServersApi.md#getQsInsertCdWithHttpInfo) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**getQsInvoices**](QuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**getQsInvoicesWithHttpInfo**](QuickServersApi.md#getQsInvoicesWithHttpInfo) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**getQsList**](QuickServersApi.md#getQsList) | **GET** /qs | List QuickServers
[**getQsListWithHttpInfo**](QuickServersApi.md#getQsListWithHttpInfo) | **GET** /qs | List QuickServers
[**getQsReinstallOs**](QuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**getQsReinstallOsWithHttpInfo**](QuickServersApi.md#getQsReinstallOsWithHttpInfo) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**getQsResetPassword**](QuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**getQsResetPasswordWithHttpInfo**](QuickServersApi.md#getQsResetPasswordWithHttpInfo) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**getQsReverseDns**](QuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**getQsReverseDnsWithHttpInfo**](QuickServersApi.md#getQsReverseDnsWithHttpInfo) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**getQsSetupVnc**](QuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**getQsSetupVncWithHttpInfo**](QuickServersApi.md#getQsSetupVncWithHttpInfo) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**getQsTrafficUsage**](QuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**getQsTrafficUsageWithHttpInfo**](QuickServersApi.md#getQsTrafficUsageWithHttpInfo) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**getQsViewDesktop**](QuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**getQsViewDesktopWithHttpInfo**](QuickServersApi.md#getQsViewDesktopWithHttpInfo) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**getQsWelcomeEmail**](QuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**getQsWelcomeEmailWithHttpInfo**](QuickServersApi.md#getQsWelcomeEmailWithHttpInfo) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**postQsBackup**](QuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**postQsBackupWithHttpInfo**](QuickServersApi.md#postQsBackupWithHttpInfo) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**postQsChangeHostname**](QuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**postQsChangeHostnameWithHttpInfo**](QuickServersApi.md#postQsChangeHostnameWithHttpInfo) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**postQsChangeRootPassword**](QuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password
[**postQsChangeRootPasswordWithHttpInfo**](QuickServersApi.md#postQsChangeRootPasswordWithHttpInfo) | **POST** /qs/{id}/change_root_password | Change Root Password
[**postQsChangeTimezone**](QuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**postQsChangeTimezoneWithHttpInfo**](QuickServersApi.md#postQsChangeTimezoneWithHttpInfo) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**postQsChangeWebuzoPassword**](QuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**postQsChangeWebuzoPasswordWithHttpInfo**](QuickServersApi.md#postQsChangeWebuzoPasswordWithHttpInfo) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**postQsInsertCd**](QuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**postQsInsertCdWithHttpInfo**](QuickServersApi.md#postQsInsertCdWithHttpInfo) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**postQsReinstallOs**](QuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**postQsReinstallOsWithHttpInfo**](QuickServersApi.md#postQsReinstallOsWithHttpInfo) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**postQsResetPassword**](QuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**postQsResetPasswordWithHttpInfo**](QuickServersApi.md#postQsResetPasswordWithHttpInfo) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**postQsReverseDns**](QuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**postQsReverseDnsWithHttpInfo**](QuickServersApi.md#postQsReverseDnsWithHttpInfo) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**postQsSetupVnc**](QuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**postQsSetupVncWithHttpInfo**](QuickServersApi.md#postQsSetupVncWithHttpInfo) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**postQsTrafficUsage**](QuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**postQsTrafficUsageWithHttpInfo**](QuickServersApi.md#postQsTrafficUsageWithHttpInfo) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**postQsViewDesktop**](QuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**postQsViewDesktopWithHttpInfo**](QuickServersApi.md#postQsViewDesktopWithHttpInfo) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**postQuickServerRestore**](QuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**postQuickServerRestoreWithHttpInfo**](QuickServersApi.md#postQuickServerRestoreWithHttpInfo) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**putQs**](QuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order
[**putQsWithHttpInfo**](QuickServersApi.md#putQsWithHttpInfo) | **PUT** /qs/order | Validate QuickServer Order
[**quickserversCancel**](QuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**quickserversCancelWithHttpInfo**](QuickServersApi.md#quickserversCancelWithHttpInfo) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**updateQsInfo**](QuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order
[**updateQsInfoWithHttpInfo**](QuickServersApi.md#updateQsInfoWithHttpInfo) | **POST** /qs/{id} | Update QuickServer Order



## addQs

> addQs(): ApiRequest[Unit]

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.addQs()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#addQs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#addQs")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

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


## deleteQsBackup

> deleteQsBackup(deleteQsBackupRequest): ApiRequest[SuccessTextResponse]

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val file: String = file_example // String | The backup filename to delete.

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    
    val request = apiInstance.deleteQsBackup(id, file, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#deleteQsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#deleteQsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
 **file** | **String**| The backup filename to delete. |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

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


## doQsBlockSmtp

> doQsBlockSmtp(doQsBlockSmtpRequest): ApiRequest[QueueResponse]

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsBlockSmtp(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsBlockSmtp")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsBlockSmtp")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsDisableCd

> doQsDisableCd(doQsDisableCdRequest): ApiRequest[QueueResponse]

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsDisableCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsDisableCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsDisableCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsDisableQuota

> doQsDisableQuota(doQsDisableQuotaRequest): ApiRequest[QueueResponse]

Disable Quotas

Disables disk quota enforcement for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsDisableQuota(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsDisableQuota")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsDisableQuota")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsEjectCd

> doQsEjectCd(doQsEjectCdRequest): ApiRequest[QueueResponse]

Eject CD Drive

Ejects the virtual CD from the QuickServer&#39;s CD drive.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsEjectCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsEjectCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsEjectCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsEnableQuota

> doQsEnableQuota(doQsEnableQuotaRequest): ApiRequest[QueueResponse]

Enable Quotas

Enables disk quota enforcement for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsEnableQuota(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsEnableQuota")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsEnableQuota")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsRestart

> doQsRestart(doQsRestartRequest): ApiRequest[QueueResponse]

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsRestart(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsRestart")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsRestart")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsStart

> doQsStart(doQsStartRequest): ApiRequest[QueueResponse]

Start QuickServer

Powers on the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsStart(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsStart")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsStart")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## doQsStop

> doQsStop(doQsStopRequest): ApiRequest[QueueResponse]

Stop QuickServer

Powers off the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.doQsStop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#doQsStop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#doQsStop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

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


## downloadQsBackup

> downloadQsBackup(downloadQsBackupRequest): ApiRequest[DownloadQsBackup200Response]

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val downloadQsBackupRequest: DownloadQsBackupRequest =  // DownloadQsBackupRequest | 

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    
    val request = apiInstance.downloadQsBackup(id, downloadQsBackupRequest, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#downloadQsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#downloadQsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
 **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

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


## getNewQs

> getNewQs(): ApiRequest[QuickserverOrder]

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getNewQs()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getNewQs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getNewQs")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**QuickserverOrder**](QuickserverOrder.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver Ordering information. |  -  |
| **401** | Unauthorized |  -  |


## getQsBackups

> getQsBackups(getQsBackupsRequest): ApiRequest[VpsBackupRows]

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val all: String = all_example // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    
    val request = apiInstance.getQsBackups(id, all)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsBackups")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsBackups")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

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
| **200** | The listing of available backups for the QuickServer. |  -  |
| **401** | Unauthorized |  -  |


## getQsChangeHostname

> getQsChangeHostname(getQsChangeHostnameRequest): ApiRequest[Unit]

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsChangeHostname(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsChangeHostname")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsChangeHostname")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Change Hostname info response |  -  |
| **401** | Unauthorized |  -  |


## getQsChangeRootPassword

> getQsChangeRootPassword(getQsChangeRootPasswordRequest): ApiRequest[Unit]

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsChangeRootPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsChangeRootPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsChangeRootPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Change Root Password response |  -  |
| **401** | Unauthorized |  -  |


## getQsChangeTimezone

> getQsChangeTimezone(getQsChangeTimezoneRequest): ApiRequest[Seq[String]]

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsChangeTimezone(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsChangeTimezone")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsChangeTimezone")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |


## getQsChangeWebuzoPassword

> getQsChangeWebuzoPassword(getQsChangeWebuzoPasswordRequest): ApiRequest[Unit]

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsChangeWebuzoPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsChangeWebuzoPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsChangeWebuzoPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Change Webuzo Password info response |  -  |
| **401** | Unauthorized |  -  |


## getQsInfo

> getQsInfo(getQsInfoRequest): ApiRequest[Quickserver]

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number.
    
    val request = apiInstance.getQsInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number. |

### Return type

ApiRequest[[**Quickserver**](Quickserver.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver details |  -  |
| **401** | Unauthorized |  -  |


## getQsInsertCd

> getQsInsertCd(getQsInsertCdRequest): ApiRequest[Unit]

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsInsertCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsInsertCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsInsertCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Insert CD info response |  -  |
| **401** | Unauthorized |  -  |


## getQsInvoices

> getQsInvoices(getQsInvoicesRequest): ApiRequest[ChargeInvoiceRows]

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsInvoices(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsInvoices")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsInvoices")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |


## getQsList

> getQsList(): ApiRequest[Seq[QuickserverRow]]

List QuickServers

Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getQsList()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsList")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsList")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**Seq[QuickserverRow]**](QuickserverRow.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Quickservers&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |


## getQsReinstallOs

> getQsReinstallOs(getQsReinstallOsRequest): ApiRequest[VpsTemplatesList]

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsReinstallOs(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsReinstallOs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsReinstallOs")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |


## getQsResetPassword

> getQsResetPassword(getQsResetPasswordRequest): ApiRequest[Unit]

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer&#39;s root password.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsResetPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsResetPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsResetPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Reset password info |  -  |
| **401** | Unauthorized |  -  |


## getQsReverseDns

> getQsReverseDns(getQsReverseDnsRequest): ApiRequest[ReverseDnsEntries]

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsReverseDns(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsReverseDns")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsReverseDns")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | QuickServer Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |


## getQsSetupVnc

> getQsSetupVnc(getQsSetupVncRequest): ApiRequest[Unit]

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsSetupVnc(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsSetupVnc")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsSetupVnc")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Get QuickServer Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |


## getQsTrafficUsage

> getQsTrafficUsage(getQsTrafficUsageRequest): ApiRequest[Unit]

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsTrafficUsage(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsTrafficUsage")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsTrafficUsage")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Get QuickServer Traffic usage |  -  |
| **401** | Unauthorized |  -  |


## getQsViewDesktop

> getQsViewDesktop(getQsViewDesktopRequest): ApiRequest[Unit]

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.getQsViewDesktop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsViewDesktop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsViewDesktop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Get QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |


## getQsWelcomeEmail

> getQsWelcomeEmail(getQsWelcomeEmailRequest): ApiRequest[TextResponse]

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: String = 133123 // String | Quickserver ID
    
    val request = apiInstance.getQsWelcomeEmail(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#getQsWelcomeEmail")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#getQsWelcomeEmail")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Quickserver ID |

### Return type

ApiRequest[[**TextResponse**](TextResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |


## postQsBackup

> postQsBackup(postQsBackupRequest): ApiRequest[QueueResponse]

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsBackup(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsBackup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsBackup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsChangeHostname

> postQsChangeHostname(postQsChangeHostnameRequest): ApiRequest[QueueResponse]

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsChangeHostname(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsChangeHostname")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsChangeHostname")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsChangeRootPassword

> postQsChangeRootPassword(postQsChangeRootPasswordRequest): ApiRequest[QueueResponse]

Change Root Password

Triggers a root password reset for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsChangeRootPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsChangeRootPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsChangeRootPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsChangeTimezone

> postQsChangeTimezone(postQsChangeTimezoneRequest): ApiRequest[QueueResponse]

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val timezone: String = timezone_example // String | The time zone
    
    val request = apiInstance.postQsChangeTimezone(id, timezone)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsChangeTimezone")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsChangeTimezone")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
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


## postQsChangeWebuzoPassword

> postQsChangeWebuzoPassword(postQsChangeWebuzoPasswordRequest): ApiRequest[QueueResponse]

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsChangeWebuzoPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsChangeWebuzoPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsChangeWebuzoPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsInsertCd

> postQsInsertCd(postQsInsertCdRequest): ApiRequest[QueueResponse]

Insert CD in QuickServer

Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsInsertCd(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsInsertCd")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsInsertCd")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsReinstallOs

> postQsReinstallOs(postQsReinstallOsRequest): ApiRequest[QueueResponse]

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsReinstallOs(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsReinstallOs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsReinstallOs")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsResetPassword

> postQsResetPassword(postQsResetPasswordRequest): ApiRequest[QueueResponse]

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsResetPassword(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsResetPassword")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsResetPassword")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsReverseDns

> postQsReverseDns(postQsReverseDnsRequest): ApiRequest[TextResponse]

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val reverseDnsEntries: ReverseDnsEntries =  // ReverseDnsEntries | 
    
    val request = apiInstance.postQsReverseDns(id, reverseDnsEntries)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsReverseDns")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsReverseDns")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
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
| **200** | Update QuickServer Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |


## postQsSetupVnc

> postQsSetupVnc(postQsSetupVncRequest): ApiRequest[QueueResponse]

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsSetupVnc(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsSetupVnc")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsSetupVnc")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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


## postQsTrafficUsage

> postQsTrafficUsage(postQsTrafficUsageRequest): ApiRequest[Unit]

Search Traffic Usage

Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsTrafficUsage(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsTrafficUsage")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsTrafficUsage")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Submit QuickServer Traffic Usage |  -  |
| **401** | Unauthorized |  -  |


## postQsViewDesktop

> postQsViewDesktop(postQsViewDesktopRequest): ApiRequest[Unit]

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.postQsViewDesktop(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQsViewDesktop")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQsViewDesktop")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

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
| **200** | Submit QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |


## postQuickServerRestore

> postQuickServerRestore(postQuickServerRestoreRequest): ApiRequest[QueueResponse]

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number

    val restoreRequest: RestoreRequest =  // RestoreRequest | QuickServer Restore request
    
    val request = apiInstance.postQuickServerRestore(id, restoreRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#postQuickServerRestore")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#postQuickServerRestore")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |
 **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request |

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


## putQs

> putQs(): ApiRequest[Unit]

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.putQs()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#putQs")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#putQs")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

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
| **200** | Validate QuickServer Order response |  -  |
| **401** | Unauthorized |  -  |


## quickserversCancel

> quickserversCancel(quickserversCancelRequest): ApiRequest[QuickserversCancel200Response]

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | QuickServer ID number
    
    val request = apiInstance.quickserversCancel(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#quickserversCancel")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#quickserversCancel")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| QuickServer ID number |

### Return type

ApiRequest[[**QuickserversCancel200Response**](QuickserversCancel200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Rapid Deploy Servers Cancel |  -  |
| **401** | Unauthorized |  -  |


## updateQsInfo

> updateQsInfo(updateQsInfoRequest): ApiRequest[Unit]

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

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
    val apiInstance = QuickServersApi("https://my.interserver.net/apiv2")
    val id: String = id_example // String | QuickServer ID number.
    
    val request = apiInstance.updateQsInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling QuickServersApi#updateQsInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling QuickServersApi#updateQsInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| QuickServer ID number. |

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

