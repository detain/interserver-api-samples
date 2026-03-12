# swagger.api.VPSApi

## Load the API package
```dart
import 'package:swagger/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addVps**](VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order
[**deleteVpsBackup**](VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**doVpsBlockSmtp**](VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsDisableCd**](VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableQuota**](VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsEjectCd**](VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEnableQuota**](VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsRestart**](VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsStart**](VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS
[**doVpsStop**](VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**downloadVpsBackup**](VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**getNewVps**](VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information
[**getVpsBackups**](VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBuyHdSpace**](VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyIp**](VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsChangeTimezone**](VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsInfo**](VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInvoices**](VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsList**](VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders
[**getVpsReinstallOs**](VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReverseDns**](VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsSetupVnc**](VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSlices**](VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsTrafficUsage**](VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsViewDesktop**](VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsWelcomeEmail**](VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**postVpsBackup**](VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBuyHdSpace**](VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyIp**](VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsChangeHostname**](VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeRootPassword**](VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeTimezone**](VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeWebuzoPassword**](VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsInsertCd**](VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsReinstallOs**](VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsResetPassword**](VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsRestore**](VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsReverseDns**](VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsSetupVnc**](VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSlices**](VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsViewDesktop**](VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**putVps**](VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order
[**updateVpsInfo**](VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**vPSCancel**](VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service

# **addVps**
> addVps(body, osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var body = new VpsOrderPostRequest(); // VpsOrderPostRequest | 
var osDistro = osDistro_example; // String | 
var slices = 56; // int | 
var vpsPlatform = vpsPlatform_example; // String | 
var controlpanel = controlpanel_example; // String | 
var period = 56; // int | 
var location = 56; // int | 
var osVersion = osVersion_example; // String | 
var hostname = hostname_example; // String | 
var coupon = coupon_example; // String | 
var rootpass = rootpass_example; // String | 
var comment = comment_example; // String | 

try {
    api_instance.addVps(body, osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
} catch (e) {
    print("Exception when calling VPSApi->addVps: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional] 
 **osDistro** | **String**|  | [optional] 
 **slices** | **int**|  | [optional] 
 **vpsPlatform** | **String**|  | [optional] 
 **controlpanel** | **String**|  | [optional] 
 **period** | **int**|  | [optional] 
 **location** | **int**|  | [optional] 
 **osVersion** | **String**|  | [optional] 
 **hostname** | **String**|  | [optional] 
 **coupon** | **String**|  | [optional] 
 **rootpass** | **String**|  | [optional] 
 **comment** | **String**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number
var file = file_example; // String | The backup filename to delete.
var all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    var result = api_instance.deleteVpsBackup(id, file, all);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->deleteVpsBackup: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **file** | **String**| The backup filename to delete. | 
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsBlockSmtp(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsBlockSmtp: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsDisableCd(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsDisableCd: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsDisableQuota(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsDisableQuota: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsEjectCd(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsEjectCd: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsEnableQuota(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsEnableQuota: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsRestart(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsRestart: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsStart(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsStart: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number.

try {
    var result = api_instance.doVpsStop(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->doVpsStop: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **downloadVpsBackup**
> InlineResponse20011 downloadVpsBackup(body, file, id, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var body = new IdBackupsBody2(); // IdBackupsBody2 | 
var file = file_example; // String | 
var id = 56; // int | VPS ID number
var all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    var result = api_instance.downloadVpsBackup(body, file, id, all);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->downloadVpsBackup: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBackupsBody2**](IdBackupsBody2.md)|  | 
 **file** | **String**|  | 
 **id** | **int**| VPS ID number | 
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();

try {
    var result = api_instance.getNewVps();
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getNewVps: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number
var all = all_example; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.

try {
    var result = api_instance.getVpsBackups(id, all);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsBackups: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.getVpsBuyHdSpace(id);
} catch (e) {
    print("Exception when calling VPSApi->getVpsBuyHdSpace: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.getVpsBuyIp(id);
} catch (e) {
    print("Exception when calling VPSApi->getVpsBuyIp: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsChangeTimezone**
> List<String> getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsChangeTimezone(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsChangeTimezone: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

**List<String>**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsInfo(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**Vps**](Vps.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsInvoices(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsInvoices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsList**
> List<VpsRow> getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();

try {
    var result = api_instance.getVpsList();
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsList: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<VpsRow>**](VpsRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsReinstallOs(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsReinstallOs: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsReverseDns(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsReverseDns: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.getVpsSetupVnc(id);
} catch (e) {
    print("Exception when calling VPSApi->getVpsSetupVnc: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.getVpsSlices(id);
} catch (e) {
    print("Exception when calling VPSApi->getVpsSlices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.getVpsTrafficUsage(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsTrafficUsage: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.getVpsViewDesktop(id);
} catch (e) {
    print("Exception when calling VPSApi->getVpsViewDesktop: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = id_example; // String | VPS ID

try {
    var result = api_instance.getVpsWelcomeEmail(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->getVpsWelcomeEmail: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsBackup(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsBackup: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.postVpsBuyHdSpace(id);
} catch (e) {
    print("Exception when calling VPSApi->postVpsBuyHdSpace: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.postVpsBuyIp(id);
} catch (e) {
    print("Exception when calling VPSApi->postVpsBuyIp: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(hostname, body, id)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var hostname = hostname_example; // String | 
var body = new HostnameObject(); // HostnameObject | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsChangeHostname(hostname, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsChangeHostname: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hostname** | **String**|  | 
 **body** | [**HostnameObject**](HostnameObject.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(password, body, id)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var password = password_example; // String | 
var body = new PasswordRequest(); // PasswordRequest | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsChangeRootPassword(password, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsChangeRootPassword: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **String**|  | 
 **body** | [**PasswordRequest**](PasswordRequest.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(timezone, body, id)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var timezone = timezone_example; // String | 
var body = new TimezoneUpdate(); // TimezoneUpdate | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsChangeTimezone(timezone, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsChangeTimezone: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **timezone** | **String**|  | 
 **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(password, body, id)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var password = password_example; // String | 
var body = new PasswordRequest(); // PasswordRequest | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsChangeWebuzoPassword(password, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsChangeWebuzoPassword: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **String**|  | 
 **body** | [**PasswordRequest**](PasswordRequest.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(url, body, id)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var url = url_example; // String | 
var body = new UrlRequest(); // UrlRequest | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsInsertCd(url, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsInsertCd: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **url** | **String**|  | 
 **body** | [**UrlRequest**](UrlRequest.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(template, password, localPassword, body, id)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var template = template_example; // String | 
var password = ; // String | 
var localPassword = ; // String | 
var body = new TemplateRequest(); // TemplateRequest | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsReinstallOs(template, password, localPassword, body, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsReinstallOs: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | **String**|  | 
 **password** | [**String**](.md)|  | 
 **localPassword** | [**String**](.md)|  | 
 **body** | [**TemplateRequest**](TemplateRequest.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsResetPassword(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsResetPassword: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsRestore**
> QueueResponse postVpsRestore(body, backup, password, id)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var body = new RestoreRequest(); // RestoreRequest | VPS Restore request
var backup = backup_example; // String | 
var password = password_example; // String | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsRestore(body, backup, password, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsRestore: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | 
 **backup** | **String**|  | 
 **password** | **String**|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReverseDns**
> TextResponse postVpsReverseDns(body, ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var body = new ReverseDnsEntries(); // ReverseDnsEntries | 
var ips = ; // Map | 
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsReverseDns(body, ips, id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsReverseDns: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
 **ips** | [**Map**](Object.md)|  | 
 **id** | **int**| VPS ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.postVpsSetupVnc(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->postVpsSetupVnc: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.postVpsSlices(id);
} catch (e) {
    print("Exception when calling VPSApi->postVpsSlices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    api_instance.postVpsViewDesktop(id);
} catch (e) {
    print("Exception when calling VPSApi->postVpsViewDesktop: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putVps**
> VpsOrderPutResponse putVps(body, osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var body = new VpsOrderPutRequest(); // VpsOrderPutRequest | 
var osDistro = osDistro_example; // String | 
var slices = 56; // int | 
var vpsPlatform = vpsPlatform_example; // String | 
var controlpanel = controlpanel_example; // String | 
var period = 56; // int | 
var location = 56; // int | 
var osVersion = osVersion_example; // String | 
var hostname = hostname_example; // String | 
var coupon = coupon_example; // String | 
var rootpass = rootpass_example; // String | 
var comment = comment_example; // String | 

try {
    var result = api_instance.putVps(body, osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->putVps: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional] 
 **osDistro** | **String**|  | [optional] 
 **slices** | **int**|  | [optional] 
 **vpsPlatform** | **String**|  | [optional] 
 **controlpanel** | **String**|  | [optional] 
 **period** | **int**|  | [optional] 
 **location** | **int**|  | [optional] 
 **osVersion** | **String**|  | [optional] 
 **hostname** | **String**|  | [optional] 
 **coupon** | **String**|  | [optional] 
 **rootpass** | **String**|  | [optional] 
 **comment** | **String**|  | [optional] 

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = id_example; // String | VPS ID number.

try {
    api_instance.updateVpsInfo(id);
} catch (e) {
    print("Exception when calling VPSApi->updateVpsInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID number. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vPSCancel**
> InlineResponse20021 vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new VPSApi();
var id = 56; // int | VPS ID number

try {
    var result = api_instance.vPSCancel(id);
    print(result);
} catch (e) {
    print("Exception when calling VPSApi->vPSCancel: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**InlineResponse20021**](InlineResponse20021.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

