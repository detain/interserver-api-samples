# openapi.api.VPSApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addVps**](VPSApi.md#addvps) | **POST** /vps/order | Place VPS Order
[**deleteVpsBackup**](VPSApi.md#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**doVpsBlockSmtp**](VPSApi.md#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsDisableCd**](VPSApi.md#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableQuota**](VPSApi.md#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsEjectCd**](VPSApi.md#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEnableQuota**](VPSApi.md#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsRestart**](VPSApi.md#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsStart**](VPSApi.md#dovpsstart) | **GET** /vps/{id}/start | Start VPS
[**doVpsStop**](VPSApi.md#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS
[**downloadVpsBackup**](VPSApi.md#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**getNewVps**](VPSApi.md#getnewvps) | **GET** /vps/order | VPS Ordering Information
[**getVpsBackups**](VPSApi.md#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBuyHdSpace**](VPSApi.md#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyIp**](VPSApi.md#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsChangeTimezone**](VPSApi.md#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsInfo**](VPSApi.md#getvpsinfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInvoices**](VPSApi.md#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsList**](VPSApi.md#getvpslist) | **GET** /vps | List VPS Orders
[**getVpsReinstallOs**](VPSApi.md#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReverseDns**](VPSApi.md#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsSetupVnc**](VPSApi.md#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSlices**](VPSApi.md#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsTrafficUsage**](VPSApi.md#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsViewDesktop**](VPSApi.md#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsWelcomeEmail**](VPSApi.md#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**postVpsBackup**](VPSApi.md#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBuyHdSpace**](VPSApi.md#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyIp**](VPSApi.md#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsChangeHostname**](VPSApi.md#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeRootPassword**](VPSApi.md#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeTimezone**](VPSApi.md#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeWebuzoPassword**](VPSApi.md#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsInsertCd**](VPSApi.md#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsReinstallOs**](VPSApi.md#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsResetPassword**](VPSApi.md#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsRestore**](VPSApi.md#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsReverseDns**](VPSApi.md#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsSetupVnc**](VPSApi.md#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSlices**](VPSApi.md#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsViewDesktop**](VPSApi.md#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**putVps**](VPSApi.md#putvps) | **PUT** /vps/order | Validate VPS Order
[**updateVpsInfo**](VPSApi.md#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order
[**vPSCancel**](VPSApi.md#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service


# **addVps**
> addVps(vpsOrderPostRequest)

Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final VpsOrderPostRequest vpsOrderPostRequest = ; // VpsOrderPostRequest | 

try {
    api.addVps(vpsOrderPostRequest);
} on DioException catch (e) {
    print('Exception when calling VPSApi->addVps: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPostRequest** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String file = file_example; // String | The backup filename to delete.
final String all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    final response = api.deleteVpsBackup(id, file, all);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->deleteVpsBackup: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **file** | **String**| The backup filename to delete. | 
 **all** | **String**| Set to `1` to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsBlockSmtp(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsBlockSmtp: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsDisableCd**
> QueueResponse doVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsDisableCd(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsDisableCd: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsDisableQuota(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsDisableQuota: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsEjectCd**
> QueueResponse doVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsEjectCd(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsEjectCd: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsEnableQuota(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsEnableQuota: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsRestart**
> QueueResponse doVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsRestart(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsRestart: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsStart**
> QueueResponse doVpsStart(id)

Start VPS

Powers on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsStart(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsStart: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsStop**
> QueueResponse doVpsStop(id)

Stop VPS

Powers off the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number.

try {
    final response = api.doVpsStop(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->doVpsStop: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **downloadVpsBackup**
> DownloadQsBackup200Response downloadVpsBackup(id, downloadQsBackupRequest, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final DownloadQsBackupRequest downloadQsBackupRequest = ; // DownloadQsBackupRequest | 
final String all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    final response = api.downloadVpsBackup(id, downloadQsBackupRequest, all);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->downloadVpsBackup: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | 
 **all** | **String**| Set to `1` to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewVps**
> VpsOrder getNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();

try {
    final response = api.getNewVps();
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getNewVps: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBackups**
> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    final response = api.getVpsBackups(id, all);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsBackups: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **all** | **String**| Set to `1` to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBuyHdSpace**
> getVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.getVpsBuyHdSpace(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsBuyHdSpace: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBuyIp**
> getVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.getVpsBuyIp(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsBuyIp: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsChangeTimezone**
> BuiltList<String> getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsChangeTimezone(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsChangeTimezone: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

**BuiltList&lt;String&gt;**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsInfo**
> Vps getVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsInfo(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**Vps**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsInvoices(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsInvoices: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsList**
> BuiltList<VpsRow> getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();

try {
    final response = api.getVpsList();
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsList: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuiltList&lt;VpsRow&gt;**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsReinstallOs(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsReinstallOs: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsReverseDns(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsReverseDns: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsSetupVnc**
> getVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.getVpsSetupVnc(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsSetupVnc: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsSlices**
> getVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.getVpsSlices(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsSlices: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.getVpsTrafficUsage(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsTrafficUsage: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsViewDesktop**
> getVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.getVpsViewDesktop(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsViewDesktop: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final String id = 4813; // String | VPS ID

try {
    final response = api.getVpsWelcomeEmail(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->getVpsWelcomeEmail: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBackup**
> QueueResponse postVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.postVpsBackup(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsBackup: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBuyHdSpace**
> postVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.postVpsBuyHdSpace(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsBuyHdSpace: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBuyIp**
> postVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.postVpsBuyIp(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsBuyIp: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(id, hostname)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String hostname = hostname_example; // String | 

try {
    final response = api.postVpsChangeHostname(id, hostname);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsChangeHostname: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **hostname** | **String**|  | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(id, password)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String password = password_example; // String | 

try {
    final response = api.postVpsChangeRootPassword(id, password);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsChangeRootPassword: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **password** | **String**|  | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(id, timezone)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String timezone = timezone_example; // String | The time zone

try {
    final response = api.postVpsChangeTimezone(id, timezone);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsChangeTimezone: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **timezone** | **String**| The time zone | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(id, password)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String password = password_example; // String | 

try {
    final response = api.postVpsChangeWebuzoPassword(id, password);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsChangeWebuzoPassword: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **password** | **String**|  | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(id, url)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String url = url_example; // String | 

try {
    final response = api.postVpsInsertCd(id, url);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsInsertCd: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **url** | **String**|  | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(id, template, localPassword, password)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final String template = template_example; // String | OS Template Filename
final String localPassword = localPassword_example; // String | Password for this account.
final String password = password_example; // String | Password for Root / Administrator Account.

try {
    final response = api.postVpsReinstallOs(id, template, localPassword, password);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsReinstallOs: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **template** | **String**| OS Template Filename | 
 **localPassword** | **String**| Password for this account. | 
 **password** | **String**| Password for Root / Administrator Account. | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsResetPassword**
> QueueResponse postVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.postVpsResetPassword(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsResetPassword: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsRestore**
> QueueResponse postVpsRestore(id, restoreRequest)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final RestoreRequest restoreRequest = ; // RestoreRequest | VPS Restore request

try {
    final response = api.postVpsRestore(id, restoreRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsRestore: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReverseDns**
> TextResponse postVpsReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number
final ReverseDnsEntries reverseDnsEntries = ; // ReverseDnsEntries | 

try {
    final response = api.postVpsReverseDns(id, reverseDnsEntries);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsReverseDns: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.postVpsSetupVnc(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsSetupVnc: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsSlices**
> postVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.postVpsSlices(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsSlices: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsViewDesktop**
> postVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    api.postVpsViewDesktop(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->postVpsViewDesktop: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putVps**
> VpsOrderPutResponse putVps(vpsOrderPutRequest)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final VpsOrderPutRequest vpsOrderPutRequest = ; // VpsOrderPutRequest | 

try {
    final response = api.putVps(vpsOrderPutRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->putVps: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPutRequest** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional] 

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVpsInfo**
> updateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final String id = id_example; // String | VPS ID number.

try {
    api.updateVpsInfo(id);
} on DioException catch (e) {
    print('Exception when calling VPSApi->updateVpsInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vPSCancel**
> VPSCancel200Response vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api = Openapi().getVPSApi();
final int id = 56; // int | VPS ID number

try {
    final response = api.vPSCancel(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling VPSApi->vPSCancel: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

