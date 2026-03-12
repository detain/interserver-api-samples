# VpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addVps**](VpsApi.md#addVps) | **POST** /vps/order | Place VPS Order
[**deleteVpsBackup**](VpsApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**doVpsBlockSmtp**](VpsApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsDisableCd**](VpsApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableQuota**](VpsApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsEjectCd**](VpsApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEnableQuota**](VpsApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsRestart**](VpsApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsStart**](VpsApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS
[**doVpsStop**](VpsApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**downloadVpsBackup**](VpsApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**getNewVps**](VpsApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information
[**getVpsBackups**](VpsApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBuyHdSpace**](VpsApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyIp**](VpsApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsChangeTimezone**](VpsApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsInfo**](VpsApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInvoices**](VpsApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsList**](VpsApi.md#getVpsList) | **GET** /vps | List VPS Orders
[**getVpsReinstallOs**](VpsApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReverseDns**](VpsApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsSetupVnc**](VpsApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSlices**](VpsApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsTrafficUsage**](VpsApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsViewDesktop**](VpsApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsWelcomeEmail**](VpsApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**postVpsBackup**](VpsApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBuyHdSpace**](VpsApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyIp**](VpsApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsChangeHostname**](VpsApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeRootPassword**](VpsApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeTimezone**](VpsApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeWebuzoPassword**](VpsApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsInsertCd**](VpsApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsReinstallOs**](VpsApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsResetPassword**](VpsApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsRestore**](VpsApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsReverseDns**](VpsApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsSetupVnc**](VpsApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSlices**](VpsApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsViewDesktop**](VpsApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**putVps**](VpsApi.md#putVps) | **PUT** /vps/order | Validate VPS Order
[**updateVpsInfo**](VpsApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**vPSCancel**](VpsApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service

<a name="addVps"></a>
# **addVps**
> addVps(body)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
VpsOrderPostRequest body = new VpsOrderPostRequest(); // VpsOrderPostRequest | 
try {
    apiInstance.addVps(body);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#addVps");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional]

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addVps"></a>
# **addVps**
> addVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String osDistro = "osDistro_example"; // String | 
Integer slices = 56; // Integer | 
String vpsPlatform = "vpsPlatform_example"; // String | 
String controlpanel = "controlpanel_example"; // String | 
Integer period = 56; // Integer | 
Integer location = 56; // Integer | 
String osVersion = "osVersion_example"; // String | 
String hostname = "hostname_example"; // String | 
String coupon = "coupon_example"; // String | 
String rootpass = "rootpass_example"; // String | 
String comment = "comment_example"; // String | 
try {
    apiInstance.addVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#addVps");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **osDistro** | **String**|  | [optional]
 **slices** | **Integer**|  | [optional] [enum: 32, 1]
 **vpsPlatform** | **String**|  | [optional] [enum: kvm, hyperv, kvmstorage]
 **controlpanel** | **String**|  | [optional] [enum: none, cpanel, da]
 **period** | **Integer**|  | [optional] [enum: 12, 1]
 **location** | **Integer**|  | [optional] [enum: 3, 1]
 **osVersion** | **String**|  | [optional]
 **hostname** | **String**|  | [optional]
 **coupon** | **String**|  | [optional]
 **rootpass** | **String**|  | [optional]
 **comment** | **String**|  | [optional]

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="deleteVpsBackup"></a>
# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
String file = "file_example"; // String | The backup filename to delete.
String all = "all_example"; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    SuccessTextResponse result = apiInstance.deleteVpsBackup(id, file, all);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#deleteVpsBackup");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |
 **file** | **String**| The backup filename to delete. |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsBlockSmtp"></a>
# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsBlockSmtp(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsBlockSmtp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsDisableCd"></a>
# **doVpsDisableCd**
> QueueResponse doVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsDisableCd(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsDisableCd");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsDisableQuota"></a>
# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsDisableQuota(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsDisableQuota");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsEjectCd"></a>
# **doVpsEjectCd**
> QueueResponse doVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsEjectCd(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsEjectCd");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsEnableQuota"></a>
# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsEnableQuota(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsEnableQuota");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsRestart"></a>
# **doVpsRestart**
> QueueResponse doVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsRestart(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsRestart");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsStart"></a>
# **doVpsStart**
> QueueResponse doVpsStart(id)

Start VPS

Powers on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsStart(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsStart");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsStop"></a>
# **doVpsStop**
> QueueResponse doVpsStop(id)

Stop VPS

Powers off the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number.
try {
    QueueResponse result = apiInstance.doVpsStop(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#doVpsStop");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="downloadVpsBackup"></a>
# **downloadVpsBackup**
> InlineResponse20011 downloadVpsBackup(body, id, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
IdBackupsBody2 body = new IdBackupsBody2(); // IdBackupsBody2 | 
Integer id = 56; // Integer | VPS ID number
String all = "all_example"; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    InlineResponse20011 result = apiInstance.downloadVpsBackup(body, id, all);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#downloadVpsBackup");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBackupsBody2**](IdBackupsBody2.md)|  |
 **id** | **Integer**| VPS ID number |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="downloadVpsBackup"></a>
# **downloadVpsBackup**
> InlineResponse20011 downloadVpsBackup(file, id, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String file = "file_example"; // String | 
Integer id = 56; // Integer | VPS ID number
String all = "all_example"; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    InlineResponse20011 result = apiInstance.downloadVpsBackup(file, id, all);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#downloadVpsBackup");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **String**|  |
 **id** | **Integer**| VPS ID number |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="getNewVps"></a>
# **getNewVps**
> VpsOrder getNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
try {
    VpsOrder result = apiInstance.getNewVps();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getNewVps");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBackups"></a>
# **getVpsBackups**
> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
String all = "all_example"; // String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    VpsBackupRows result = apiInstance.getVpsBackups(id, all);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsBackups");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |
 **all** | **String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBuyHdSpace"></a>
# **getVpsBuyHdSpace**
> getVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.getVpsBuyHdSpace(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsBuyHdSpace");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBuyIp"></a>
# **getVpsBuyIp**
> getVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.getVpsBuyIp(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsBuyIp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsChangeTimezone"></a>
# **getVpsChangeTimezone**
> List&lt;String&gt; getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    List<String> result = apiInstance.getVpsChangeTimezone(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsChangeTimezone");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

**List&lt;String&gt;**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsInfo"></a>
# **getVpsInfo**
> Vps getVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    Vps result = apiInstance.getVpsInfo(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**Vps**](Vps.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsInvoices"></a>
# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    ChargeInvoiceRows result = apiInstance.getVpsInvoices(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsInvoices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsList"></a>
# **getVpsList**
> List&lt;VpsRow&gt; getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
try {
    List<VpsRow> result = apiInstance.getVpsList();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsList");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List&lt;VpsRow&gt;**](VpsRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsReinstallOs"></a>
# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    VpsTemplatesList result = apiInstance.getVpsReinstallOs(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsReinstallOs");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsReverseDns"></a>
# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    ReverseDnsEntries result = apiInstance.getVpsReverseDns(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsReverseDns");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsSetupVnc"></a>
# **getVpsSetupVnc**
> getVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.getVpsSetupVnc(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsSetupVnc");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsSlices"></a>
# **getVpsSlices**
> getVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.getVpsSlices(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsSlices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsTrafficUsage"></a>
# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    VpsTrafficResponse result = apiInstance.getVpsTrafficUsage(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsTrafficUsage");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsViewDesktop"></a>
# **getVpsViewDesktop**
> getVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.getVpsViewDesktop(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsViewDesktop");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsWelcomeEmail"></a>
# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String id = "id_example"; // String | VPS ID
try {
    SuccessTextResponse result = apiInstance.getVpsWelcomeEmail(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#getVpsWelcomeEmail");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBackup"></a>
# **postVpsBackup**
> QueueResponse postVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsBackup(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsBackup");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBuyHdSpace"></a>
# **postVpsBuyHdSpace**
> postVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.postVpsBuyHdSpace(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsBuyHdSpace");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBuyIp"></a>
# **postVpsBuyIp**
> postVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.postVpsBuyIp(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsBuyIp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(hostname, id)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String hostname = "hostname_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeHostname(hostname, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeHostname");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hostname** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(body, id)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
HostnameObject body = new HostnameObject(); // HostnameObject | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeHostname(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeHostname");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**HostnameObject**](HostnameObject.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(password, id)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String password = "password_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeRootPassword(password, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeRootPassword");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(body, id)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
PasswordRequest body = new PasswordRequest(); // PasswordRequest | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeRootPassword(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeRootPassword");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**PasswordRequest**](PasswordRequest.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(timezone, id)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String timezone = "timezone_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeTimezone(timezone, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeTimezone");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **timezone** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(body, id)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
TimezoneUpdate body = new TimezoneUpdate(); // TimezoneUpdate | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeTimezone(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeTimezone");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(password, id)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String password = "password_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeWebuzoPassword(password, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeWebuzoPassword");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(body, id)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
PasswordRequest body = new PasswordRequest(); // PasswordRequest | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsChangeWebuzoPassword(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsChangeWebuzoPassword");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**PasswordRequest**](PasswordRequest.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(url, id)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String url = "url_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsInsertCd(url, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsInsertCd");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **url** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(body, id)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
UrlRequest body = new UrlRequest(); // UrlRequest | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsInsertCd(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsInsertCd");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**UrlRequest**](UrlRequest.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(template, password, localPassword, id)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String template = "template_example"; // String | 
String password = "password_example"; // String | 
String localPassword = "localPassword_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsReinstallOs(template, password, localPassword, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsReinstallOs");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | **String**|  |
 **password** | [**String**](.md)|  |
 **localPassword** | [**String**](.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(body, id)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
TemplateRequest body = new TemplateRequest(); // TemplateRequest | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsReinstallOs(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsReinstallOs");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TemplateRequest**](TemplateRequest.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsResetPassword"></a>
# **postVpsResetPassword**
> QueueResponse postVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsResetPassword(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsResetPassword");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(body, id)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
RestoreRequest body = new RestoreRequest(); // RestoreRequest | VPS Restore request
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsRestore(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsRestore");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(backup, password, id)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String backup = "backup_example"; // String | 
String password = "password_example"; // String | 
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsRestore(backup, password, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsRestore");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **backup** | **String**|  |
 **password** | **String**|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(body, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
ReverseDnsEntries body = new ReverseDnsEntries(); // ReverseDnsEntries | 
Integer id = 56; // Integer | VPS ID number
try {
    TextResponse result = apiInstance.postVpsReverseDns(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsReverseDns");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Map<String, Object> ips = null; // Map<String, Object> | 
Integer id = 56; // Integer | VPS ID number
try {
    TextResponse result = apiInstance.postVpsReverseDns(ips, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsReverseDns");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**Map&lt;String, Object&gt;**](Object.md)|  |
 **id** | **Integer**| VPS ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsSetupVnc"></a>
# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    QueueResponse result = apiInstance.postVpsSetupVnc(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsSetupVnc");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsSlices"></a>
# **postVpsSlices**
> postVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.postVpsSlices(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsSlices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsViewDesktop"></a>
# **postVpsViewDesktop**
> postVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    apiInstance.postVpsViewDesktop(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#postVpsViewDesktop");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(body)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
VpsOrderPutRequest body = new VpsOrderPutRequest(); // VpsOrderPutRequest | 
try {
    VpsOrderPutResponse result = apiInstance.putVps(body);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#putVps");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional]

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String osDistro = "osDistro_example"; // String | 
Integer slices = 56; // Integer | 
String vpsPlatform = "vpsPlatform_example"; // String | 
String controlpanel = "controlpanel_example"; // String | 
Integer period = 56; // Integer | 
Integer location = 56; // Integer | 
String osVersion = "osVersion_example"; // String | 
String hostname = "hostname_example"; // String | 
String coupon = "coupon_example"; // String | 
String rootpass = "rootpass_example"; // String | 
String comment = "comment_example"; // String | 
try {
    VpsOrderPutResponse result = apiInstance.putVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#putVps");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **osDistro** | **String**|  | [optional]
 **slices** | **Integer**|  | [optional] [enum: 32, 1]
 **vpsPlatform** | **String**|  | [optional] [enum: kvm, hyperv, kvmstorage]
 **controlpanel** | **String**|  | [optional] [enum: none, cpanel, da]
 **period** | **Integer**|  | [optional] [enum: 12, 1]
 **location** | **Integer**|  | [optional] [enum: 3, 1]
 **osVersion** | **String**|  | [optional]
 **hostname** | **String**|  | [optional]
 **coupon** | **String**|  | [optional]
 **rootpass** | **String**|  | [optional]
 **comment** | **String**|  | [optional]

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateVpsInfo"></a>
# **updateVpsInfo**
> updateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
String id = "id_example"; // String | VPS ID number.
try {
    apiInstance.updateVpsInfo(id);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#updateVpsInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| VPS ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="vPSCancel"></a>
# **vPSCancel**
> InlineResponse20021 vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.VpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

VpsApi apiInstance = new VpsApi();
Integer id = 56; // Integer | VPS ID number
try {
    InlineResponse20021 result = apiInstance.vPSCancel(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling VpsApi#vPSCancel");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| VPS ID number |

### Return type

[**InlineResponse20021**](InlineResponse20021.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

