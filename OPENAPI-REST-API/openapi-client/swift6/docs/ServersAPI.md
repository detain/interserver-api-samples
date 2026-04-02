# ServersAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addServer**](ServersAPI.md#addserver) | **POST** /servers/order | Place Server Order
[**buyItNowServerOrder**](ServersAPI.md#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**getMPServers**](ServersAPI.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getNewServer**](ServersAPI.md#getnewserver) | **GET** /servers/order | Server Ordering Information
[**getServerInfo**](ServersAPI.md#getserverinfo) | **GET** /servers/{id} | Get Server Order
[**getServerInvoices**](ServersAPI.md#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**getServerList**](ServersAPI.md#getserverlist) | **GET** /servers | List Servers
[**getServerReverseDns**](ServersAPI.md#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**getServersWelcomeEmail**](ServersAPI.md#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**placeBuyNowServer**](ServersAPI.md#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**postServerReverseDns**](ServersAPI.md#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**putServers**](ServersAPI.md#putservers) | **PUT** /servers/order | Validate Server Order
[**serverIpmiLiveGet**](ServersAPI.md#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**serverIpmiLivePost**](ServersAPI.md#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**serverIpmiPowerGet**](ServersAPI.md#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**serverIpmiPowerPost**](ServersAPI.md#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**serversCancel**](ServersAPI.md#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service
[**updateServerInfo**](ServersAPI.md#updateserverinfo) | **POST** /servers/{id} | Update Server Order


# **addServer**
```swift
    open class func addServer(completion: @escaping (_ data: AddServer200Response?, _ error: Error?) -> Void)
```

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Place Server Order
ServersAPI.addServer() { (response, error) in
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

[**AddServer200Response**](AddServer200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **buyItNowServerOrder**
```swift
    open class func buyItNowServerOrder(completion: @escaping (_ data: BuyItNowServerOrder200Response?, _ error: Error?) -> Void)
```

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Buy Now Server Options
ServersAPI.buyItNowServerOrder() { (response, error) in
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

[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMPServers**
```swift
    open class func getMPServers(completion: @escaping (_ data: BuyItNowList?, _ error: Error?) -> Void)
```

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List Marketplace Servers
ServersAPI.getMPServers() { (response, error) in
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

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewServer**
```swift
    open class func getNewServer(completion: @escaping (_ data: ServerOrder?, _ error: Error?) -> Void)
```

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Server Ordering Information
ServersAPI.getNewServer() { (response, error) in
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

[**ServerOrder**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInfo**
```swift
    open class func getServerInfo(id: Int, completion: @escaping (_ data: Server?, _ error: Error?) -> Void)
```

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number.

// Get Server Order
ServersAPI.getServerInfo(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInvoices**
```swift
    open class func getServerInvoices(id: Int, completion: @escaping (_ data: ChargeInvoiceRows?, _ error: Error?) -> Void)
```

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Get Server Invoices
ServersAPI.getServerInvoices(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerList**
```swift
    open class func getServerList(completion: @escaping (_ data: [ServerRow]?, _ error: Error?) -> Void)
```

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List Servers
ServersAPI.getServerList() { (response, error) in
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

[**[ServerRow]**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerReverseDns**
```swift
    open class func getServerReverseDns(id: Int, completion: @escaping (_ data: ReverseDnsEntries?, _ error: Error?) -> Void)
```

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Reverse DNS Info
ServersAPI.getServerReverseDns(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServersWelcomeEmail**
```swift
    open class func getServersWelcomeEmail(id: Int, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Resend Server Welcome Email
ServersAPI.getServersWelcomeEmail(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **placeBuyNowServer**
```swift
    open class func placeBuyNowServer(placeBuyNowServerRequest: PlaceBuyNowServerRequest? = nil, completion: @escaping (_ data: ServersBuyNowResponse?, _ error: Error?) -> Void)
```

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let placeBuyNowServerRequest = placeBuyNowServer_request(serverId: 123, serverHostname: "serverHostname_example", serverRootPassword: "serverRootPassword_example") // PlaceBuyNowServerRequest |  (optional)

// Place Buy Now Server Order
ServersAPI.placeBuyNowServer(placeBuyNowServerRequest: placeBuyNowServerRequest) { (response, error) in
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
 **placeBuyNowServerRequest** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md) |  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postServerReverseDns**
```swift
    open class func postServerReverseDns(id: Int, reverseDnsEntries: ReverseDnsEntries, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number
let reverseDnsEntries = ReverseDnsEntries(ips: "TODO") // ReverseDnsEntries | 

// Update Reverse DNS
ServersAPI.postServerReverseDns(id: id, reverseDnsEntries: reverseDnsEntries) { (response, error) in
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
 **id** | **Int** | Server ID number | 
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md) |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putServers**
```swift
    open class func putServers(completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Validate Server Order
ServersAPI.putServers() { (response, error) in
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

# **serverIpmiLiveGet**
```swift
    open class func serverIpmiLiveGet(id: Int, completion: @escaping (_ data: ServerIpmiLiveInfo?, _ error: Error?) -> Void)
```

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Server IPMI Live Information
ServersAPI.serverIpmiLiveGet(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiLivePost**
```swift
    open class func serverIpmiLivePost(id: Int, ip: String, asset: Int? = nil, completion: @escaping (_ data: ServerIpmiLiveInfo?, _ error: Error?) -> Void)
```

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number
let ip = "ip_example" // String | Your IP Address you wish to connect to the IPMI system from.
let asset = 987 // Int | Asset ID (optional)

// Server IPMI Live Setup
ServersAPI.serverIpmiLivePost(id: id, ip: ip, asset: asset) { (response, error) in
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
 **id** | **Int** | Server ID number | 
 **ip** | **String** | Your IP Address you wish to connect to the IPMI system from. | 
 **asset** | **Int** | Asset ID | [optional] 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiPowerGet**
```swift
    open class func serverIpmiPowerGet(id: Int, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Get IPMI Power Status
ServersAPI.serverIpmiPowerGet(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiPowerPost**
```swift
    open class func serverIpmiPowerPost(id: Int, action: Action_serverIpmiPowerPost, asset: Int? = nil, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number
let action = "action_example" // String | The power action to send to the ipmi controller.
let asset = 987 // Int | The Asset ID (optional)

// Server IPMI Power
ServersAPI.serverIpmiPowerPost(id: id, action: action, asset: asset) { (response, error) in
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
 **id** | **Int** | Server ID number | 
 **action** | **String** | The power action to send to the ipmi controller. | 
 **asset** | **Int** | The Asset ID | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serversCancel**
```swift
    open class func serversCancel(id: Int, completion: @escaping (_ data: ServersCancel200Response?, _ error: Error?) -> Void)
```

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | Server ID number

// Cancel Server Service
ServersAPI.serversCancel(id: id) { (response, error) in
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
 **id** | **Int** | Server ID number | 

### Return type

[**ServersCancel200Response**](ServersCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateServerInfo**
```swift
    open class func updateServerInfo(id: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Update Server Order

Updates settings on a dedicated server order.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | Server ID number.

// Update Server Order
ServersAPI.updateServerInfo(id: id) { (response, error) in
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
 **id** | **String** | Server ID number. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

