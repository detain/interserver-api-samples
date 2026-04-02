# FloatingIPsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFloatingIp**](FloatingIPsAPI.md#addfloatingip) | **POST** /floating_ips/order | Place Floating IP Order
[**floatingIpsCancel**](FloatingIPsAPI.md#floatingipscancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**getFloatingIpInfo**](FloatingIPsAPI.md#getfloatingipinfo) | **GET** /floating_ips/{id} | View Floating IP
[**getFloatingIpInvoices**](FloatingIPsAPI.md#getfloatingipinvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**getFloatingIpsList**](FloatingIPsAPI.md#getfloatingipslist) | **GET** /floating_ips | List Floating IPs
[**getFloatingIpsWelcomeEmail**](FloatingIPsAPI.md#getfloatingipswelcomeemail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**getNewFloatingIp**](FloatingIPsAPI.md#getnewfloatingip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**postFloatingIpsChangeIp**](FloatingIPsAPI.md#postfloatingipschangeip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**putFloatingIps**](FloatingIPsAPI.md#putfloatingips) | **PUT** /floating_ips/order | Validate Floating IP Order
[**updateFloatingIpInfo**](FloatingIPsAPI.md#updatefloatingipinfo) | **POST** /floating_ips/{id} | Update Floating IP


# **addFloatingIp**
```swift
    open class func addFloatingIp(completion: @escaping (_ data: ServiceOrderPostResponse?, _ error: Error?) -> Void)
```

Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Place Floating IP Order
FloatingIPsAPI.addFloatingIp() { (response, error) in
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

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **floatingIpsCancel**
```swift
    open class func floatingIpsCancel(id: Int, completion: @escaping (_ data: FloatingIpsCancel200Response?, _ error: Error?) -> Void)
```

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

// Cancel Floating IP
FloatingIPsAPI.floatingIpsCancel(id: id) { (response, error) in
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
 **id** | **Int** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**FloatingIpsCancel200Response**](FloatingIpsCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpInfo**
```swift
    open class func getFloatingIpInfo(id: Int, completion: @escaping (_ data: JSONValue?, _ error: Error?) -> Void)
```

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

// View Floating IP
FloatingIPsAPI.getFloatingIpInfo(id: id) { (response, error) in
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
 **id** | **Int** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

**JSONValue**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpInvoices**
```swift
    open class func getFloatingIpInvoices(id: Int, completion: @escaping (_ data: ChargeInvoiceRows?, _ error: Error?) -> Void)
```

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

// Get Floating IP Invoices
FloatingIPsAPI.getFloatingIpInvoices(id: id) { (response, error) in
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
 **id** | **Int** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpsList**
```swift
    open class func getFloatingIpsList(completion: @escaping (_ data: [JSONValue]?, _ error: Error?) -> Void)
```

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List Floating IPs
FloatingIPsAPI.getFloatingIpsList() { (response, error) in
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

**[JSONValue]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpsWelcomeEmail**
```swift
    open class func getFloatingIpsWelcomeEmail(id: Int, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

// Resend Floating IPs Welcome Email
FloatingIPsAPI.getFloatingIpsWelcomeEmail(id: id) { (response, error) in
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
 **id** | **Int** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewFloatingIp**
```swift
    open class func getNewFloatingIp(completion: @escaping (_ data: JSONValue?, _ error: Error?) -> Void)
```

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Floating IP Ordering Information
FloatingIPsAPI.getNewFloatingIp() { (response, error) in
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

**JSONValue**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postFloatingIpsChangeIp**
```swift
    open class func postFloatingIpsChangeIp(id: Int, ip: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
let ip = "ip_example" // String | IP Address

// Change Floating IP Target
FloatingIPsAPI.postFloatingIpsChangeIp(id: id, ip: ip) { (response, error) in
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
 **id** | **Int** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 
 **ip** | **String** | IP Address | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putFloatingIps**
```swift
    open class func putFloatingIps(completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Validate Floating IP Order
FloatingIPsAPI.putFloatingIps() { (response, error) in
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

# **updateFloatingIpInfo**
```swift
    open class func updateFloatingIpInfo(id: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | The Floating IP service ID. Use the ID from `GET /floating_ips`.

// Update Floating IP
FloatingIPsAPI.updateFloatingIpInfo(id: id) { (response, error) in
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
 **id** | **String** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

