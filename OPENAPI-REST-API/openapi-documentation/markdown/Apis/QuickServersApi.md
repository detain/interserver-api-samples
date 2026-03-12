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


<a name="addQs"></a>
# **addQs**
> addQs()

Place QuickServer Order

    Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteQsBackup"></a>
# **deleteQsBackup**
> SuccessTextResponse deleteQsBackup(id, file, all)

Delete QuickServer Backup

    Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **file** | **String**| The backup filename to delete. | [default to null] |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsBlockSmtp"></a>
# **doQsBlockSmtp**
> QueueResponse doQsBlockSmtp(id)

Block QuickServer SMTP

    Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsDisableCd"></a>
# **doQsDisableCd**
> QueueResponse doQsDisableCd(id)

Disable CD Drive

    Disables the virtual CD drive for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsDisableQuota"></a>
# **doQsDisableQuota**
> QueueResponse doQsDisableQuota(id)

Disable Quotas

    Disables disk quota enforcement for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsEjectCd"></a>
# **doQsEjectCd**
> QueueResponse doQsEjectCd(id)

Eject CD Drive

    Ejects the virtual CD from the QuickServer&#39;s CD drive.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsEnableQuota"></a>
# **doQsEnableQuota**
> QueueResponse doQsEnableQuota(id)

Enable Quotas

    Enables disk quota enforcement for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsRestart"></a>
# **doQsRestart**
> QueueResponse doQsRestart(id)

Restart QuickServer

    Restarts the QuickServer. The server will be shut down and started again.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsStart"></a>
# **doQsStart**
> QueueResponse doQsStart(id)

Start QuickServer

    Powers on the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doQsStop"></a>
# **doQsStop**
> QueueResponse doQsStop(id)

Stop QuickServer

    Powers off the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="downloadQsBackup"></a>
# **downloadQsBackup**
> downloadQsBackup_200_response downloadQsBackup(id, downloadQsBackup\_request, all)

Download QuickServer Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **downloadQsBackup\_request** | [**downloadQsBackup_request**](../Models/downloadQsBackup_request.md)|  | |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**downloadQsBackup_200_response**](../Models/downloadQsBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="getNewQs"></a>
# **getNewQs**
> QuickserverOrder getNewQs()

Get QuickServer Ordering Information

    Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Parameters
This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](../Models/QuickserverOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsBackups"></a>
# **getQsBackups**
> VpsBackupRows getQsBackups(id, all)

List QuickServer Backups

    Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**VpsBackupRows**](../Models/VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsChangeHostname"></a>
# **getQsChangeHostname**
> getQsChangeHostname(id)

Get QuickServer Hostname

    Retrieves the current hostname and any validation requirements for changing it.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsChangeRootPassword"></a>
# **getQsChangeRootPassword**
> getQsChangeRootPassword(id)

Get Change Root Password Info

    Retrieves instructions or metadata needed to reset the root password.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsChangeTimezone"></a>
# **getQsChangeTimezone**
> List getQsChangeTimezone(id)

Get Timezone Info

    Returns the list of available timezones that can be set on the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

**List**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsChangeWebuzoPassword"></a>
# **getQsChangeWebuzoPassword**
> getQsChangeWebuzoPassword(id)

Webuzo Change Pass Info

    Retrieves instructions or metadata for changing the Webuzo control panel password.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsInfo"></a>
# **getQsInfo**
> Quickserver getQsInfo(id)

Get QuickServer Order

    Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number. | [default to null] |

### Return type

[**Quickserver**](../Models/Quickserver.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsInsertCd"></a>
# **getQsInsertCd**
> getQsInsertCd(id)

Insert CD Information

    Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsInvoices"></a>
# **getQsInvoices**
> ChargeInvoiceRows getQsInvoices(id)

Get QuickServer Invoices

    Returns the billing invoices associated with this QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsList"></a>
# **getQsList**
> List getQsList()

List QuickServers

    Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/QuickserverRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsReinstallOs"></a>
# **getQsReinstallOs**
> VpsTemplatesList getQsReinstallOs(id)

QuickServer Reinstall OS Options

    Returns the list of available operating system templates for reinstalling the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**VpsTemplatesList**](../Models/VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsResetPassword"></a>
# **getQsResetPassword**
> getQsResetPassword(id)

Reset QuickServer Password Info

    Returns information needed before resetting the QuickServer&#39;s root password.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsReverseDns"></a>
# **getQsReverseDns**
> ReverseDnsEntries getQsReverseDns(id)

Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsSetupVnc"></a>
# **getQsSetupVnc**
> getQsSetupVnc(id)

VNC Setup Info

    Returns the current VNC connection information for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsTrafficUsage"></a>
# **getQsTrafficUsage**
> getQsTrafficUsage(id)

Get Traffic Usage

    Returns bandwidth traffic usage data for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsViewDesktop"></a>
# **getQsViewDesktop**
> getQsViewDesktop(id)

Get View Desktop Info

    Returns remote desktop connection information for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getQsWelcomeEmail"></a>
# **getQsWelcomeEmail**
> TextResponse getQsWelcomeEmail(id)

Resend QuickServer Welcome Email

    Resends the welcome email containing connection details and credentials for the QuickServer order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| Quickserver ID | [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsBackup"></a>
# **postQsBackup**
> QueueResponse postQsBackup(id)

Create QuickServer Backup

    Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsChangeHostname"></a>
# **postQsChangeHostname**
> QueueResponse postQsChangeHostname(id)

Update QuickServer Hostname

    Submits a hostname change request for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsChangeRootPassword"></a>
# **postQsChangeRootPassword**
> QueueResponse postQsChangeRootPassword(id)

Change Root Password

    Triggers a root password reset for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsChangeTimezone"></a>
# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone(id, timezone)

Change QuickServer Timezone

    Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **timezone** | **String**| The time zone | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postQsChangeWebuzoPassword"></a>
# **postQsChangeWebuzoPassword**
> QueueResponse postQsChangeWebuzoPassword(id)

Change Webuzo Password

    Resets the Webuzo control panel password for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsInsertCd"></a>
# **postQsInsertCd**
> QueueResponse postQsInsertCd(id)

Insert CD in QuickServer

    Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsReinstallOs"></a>
# **postQsReinstallOs**
> QueueResponse postQsReinstallOs(id)

Reinstall QuickServer OS

    Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsResetPassword"></a>
# **postQsResetPassword**
> QueueResponse postQsResetPassword(id)

Reset QuickServer Password

    Resets the root password on the QuickServer to a new randomly generated password.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsReverseDns"></a>
# **postQsReverseDns**
> TextResponse postQsReverseDns(id, ReverseDnsEntries)

Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **ReverseDnsEntries** | [**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)|  | |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="postQsSetupVnc"></a>
# **postQsSetupVnc**
> QueueResponse postQsSetupVnc(id)

Setup VNC

    Sets up or refreshes the VNC console connection for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsTrafficUsage"></a>
# **postQsTrafficUsage**
> postQsTrafficUsage(id)

Search Traffic Usage

    Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQsViewDesktop"></a>
# **postQsViewDesktop**
> postQsViewDesktop(id)

Update View Desktop

    Updates or refreshes the remote desktop session for the QuickServer.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postQuickServerRestore"></a>
# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(id, RestoreRequest)

Restore QuickServer from Backup

    Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |
| **RestoreRequest** | [**RestoreRequest**](../Models/RestoreRequest.md)| QuickServer Restore request | |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="putQs"></a>
# **putQs**
> putQs()

Validate QuickServer Order

    Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="quickserversCancel"></a>
# **quickserversCancel**
> quickserversCancel_200_response quickserversCancel(id)

Cancel QuickServer Order

    Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| QuickServer ID number | [default to null] |

### Return type

[**quickserversCancel_200_response**](../Models/quickserversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateQsInfo"></a>
# **updateQsInfo**
> updateQsInfo(id)

Update QuickServer Order

    Updates QuickServer metadata or stored settings associated with the order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| QuickServer ID number. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

