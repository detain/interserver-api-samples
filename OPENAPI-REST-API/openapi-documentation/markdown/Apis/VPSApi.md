# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addVps**](VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order |
| [**deleteVpsBackup**](VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup |
| [**doVpsBlockSmtp**](VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP |
| [**doVpsDisableCd**](VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive |
| [**doVpsDisableQuota**](VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas |
| [**doVpsEjectCd**](VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive |
| [**doVpsEnableQuota**](VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas |
| [**doVpsRestart**](VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS |
| [**doVpsStart**](VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS |
| [**doVpsStop**](VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS |
| [**downloadVpsBackup**](VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup |
| [**getNewVps**](VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information |
| [**getVpsBackups**](VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List |
| [**getVpsBuyHdSpace**](VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info |
| [**getVpsBuyIp**](VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info |
| [**getVpsChangeTimezone**](VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info |
| [**getVpsInfo**](VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order |
| [**getVpsInvoices**](VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices |
| [**getVpsList**](VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders |
| [**getVpsReinstallOs**](VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options |
| [**getVpsReverseDns**](VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info |
| [**getVpsSetupVnc**](VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info |
| [**getVpsSlices**](VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info |
| [**getVpsTrafficUsage**](VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage |
| [**getVpsViewDesktop**](VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info |
| [**getVpsWelcomeEmail**](VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email |
| [**postVpsBackup**](VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup |
| [**postVpsBuyHdSpace**](VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon |
| [**postVpsBuyIp**](VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP |
| [**postVpsChangeHostname**](VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname |
| [**postVpsChangeRootPassword**](VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password |
| [**postVpsChangeTimezone**](VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone |
| [**postVpsChangeWebuzoPassword**](VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password |
| [**postVpsInsertCd**](VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS |
| [**postVpsReinstallOs**](VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS |
| [**postVpsResetPassword**](VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password |
| [**postVpsRestore**](VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup |
| [**postVpsReverseDns**](VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS |
| [**postVpsSetupVnc**](VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC |
| [**postVpsSlices**](VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade |
| [**postVpsViewDesktop**](VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop |
| [**putVps**](VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order |
| [**updateVpsInfo**](VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order |
| [**vPSCancel**](VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service |


<a name="addVps"></a>
# **addVps**
> ServiceOrderPostResponse addVps(VpsOrderPostRequest)

Place VPS Order

    Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **VpsOrderPostRequest** | [**VpsOrderPostRequest**](../Models/VpsOrderPostRequest.md)|  | [optional] |

### Return type

[**ServiceOrderPostResponse**](../Models/ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="deleteVpsBackup"></a>
# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

    Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **file** | **String**| The backup filename to delete. | [default to null] |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsBlockSmtp"></a>
# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

    Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsDisableCd"></a>
# **doVpsDisableCd**
> QueueResponse doVpsDisableCd(id)

Disable CD Drive

    Disables the virtual CD drive on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsDisableQuota"></a>
# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota(id)

Disable Quotas

    Disables disk quota enforcement on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsEjectCd"></a>
# **doVpsEjectCd**
> QueueResponse doVpsEjectCd(id)

Eject CD Drive

    Ejects the virtual CD from the VPS CD drive.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsEnableQuota"></a>
# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota(id)

Enable Quotas

    Enables disk quota enforcement on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsRestart"></a>
# **doVpsRestart**
> QueueResponse doVpsRestart(id)

Restart VPS

    Restarts the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsStart"></a>
# **doVpsStart**
> QueueResponse doVpsStart(id)

Start VPS

    Powers on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="doVpsStop"></a>
# **doVpsStop**
> QueueResponse doVpsStop(id)

Stop VPS

    Powers off the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number. | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="downloadVpsBackup"></a>
# **downloadVpsBackup**
> downloadQsBackup_200_response downloadVpsBackup(id, downloadQsBackup\_request, all)

Download VPS Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **downloadQsBackup\_request** | [**downloadQsBackup_request**](../Models/downloadQsBackup_request.md)|  | |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**downloadQsBackup_200_response**](../Models/downloadQsBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="getNewVps"></a>
# **getNewVps**
> VpsOrder getNewVps()

VPS Ordering Information

    Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](../Models/VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsBackups"></a>
# **getVpsBackups**
> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

    Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**VpsBackupRows**](../Models/VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsBuyHdSpace"></a>
# **getVpsBuyHdSpace**
> getVpsBuyHdSpace(id)

HD Space Addon Info

    Returns available hard drive space addon options and pricing for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsBuyIp"></a>
# **getVpsBuyIp**
> getVpsBuyIp(id)

Additional IP Addon Info

    Returns available additional IP address options and pricing for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsChangeTimezone"></a>
# **getVpsChangeTimezone**
> List getVpsChangeTimezone(id)

Get Timezone Info

    Returns the list of available timezones that can be set on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

**List**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsInfo"></a>
# **getVpsInfo**
> Vps getVpsInfo(id)

Get VPS Order

    Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**Vps**](../Models/Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsInvoices"></a>
# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

    Returns the billing invoices associated with this VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsList"></a>
# **getVpsList**
> List getVpsList()

List VPS Orders

    Returns all VPS services on the account with their current status and configuration.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsReinstallOs"></a>
# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

    Returns the list of available OS templates for reinstalling the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**VpsTemplatesList**](../Models/VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsReverseDns"></a>
# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsSetupVnc"></a>
# **getVpsSetupVnc**
> getVpsSetupVnc(id)

VNC Setup Info

    Returns the current VNC connection information for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsSlices"></a>
# **getVpsSlices**
> getVpsSlices(id)

Slice Upgrade Info

    Returns available slice upgrade options and pricing for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsTrafficUsage"></a>
# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

    Returns bandwidth traffic usage data for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**VpsTrafficResponse**](../Models/VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsViewDesktop"></a>
# **getVpsViewDesktop**
> getVpsViewDesktop(id)

Get View Desktop Info

    Returns remote desktop connection information for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getVpsWelcomeEmail"></a>
# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

    Resends the welcome email containing connection details and credentials for the VPS order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| VPS ID | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsBackup"></a>
# **postVpsBackup**
> QueueResponse postVpsBackup(id)

Start a VPS Backup

    Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsBuyHdSpace"></a>
# **postVpsBuyHdSpace**
> postVpsBuyHdSpace(id)

Purchase HD Space Addon

    Purchases additional hard drive space for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsBuyIp"></a>
# **postVpsBuyIp**
> postVpsBuyIp(id)

Purchase Additional IP

    Purchases an additional IP address for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(id, hostname)

Update VPS Hostname

    Changes the hostname of the VPS. This queues a background task to update the server.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **hostname** | **String**|  | [optional] [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(id, password)

Change VPS Root Password

    Changes the root password of the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **password** | **String**|  | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(id, timezone)

Change VPS Timezone

    Changes the system timezone on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **timezone** | **String**| The time zone | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(id, password)

Change Webuzo Password

    Changes the Webuzo control panel password on the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **password** | **String**|  | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(id, url)

Insert CD in VPS

    Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **url** | **String**|  | [optional] [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(id, template, localPassword, password)

Reinstall VPS OS

    Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **template** | **String**| OS Template Filename | [default to null] |
| **localPassword** | **String**| Password for this account. | [default to null] |
| **password** | **String**| Password for Root / Administrator Account. | [optional] [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="postVpsResetPassword"></a>
# **postVpsResetPassword**
> QueueResponse postVpsResetPassword(id)

Reset VPS Password

    Resets the root password on the VPS to a new randomly generated password.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(id, RestoreRequest)

Restore VPS from Backup

    Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **RestoreRequest** | [**RestoreRequest**](../Models/RestoreRequest.md)| VPS Restore request | |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(id, ReverseDnsEntries)

Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |
| **ReverseDnsEntries** | [**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)|  | |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="postVpsSetupVnc"></a>
# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc(id)

Setup VNC

    Sets up or refreshes the VNC console connection for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**QueueResponse**](../Models/QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsSlices"></a>
# **postVpsSlices**
> postVpsSlices(id)

Purchase Slice Upgrade

    Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postVpsViewDesktop"></a>
# **postVpsViewDesktop**
> postVpsViewDesktop(id)

Update View Desktop

    Updates or refreshes the remote desktop session for the VPS.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(VpsOrderPutRequest)

Validate VPS Order

    Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **VpsOrderPutRequest** | [**VpsOrderPutRequest**](../Models/VpsOrderPutRequest.md)|  | [optional] |

### Return type

[**VpsOrderPutResponse**](../Models/VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="updateVpsInfo"></a>
# **updateVpsInfo**
> SuccessTextResponse updateVpsInfo(id)

Update VPS Order

    Updates settings on a VPS order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| VPS ID number. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="vPSCancel"></a>
# **vPSCancel**
> VPSCancel_200_response vPSCancel(id)

Cancel VPS Service

    Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| VPS ID number | [default to null] |

### Return type

[**VPSCancel_200_response**](../Models/VPSCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

