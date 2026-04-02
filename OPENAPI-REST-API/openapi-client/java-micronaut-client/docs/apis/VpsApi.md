# VpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addVps**](VpsApi.md#addVps) | **POST** /vps/order | Place VPS Order |
| [**deleteVpsBackup**](VpsApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup |
| [**doVpsBlockSmtp**](VpsApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP |
| [**doVpsDisableCd**](VpsApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive |
| [**doVpsDisableQuota**](VpsApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas |
| [**doVpsEjectCd**](VpsApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive |
| [**doVpsEnableQuota**](VpsApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas |
| [**doVpsRestart**](VpsApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS |
| [**doVpsStart**](VpsApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS |
| [**doVpsStop**](VpsApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS |
| [**downloadVpsBackup**](VpsApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup |
| [**getNewVps**](VpsApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information |
| [**getVpsBackups**](VpsApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List |
| [**getVpsBuyHdSpace**](VpsApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info |
| [**getVpsBuyIp**](VpsApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info |
| [**getVpsChangeTimezone**](VpsApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info |
| [**getVpsInfo**](VpsApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order |
| [**getVpsInvoices**](VpsApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices |
| [**getVpsList**](VpsApi.md#getVpsList) | **GET** /vps | List VPS Orders |
| [**getVpsReinstallOs**](VpsApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options |
| [**getVpsReverseDns**](VpsApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info |
| [**getVpsSetupVnc**](VpsApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info |
| [**getVpsSlices**](VpsApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info |
| [**getVpsTrafficUsage**](VpsApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage |
| [**getVpsViewDesktop**](VpsApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info |
| [**getVpsWelcomeEmail**](VpsApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email |
| [**postVpsBackup**](VpsApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup |
| [**postVpsBuyHdSpace**](VpsApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon |
| [**postVpsBuyIp**](VpsApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP |
| [**postVpsChangeHostname**](VpsApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname |
| [**postVpsChangeRootPassword**](VpsApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password |
| [**postVpsChangeTimezone**](VpsApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone |
| [**postVpsChangeWebuzoPassword**](VpsApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password |
| [**postVpsInsertCd**](VpsApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS |
| [**postVpsReinstallOs**](VpsApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS |
| [**postVpsResetPassword**](VpsApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password |
| [**postVpsRestore**](VpsApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup |
| [**postVpsReverseDns**](VpsApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS |
| [**postVpsSetupVnc**](VpsApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC |
| [**postVpsSlices**](VpsApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade |
| [**postVpsViewDesktop**](VpsApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop |
| [**putVps**](VpsApi.md#putVps) | **PUT** /vps/order | Validate VPS Order |
| [**updateVpsInfo**](VpsApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order |
| [**vPSCancel**](VpsApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service |


## Creating VpsApi

To initiate an instance of `VpsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.VpsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(VpsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    VpsApi vpsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addVps"></a>
# **addVps**
```java
Mono<ServiceOrderPostResponse> VpsApi.addVps(vpsOrderPostRequest)
```

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **vpsOrderPostRequest** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional parameter] |


### Return type
[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="deleteVpsBackup"></a>
# **deleteVpsBackup**
```java
Mono<SuccessTextResponse> VpsApi.deleteVpsBackup(id_fileall)
```

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **_file** | `String`| The backup filename to delete. | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsBlockSmtp"></a>
# **doVpsBlockSmtp**
```java
Mono<QueueResponse> VpsApi.doVpsBlockSmtp(id)
```

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsDisableCd"></a>
# **doVpsDisableCd**
```java
Mono<QueueResponse> VpsApi.doVpsDisableCd(id)
```

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsDisableQuota"></a>
# **doVpsDisableQuota**
```java
Mono<QueueResponse> VpsApi.doVpsDisableQuota(id)
```

Disable Quotas

Disables disk quota enforcement on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsEjectCd"></a>
# **doVpsEjectCd**
```java
Mono<QueueResponse> VpsApi.doVpsEjectCd(id)
```

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsEnableQuota"></a>
# **doVpsEnableQuota**
```java
Mono<QueueResponse> VpsApi.doVpsEnableQuota(id)
```

Enable Quotas

Enables disk quota enforcement on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsRestart"></a>
# **doVpsRestart**
```java
Mono<QueueResponse> VpsApi.doVpsRestart(id)
```

Restart VPS

Restarts the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsStart"></a>
# **doVpsStart**
```java
Mono<QueueResponse> VpsApi.doVpsStart(id)
```

Start VPS

Powers on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="doVpsStop"></a>
# **doVpsStop**
```java
Mono<QueueResponse> VpsApi.doVpsStop(id)
```

Stop VPS

Powers off the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number. | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="downloadVpsBackup"></a>
# **downloadVpsBackup**
```java
Mono<DownloadQsBackup200Response> VpsApi.downloadVpsBackup(iddownloadQsBackupRequestall)
```

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="getNewVps"></a>
# **getNewVps**
```java
Mono<VpsOrder> VpsApi.getNewVps()
```

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.



### Return type
[**VpsOrder**](VpsOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsBackups"></a>
# **getVpsBackups**
```java
Mono<VpsBackupRows> VpsApi.getVpsBackups(idall)
```

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **all** | `String`| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**VpsBackupRows**](VpsBackupRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsBuyHdSpace"></a>
# **getVpsBuyHdSpace**
```java
Mono<Void> VpsApi.getVpsBuyHdSpace(id)
```

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsBuyIp"></a>
# **getVpsBuyIp**
```java
Mono<Void> VpsApi.getVpsBuyIp(id)
```

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsChangeTimezone"></a>
# **getVpsChangeTimezone**
```java
Mono<List<String>> VpsApi.getVpsChangeTimezone(id)
```

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
`List&lt;String&gt;`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsInfo"></a>
# **getVpsInfo**
```java
Mono<Vps> VpsApi.getVpsInfo(id)
```

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**Vps**](Vps.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsInvoices"></a>
# **getVpsInvoices**
```java
Mono<ChargeInvoiceRows> VpsApi.getVpsInvoices(id)
```

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsList"></a>
# **getVpsList**
```java
Mono<List<VpsRow>> VpsApi.getVpsList()
```

List VPS Orders

Returns all VPS services on the account with their current status and configuration.



### Return type
[**List&lt;VpsRow&gt;**](VpsRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsReinstallOs"></a>
# **getVpsReinstallOs**
```java
Mono<VpsTemplatesList> VpsApi.getVpsReinstallOs(id)
```

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsReverseDns"></a>
# **getVpsReverseDns**
```java
Mono<ReverseDnsEntries> VpsApi.getVpsReverseDns(id)
```

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsSetupVnc"></a>
# **getVpsSetupVnc**
```java
Mono<Void> VpsApi.getVpsSetupVnc(id)
```

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsSlices"></a>
# **getVpsSlices**
```java
Mono<Void> VpsApi.getVpsSlices(id)
```

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsTrafficUsage"></a>
# **getVpsTrafficUsage**
```java
Mono<VpsTrafficResponse> VpsApi.getVpsTrafficUsage(id)
```

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsViewDesktop"></a>
# **getVpsViewDesktop**
```java
Mono<Void> VpsApi.getVpsViewDesktop(id)
```

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getVpsWelcomeEmail"></a>
# **getVpsWelcomeEmail**
```java
Mono<SuccessTextResponse> VpsApi.getVpsWelcomeEmail(id)
```

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| VPS ID | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsBackup"></a>
# **postVpsBackup**
```java
Mono<QueueResponse> VpsApi.postVpsBackup(id)
```

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsBuyHdSpace"></a>
# **postVpsBuyHdSpace**
```java
Mono<Void> VpsApi.postVpsBuyHdSpace(id)
```

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsBuyIp"></a>
# **postVpsBuyIp**
```java
Mono<Void> VpsApi.postVpsBuyIp(id)
```

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
```java
Mono<QueueResponse> VpsApi.postVpsChangeHostname(idhostname)
```

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **hostname** | `String`|  | [optional parameter] |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
```java
Mono<QueueResponse> VpsApi.postVpsChangeRootPassword(idpassword)
```

Change VPS Root Password

Changes the root password of the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **password** | `String`|  | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
```java
Mono<QueueResponse> VpsApi.postVpsChangeTimezone(idtimezone)
```

Change VPS Timezone

Changes the system timezone on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
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

<a id="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
```java
Mono<QueueResponse> VpsApi.postVpsChangeWebuzoPassword(idpassword)
```

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **password** | `String`|  | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postVpsInsertCd"></a>
# **postVpsInsertCd**
```java
Mono<QueueResponse> VpsApi.postVpsInsertCd(idurl)
```

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **url** | `String`|  | [optional parameter] |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
```java
Mono<QueueResponse> VpsApi.postVpsReinstallOs(idtemplatelocalPasswordpassword)
```

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **template** | `String`| OS Template Filename | |
| **localPassword** | `String`| Password for this account. | |
| **password** | `String`| Password for Root / Administrator Account. | [optional parameter] |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="postVpsResetPassword"></a>
# **postVpsResetPassword**
```java
Mono<QueueResponse> VpsApi.postVpsResetPassword(id)
```

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsRestore"></a>
# **postVpsRestore**
```java
Mono<QueueResponse> VpsApi.postVpsRestore(idrestoreRequest)
```

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
| **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="postVpsReverseDns"></a>
# **postVpsReverseDns**
```java
Mono<TextResponse> VpsApi.postVpsReverseDns(idreverseDnsEntries)
```

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |
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

<a id="postVpsSetupVnc"></a>
# **postVpsSetupVnc**
```java
Mono<QueueResponse> VpsApi.postVpsSetupVnc(id)
```

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**QueueResponse**](QueueResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsSlices"></a>
# **postVpsSlices**
```java
Mono<Void> VpsApi.postVpsSlices(id)
```

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postVpsViewDesktop"></a>
# **postVpsViewDesktop**
```java
Mono<Void> VpsApi.postVpsViewDesktop(id)
```

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="putVps"></a>
# **putVps**
```java
Mono<VpsOrderPutResponse> VpsApi.putVps(vpsOrderPutRequest)
```

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **vpsOrderPutRequest** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional parameter] |


### Return type
[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="updateVpsInfo"></a>
# **updateVpsInfo**
```java
Mono<SuccessTextResponse> VpsApi.updateVpsInfo(id)
```

Update VPS Order

Updates settings on a VPS order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| VPS ID number. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="vPSCancel"></a>
# **vPSCancel**
```java
Mono<VPSCancel200Response> VpsApi.vPSCancel(id)
```

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| VPS ID number | |


### Return type
[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

