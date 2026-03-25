# QuickServersAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addQs**](QuickServersAPI.md#addqs) | **POST** /qs/order | Place QuickServer Order
[**deleteQsBackup**](QuickServersAPI.md#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**doQsBlockSmtp**](QuickServersAPI.md#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**doQsDisableCd**](QuickServersAPI.md#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**doQsDisableQuota**](QuickServersAPI.md#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**doQsEjectCd**](QuickServersAPI.md#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**doQsEnableQuota**](QuickServersAPI.md#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**doQsRestart**](QuickServersAPI.md#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer
[**doQsStart**](QuickServersAPI.md#doqsstart) | **GET** /qs/{id}/start | Start QuickServer
[**doQsStop**](QuickServersAPI.md#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer
[**downloadQsBackup**](QuickServersAPI.md#downloadqsbackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**getNewQs**](QuickServersAPI.md#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information
[**getQsBackups**](QuickServersAPI.md#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups
[**getQsChangeHostname**](QuickServersAPI.md#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**getQsChangeRootPassword**](QuickServersAPI.md#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**getQsChangeTimezone**](QuickServersAPI.md#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**getQsChangeWebuzoPassword**](QuickServersAPI.md#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**getQsInfo**](QuickServersAPI.md#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order
[**getQsInsertCd**](QuickServersAPI.md#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**getQsInvoices**](QuickServersAPI.md#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**getQsList**](QuickServersAPI.md#getqslist) | **GET** /qs | List QuickServers
[**getQsReinstallOs**](QuickServersAPI.md#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**getQsResetPassword**](QuickServersAPI.md#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**getQsReverseDns**](QuickServersAPI.md#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**getQsSetupVnc**](QuickServersAPI.md#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**getQsTrafficUsage**](QuickServersAPI.md#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**getQsViewDesktop**](QuickServersAPI.md#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**getQsWelcomeEmail**](QuickServersAPI.md#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**postQsBackup**](QuickServersAPI.md#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**postQsChangeHostname**](QuickServersAPI.md#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**postQsChangeRootPassword**](QuickServersAPI.md#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password
[**postQsChangeTimezone**](QuickServersAPI.md#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**postQsChangeWebuzoPassword**](QuickServersAPI.md#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**postQsInsertCd**](QuickServersAPI.md#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**postQsReinstallOs**](QuickServersAPI.md#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**postQsResetPassword**](QuickServersAPI.md#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**postQsReverseDns**](QuickServersAPI.md#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**postQsSetupVnc**](QuickServersAPI.md#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**postQsTrafficUsage**](QuickServersAPI.md#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**postQsViewDesktop**](QuickServersAPI.md#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**postQuickServerRestore**](QuickServersAPI.md#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**putQs**](QuickServersAPI.md#putqs) | **PUT** /qs/order | Validate QuickServer Order
[**quickserversCancel**](QuickServersAPI.md#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**updateQsInfo**](QuickServersAPI.md#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order


# **addQs**
```swift
    open class func addQs(completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Place QuickServer Order
QuickServersAPI.addQs() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQsBackup**
```swift
    open class func deleteQsBackup(id: Int, file: String, all: All_deleteQsBackup? = nil, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let file = "file_example" // String | The backup filename to delete.
let all = "all_example" // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)

// Delete QuickServer Backup
QuickServersAPI.deleteQsBackup(id: id, file: file, all: all) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **file** | **String** | The backup filename to delete. | 
 **all** | **String** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsBlockSmtp**
```swift
    open class func doQsBlockSmtp(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Block QuickServer SMTP
QuickServersAPI.doQsBlockSmtp(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsDisableCd**
```swift
    open class func doQsDisableCd(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Disable CD Drive
QuickServersAPI.doQsDisableCd(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsDisableQuota**
```swift
    open class func doQsDisableQuota(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Disable Quotas
QuickServersAPI.doQsDisableQuota(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsEjectCd**
```swift
    open class func doQsEjectCd(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Eject CD Drive

Ejects the virtual CD from the QuickServer's CD drive.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Eject CD Drive
QuickServersAPI.doQsEjectCd(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsEnableQuota**
```swift
    open class func doQsEnableQuota(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Enable Quotas
QuickServersAPI.doQsEnableQuota(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsRestart**
```swift
    open class func doQsRestart(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Restart QuickServer
QuickServersAPI.doQsRestart(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsStart**
```swift
    open class func doQsStart(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Start QuickServer

Powers on the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Start QuickServer
QuickServersAPI.doQsStart(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doQsStop**
```swift
    open class func doQsStop(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Stop QuickServer

Powers off the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Stop QuickServer
QuickServersAPI.doQsStop(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **downloadQsBackup**
```swift
    open class func downloadQsBackup(id: Int, downloadQsBackupRequest: DownloadQsBackupRequest, all: All_downloadQsBackup? = nil, completion: @escaping (_ data: DownloadQsBackup200Response?, _ error: Error?) -> Void)
```

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let downloadQsBackupRequest = downloadQsBackup_request(file: "file_example") // DownloadQsBackupRequest | 
let all = "all_example" // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)

// Download QuickServer Backup
QuickServersAPI.downloadQsBackup(id: id, downloadQsBackupRequest: downloadQsBackupRequest, all: all) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md) |  | 
 **all** | **String** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewQs**
```swift
    open class func getNewQs(completion: @escaping (_ data: QuickserverOrder?, _ error: Error?) -> Void)
```

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get QuickServer Ordering Information
QuickServersAPI.getNewQs() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](QuickserverOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsBackups**
```swift
    open class func getQsBackups(id: Int, all: All_getQsBackups? = nil, completion: @escaping (_ data: VpsBackupRows?, _ error: Error?) -> Void)
```

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let all = "all_example" // String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)

// List QuickServer Backups
QuickServersAPI.getQsBackups(id: id, all: all) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **all** | **String** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeHostname**
```swift
    open class func getQsChangeHostname(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get QuickServer Hostname
QuickServersAPI.getQsChangeHostname(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeRootPassword**
```swift
    open class func getQsChangeRootPassword(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get Change Root Password Info
QuickServersAPI.getQsChangeRootPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeTimezone**
```swift
    open class func getQsChangeTimezone(id: Int, completion: @escaping (_ data: [String]?, _ error: Error?) -> Void)
```

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get Timezone Info
QuickServersAPI.getQsChangeTimezone(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

**[String]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeWebuzoPassword**
```swift
    open class func getQsChangeWebuzoPassword(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Webuzo Change Pass Info
QuickServersAPI.getQsChangeWebuzoPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInfo**
```swift
    open class func getQsInfo(id: Int, completion: @escaping (_ data: Quickserver?, _ error: Error?) -> Void)
```

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number.

// Get QuickServer Order
QuickServersAPI.getQsInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number. | 

### Return type

[**Quickserver**](Quickserver.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInsertCd**
```swift
    open class func getQsInsertCd(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Insert CD Information
QuickServersAPI.getQsInsertCd(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInvoices**
```swift
    open class func getQsInvoices(id: Int, completion: @escaping (_ data: ChargeInvoiceRows?, _ error: Error?) -> Void)
```

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get QuickServer Invoices
QuickServersAPI.getQsInvoices(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsList**
```swift
    open class func getQsList(completion: @escaping (_ data: [QuickserverRow]?, _ error: Error?) -> Void)
```

List QuickServers

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List QuickServers
QuickServersAPI.getQsList() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**[QuickserverRow]**](QuickserverRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsReinstallOs**
```swift
    open class func getQsReinstallOs(id: Int, completion: @escaping (_ data: VpsTemplatesList?, _ error: Error?) -> Void)
```

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// QuickServer Reinstall OS Options
QuickServersAPI.getQsReinstallOs(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsResetPassword**
```swift
    open class func getQsResetPassword(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer's root password.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Reset QuickServer Password Info
QuickServersAPI.getQsResetPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsReverseDns**
```swift
    open class func getQsReverseDns(id: Int, completion: @escaping (_ data: ReverseDnsEntries?, _ error: Error?) -> Void)
```

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Reverse DNS Info
QuickServersAPI.getQsReverseDns(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsSetupVnc**
```swift
    open class func getQsSetupVnc(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// VNC Setup Info
QuickServersAPI.getQsSetupVnc(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsTrafficUsage**
```swift
    open class func getQsTrafficUsage(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get Traffic Usage
QuickServersAPI.getQsTrafficUsage(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsViewDesktop**
```swift
    open class func getQsViewDesktop(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Get View Desktop Info
QuickServersAPI.getQsViewDesktop(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsWelcomeEmail**
```swift
    open class func getQsWelcomeEmail(id: String, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | Quickserver ID

// Resend QuickServer Welcome Email
QuickServersAPI.getQsWelcomeEmail(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String** | Quickserver ID | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsBackup**
```swift
    open class func postQsBackup(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Create QuickServer Backup
QuickServersAPI.postQsBackup(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsChangeHostname**
```swift
    open class func postQsChangeHostname(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Update QuickServer Hostname
QuickServersAPI.postQsChangeHostname(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsChangeRootPassword**
```swift
    open class func postQsChangeRootPassword(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Change Root Password

Triggers a root password reset for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Change Root Password
QuickServersAPI.postQsChangeRootPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsChangeTimezone**
```swift
    open class func postQsChangeTimezone(id: Int, timezone: String, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let timezone = "timezone_example" // String | The time zone

// Change QuickServer Timezone
QuickServersAPI.postQsChangeTimezone(id: id, timezone: timezone) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **timezone** | **String** | The time zone | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsChangeWebuzoPassword**
```swift
    open class func postQsChangeWebuzoPassword(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Change Webuzo Password
QuickServersAPI.postQsChangeWebuzoPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsInsertCd**
```swift
    open class func postQsInsertCd(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Insert CD in QuickServer

Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Insert CD in QuickServer
QuickServersAPI.postQsInsertCd(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsReinstallOs**
```swift
    open class func postQsReinstallOs(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Reinstall QuickServer OS
QuickServersAPI.postQsReinstallOs(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsResetPassword**
```swift
    open class func postQsResetPassword(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Reset QuickServer Password
QuickServersAPI.postQsResetPassword(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsReverseDns**
```swift
    open class func postQsReverseDns(id: Int, reverseDnsEntries: ReverseDnsEntries, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let reverseDnsEntries = ReverseDnsEntries(ips: "TODO") // ReverseDnsEntries | 

// Update Reverse DNS
QuickServersAPI.postQsReverseDns(id: id, reverseDnsEntries: reverseDnsEntries) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md) |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsSetupVnc**
```swift
    open class func postQsSetupVnc(id: Int, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Setup VNC
QuickServersAPI.postQsSetupVnc(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsTrafficUsage**
```swift
    open class func postQsTrafficUsage(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Search Traffic Usage

Searches and filters the QuickServer's bandwidth traffic usage data by date range.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Search Traffic Usage
QuickServersAPI.postQsTrafficUsage(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsViewDesktop**
```swift
    open class func postQsViewDesktop(id: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Update View Desktop
QuickServersAPI.postQsViewDesktop(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQuickServerRestore**
```swift
    open class func postQuickServerRestore(id: Int, restoreRequest: RestoreRequest, completion: @escaping (_ data: QueueResponse?, _ error: Error?) -> Void)
```

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number
let restoreRequest = RestoreRequest(backup: "backup_example", password: "password_example") // RestoreRequest | QuickServer Restore request

// Restore QuickServer from Backup
QuickServersAPI.postQuickServerRestore(id: id, restoreRequest: restoreRequest) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 
 **restoreRequest** | [**RestoreRequest**](RestoreRequest.md) | QuickServer Restore request | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putQs**
```swift
    open class func putQs(completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Validate QuickServer Order
QuickServersAPI.putQs() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **quickserversCancel**
```swift
    open class func quickserversCancel(id: Int, completion: @escaping (_ data: QuickserversCancel200Response?, _ error: Error?) -> Void)
```

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | QuickServer ID number

// Cancel QuickServer Order
QuickServersAPI.quickserversCancel(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | QuickServer ID number | 

### Return type

[**QuickserversCancel200Response**](QuickserversCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQsInfo**
```swift
    open class func updateQsInfo(id: String, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | QuickServer ID number.

// Update QuickServer Order
QuickServersAPI.updateQsInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String** | QuickServer ID number. | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

