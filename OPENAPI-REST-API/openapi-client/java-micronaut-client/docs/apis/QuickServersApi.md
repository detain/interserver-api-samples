# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addQs**](QuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order |
| [**deleteQsBackup**](QuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup |
| [**doQsBlockSmtp**](QuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP |
| [**doQsDisableCd**](QuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive |
| [**doQsDisableQuota**](QuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas |
| [**doQsEjectCd**](QuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive |
| [**doQsEnableQuota**](QuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas |
| [**doQsRestart**](QuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer |
| [**doQsStart**](QuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer |
| [**doQsStop**](QuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer |
| [**downloadQsBackup**](QuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup |
| [**getNewQs**](QuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information |
| [**getQsBackups**](QuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups |
| [**getQsChangeHostname**](QuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname |
| [**getQsChangeRootPassword**](QuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info |
| [**getQsChangeTimezone**](QuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info |
| [**getQsChangeWebuzoPassword**](QuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info |
| [**getQsInfo**](QuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order |
| [**getQsInsertCd**](QuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information |
| [**getQsInvoices**](QuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices |
| [**getQsList**](QuickServersApi.md#getQsList) | **GET** /qs | List QuickServers |
| [**getQsReinstallOs**](QuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options |
| [**getQsResetPassword**](QuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info |
| [**getQsReverseDns**](QuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info |
| [**getQsSetupVnc**](QuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info |
| [**getQsTrafficUsage**](QuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage |
| [**getQsViewDesktop**](QuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info |
| [**getQsWelcomeEmail**](QuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email |
| [**postQsBackup**](QuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup |
| [**postQsChangeHostname**](QuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname |
| [**postQsChangeRootPassword**](QuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password |
| [**postQsChangeTimezone**](QuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone |
| [**postQsChangeWebuzoPassword**](QuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password |
| [**postQsInsertCd**](QuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer |
| [**postQsReinstallOs**](QuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS |
| [**postQsResetPassword**](QuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password |
| [**postQsReverseDns**](QuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS |
| [**postQsSetupVnc**](QuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC |
| [**postQsTrafficUsage**](QuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage |
| [**postQsViewDesktop**](QuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop |
| [**postQuickServerRestore**](QuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup |
| [**putQs**](QuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order |
| [**quickserversCancel**](QuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order |
| [**updateQsInfo**](QuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order |


## Creating QuickServersApi

To initiate an instance of `QuickServersApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.QuickServersApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(QuickServersApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    QuickServersApi quickServersApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addQs"></a>
# **addQs**
```java
Mono<Void> QuickServersApi.addQs()
```

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteQsBackup"></a>
# **deleteQsBackup**
```java
Mono<SuccessTextResponse> QuickServersApi.deleteQsBackup(id_fileall)
```

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **_file** | `String`| The backup filename to delete. | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsBlockSmtp"></a>
# **doQsBlockSmtp**
```java
Mono<QueueResponse> QuickServersApi.doQsBlockSmtp(id)
```

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsDisableCd"></a>
# **doQsDisableCd**
```java
Mono<QueueResponse> QuickServersApi.doQsDisableCd(id)
```

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsDisableQuota"></a>
# **doQsDisableQuota**
```java
Mono<QueueResponse> QuickServersApi.doQsDisableQuota(id)
```

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsEjectCd"></a>
# **doQsEjectCd**
```java
Mono<QueueResponse> QuickServersApi.doQsEjectCd(id)
```

Eject CD Drive

Ejects the virtual CD from the QuickServer&#39;s CD drive.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsEnableQuota"></a>
# **doQsEnableQuota**
```java
Mono<QueueResponse> QuickServersApi.doQsEnableQuota(id)
```

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsRestart"></a>
# **doQsRestart**
```java
Mono<QueueResponse> QuickServersApi.doQsRestart(id)
```

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsStart"></a>
# **doQsStart**
```java
Mono<QueueResponse> QuickServersApi.doQsStart(id)
```

Start QuickServer

Powers on the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doQsStop"></a>
# **doQsStop**
```java
Mono<QueueResponse> QuickServersApi.doQsStop(id)
```

Stop QuickServer

Powers off the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="downloadQsBackup"></a>
# **downloadQsBackup**
```java
Mono<DownloadQsBackup200Response> QuickServersApi.downloadQsBackup(iddownloadQsBackupRequestall)
```

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="getNewQs"></a>
# **getNewQs**
```java
Mono<QuickserverOrder> QuickServersApi.getNewQs()
```

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.



### Return type
[**QuickserverOrder**](QuickserverOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsBackups"></a>
# **getQsBackups**
```java
Mono<VpsBackupRows> QuickServersApi.getQsBackups(idall)
```

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**VpsBackupRows**](VpsBackupRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsChangeHostname"></a>
# **getQsChangeHostname**
```java
Mono<Void> QuickServersApi.getQsChangeHostname(id)
```

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsChangeRootPassword"></a>
# **getQsChangeRootPassword**
```java
Mono<Void> QuickServersApi.getQsChangeRootPassword(id)
```

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsChangeTimezone"></a>
# **getQsChangeTimezone**
```java
Mono<List<String>> QuickServersApi.getQsChangeTimezone(id)
```

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
`List&lt;String&gt;`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsChangeWebuzoPassword"></a>
# **getQsChangeWebuzoPassword**
```java
Mono<Void> QuickServersApi.getQsChangeWebuzoPassword(id)
```

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsInfo"></a>
# **getQsInfo**
```java
Mono<Quickserver> QuickServersApi.getQsInfo(id)
```

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number. | |


### Return type
[**Quickserver**](Quickserver.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsInsertCd"></a>
# **getQsInsertCd**
```java
Mono<Void> QuickServersApi.getQsInsertCd(id)
```

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsInvoices"></a>
# **getQsInvoices**
```java
Mono<ChargeInvoiceRows> QuickServersApi.getQsInvoices(id)
```

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsList"></a>
# **getQsList**
```java
Mono<List<QuickserverRow>> QuickServersApi.getQsList()
```

List QuickServers

Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.



### Return type
[**List&lt;QuickserverRow&gt;**](QuickserverRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsReinstallOs"></a>
# **getQsReinstallOs**
```java
Mono<VpsTemplatesList> QuickServersApi.getQsReinstallOs(id)
```

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsResetPassword"></a>
# **getQsResetPassword**
```java
Mono<Void> QuickServersApi.getQsResetPassword(id)
```

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer&#39;s root password.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsReverseDns"></a>
# **getQsReverseDns**
```java
Mono<ReverseDnsEntries> QuickServersApi.getQsReverseDns(id)
```

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsSetupVnc"></a>
# **getQsSetupVnc**
```java
Mono<Void> QuickServersApi.getQsSetupVnc(id)
```

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsTrafficUsage"></a>
# **getQsTrafficUsage**
```java
Mono<Void> QuickServersApi.getQsTrafficUsage(id)
```

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsViewDesktop"></a>
# **getQsViewDesktop**
```java
Mono<Void> QuickServersApi.getQsViewDesktop(id)
```

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getQsWelcomeEmail"></a>
# **getQsWelcomeEmail**
```java
Mono<TextResponse> QuickServersApi.getQsWelcomeEmail(id)
```

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| Quickserver ID | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsBackup"></a>
# **postQsBackup**
```java
Mono<QueueResponse> QuickServersApi.postQsBackup(id)
```

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsChangeHostname"></a>
# **postQsChangeHostname**
```java
Mono<QueueResponse> QuickServersApi.postQsChangeHostname(id)
```

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsChangeRootPassword"></a>
# **postQsChangeRootPassword**
```java
Mono<QueueResponse> QuickServersApi.postQsChangeRootPassword(id)
```

Change Root Password

Triggers a root password reset for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsChangeTimezone"></a>
# **postQsChangeTimezone**
```java
Mono<QueueResponse> QuickServersApi.postQsChangeTimezone(idtimezone)
```

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **timezone** | `String`| The time zone | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postQsChangeWebuzoPassword"></a>
# **postQsChangeWebuzoPassword**
```java
Mono<QueueResponse> QuickServersApi.postQsChangeWebuzoPassword(id)
```

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsInsertCd"></a>
# **postQsInsertCd**
```java
Mono<QueueResponse> QuickServersApi.postQsInsertCd(id)
```

Insert CD in QuickServer

Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsReinstallOs"></a>
# **postQsReinstallOs**
```java
Mono<QueueResponse> QuickServersApi.postQsReinstallOs(id)
```

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsResetPassword"></a>
# **postQsResetPassword**
```java
Mono<QueueResponse> QuickServersApi.postQsResetPassword(id)
```

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsReverseDns"></a>
# **postQsReverseDns**
```java
Mono<TextResponse> QuickServersApi.postQsReverseDns(idreverseDnsEntries)
```

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="postQsSetupVnc"></a>
# **postQsSetupVnc**
```java
Mono<QueueResponse> QuickServersApi.postQsSetupVnc(id)
```

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsTrafficUsage"></a>
# **postQsTrafficUsage**
```java
Mono<Void> QuickServersApi.postQsTrafficUsage(id)
```

Search Traffic Usage

Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQsViewDesktop"></a>
# **postQsViewDesktop**
```java
Mono<Void> QuickServersApi.postQsViewDesktop(id)
```

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postQuickServerRestore"></a>
# **postQuickServerRestore**
```java
Mono<QueueResponse> QuickServersApi.postQuickServerRestore(idrestoreRequest)
```

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |
| **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="putQs"></a>
# **putQs**
```java
Mono<Void> QuickServersApi.putQs()
```

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="quickserversCancel"></a>
# **quickserversCancel**
```java
Mono<QuickserversCancel200Response> QuickServersApi.quickserversCancel(id)
```

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| QuickServer ID number | |


### Return type
[**QuickserversCancel200Response**](QuickserversCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateQsInfo"></a>
# **updateQsInfo**
```java
Mono<Void> QuickServersApi.updateQsInfo(id)
```

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| QuickServer ID number. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

