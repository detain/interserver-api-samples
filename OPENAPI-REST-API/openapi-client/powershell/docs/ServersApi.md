# PSOpenAPITools.PSOpenAPITools\Api.ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Add-Server**](ServersApi.md#Add-Server) | **POST** /servers/order | Place Server Order
[**Invoke-BuyItNowServerOrder**](ServersApi.md#Invoke-BuyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**Get-MPServers**](ServersApi.md#Get-MPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**Get-NewServer**](ServersApi.md#Get-NewServer) | **GET** /servers/order | Server Ordering Information
[**Get-ServerInfo**](ServersApi.md#Get-ServerInfo) | **GET** /servers/{id} | Get Server Order
[**Get-ServerInvoices**](ServersApi.md#Get-ServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**Get-ServerList**](ServersApi.md#Get-ServerList) | **GET** /servers | List Servers
[**Get-ServerReverseDns**](ServersApi.md#Get-ServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**Get-ServersWelcomeEmail**](ServersApi.md#Get-ServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**Invoke-PlaceBuyNowServer**](ServersApi.md#Invoke-PlaceBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**Submit-ServerReverseDns**](ServersApi.md#Submit-ServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**Send-Servers**](ServersApi.md#Send-Servers) | **PUT** /servers/order | Validate Server Order
[**Invoke-ServerIpmiLiveGet**](ServersApi.md#Invoke-ServerIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**Invoke-ServerIpmiLivePost**](ServersApi.md#Invoke-ServerIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**Invoke-ServerIpmiPowerGet**](ServersApi.md#Invoke-ServerIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**Invoke-ServerIpmiPowerPost**](ServersApi.md#Invoke-ServerIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**Invoke-ServersCancel**](ServersApi.md#Invoke-ServersCancel) | **DELETE** /servers/{id} | Cancel Server Service
[**Update-ServerInfo**](ServersApi.md#Update-ServerInfo) | **POST** /servers/{id} | Update Server Order


<a id="Add-Server"></a>
# **Add-Server**
> void Add-Server<br>

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# Place Server Order
try {
    $Result = Add-Server
} catch {
    Write-Host ("Exception occurred when calling Add-Server: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-BuyItNowServerOrder"></a>
# **Invoke-BuyItNowServerOrder**
> BuyItNowServerOrder200Response Invoke-BuyItNowServerOrder<br>

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# Get Buy Now Server Options
try {
    $Result = Invoke-BuyItNowServerOrder
} catch {
    Write-Host ("Exception occurred when calling Invoke-BuyItNowServerOrder: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-MPServers"></a>
# **Get-MPServers**
> BuyItNowList Get-MPServers<br>

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# List Marketplace Servers
try {
    $Result = Get-MPServers
} catch {
    Write-Host ("Exception occurred when calling Get-MPServers: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-NewServer"></a>
# **Get-NewServer**
> ServerOrder Get-NewServer<br>

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# Server Ordering Information
try {
    $Result = Get-NewServer
} catch {
    Write-Host ("Exception occurred when calling Get-NewServer: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-ServerInfo"></a>
# **Get-ServerInfo**
> Server Get-ServerInfo<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number.

# Get Server Order
try {
    $Result = Get-ServerInfo -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Get-ServerInfo: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number. | 

### Return type

[**Server**](Server.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-ServerInvoices"></a>
# **Get-ServerInvoices**
> ChargeInvoiceRows Get-ServerInvoices<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Get Server Invoices
try {
    $Result = Get-ServerInvoices -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Get-ServerInvoices: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-ServerList"></a>
# **Get-ServerList**
> ServerRow[] Get-ServerList<br>

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# List Servers
try {
    $Result = Get-ServerList
} catch {
    Write-Host ("Exception occurred when calling Get-ServerList: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerRow[]**](ServerRow.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-ServerReverseDns"></a>
# **Get-ServerReverseDns**
> ReverseDnsEntries Get-ServerReverseDns<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Reverse DNS Info
try {
    $Result = Get-ServerReverseDns -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Get-ServerReverseDns: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Get-ServersWelcomeEmail"></a>
# **Get-ServersWelcomeEmail**
> SuccessTextResponse Get-ServersWelcomeEmail<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Resend Server Welcome Email
try {
    $Result = Get-ServersWelcomeEmail -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Get-ServersWelcomeEmail: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-PlaceBuyNowServer"></a>
# **Invoke-PlaceBuyNowServer**
> ServersBuyNowResponse Invoke-PlaceBuyNowServer<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-PlaceBuyNowServerRequest] <PSCustomObject><br>

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$PlaceBuyNowServerRequest = Initialize-PlaceBuyNowServerRequest -ServerId 2343 -ServerHostname "server.int.com" -ServerRootPassword "uD1c!@cgD" # PlaceBuyNowServerRequest |  (optional)

# Place Buy Now Server Order
try {
    $Result = Invoke-PlaceBuyNowServer -PlaceBuyNowServerRequest $PlaceBuyNowServerRequest
} catch {
    Write-Host ("Exception occurred when calling Invoke-PlaceBuyNowServer: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **PlaceBuyNowServerRequest** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md)|  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Submit-ServerReverseDns"></a>
# **Submit-ServerReverseDns**
> TextResponse Submit-ServerReverseDns<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-ReverseDnsEntries] <PSCustomObject><br>

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number
$ReverseDnsEntries = Initialize-ReverseDnsEntries -Ips @{ key_example =  } # ReverseDnsEntries | 

# Update Reverse DNS
try {
    $Result = Submit-ServerReverseDns -Id $Id -ReverseDnsEntries $ReverseDnsEntries
} catch {
    Write-Host ("Exception occurred when calling Submit-ServerReverseDns: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 
 **ReverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Send-Servers"></a>
# **Send-Servers**
> void Send-Servers<br>

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"


# Validate Server Order
try {
    $Result = Send-Servers
} catch {
    Write-Host ("Exception occurred when calling Send-Servers: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-ServerIpmiLiveGet"></a>
# **Invoke-ServerIpmiLiveGet**
> ServerIpmiLiveInfo Invoke-ServerIpmiLiveGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Server IPMI Live Information
try {
    $Result = Invoke-ServerIpmiLiveGet -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Invoke-ServerIpmiLiveGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-ServerIpmiLivePost"></a>
# **Invoke-ServerIpmiLivePost**
> ServerIpmiLiveInfo Invoke-ServerIpmiLivePost<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Ip] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Asset] <System.Nullable[Int32]><br>

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number
$Ip = "MyIp" # String | Your IP Address you wish to connect to the IPMI system from.
$Asset = 56 # Int32 | Asset ID (optional)

# Server IPMI Live Setup
try {
    $Result = Invoke-ServerIpmiLivePost -Id $Id -Ip $Ip -Asset $Asset
} catch {
    Write-Host ("Exception occurred when calling Invoke-ServerIpmiLivePost: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 
 **Ip** | **String**| Your IP Address you wish to connect to the IPMI system from. | 
 **Asset** | **Int32**| Asset ID | [optional] 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-ServerIpmiPowerGet"></a>
# **Invoke-ServerIpmiPowerGet**
> TextResponse Invoke-ServerIpmiPowerGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Get IPMI Power Status
try {
    $Result = Invoke-ServerIpmiPowerGet -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Invoke-ServerIpmiPowerGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-ServerIpmiPowerPost"></a>
# **Invoke-ServerIpmiPowerPost**
> TextResponse Invoke-ServerIpmiPowerPost<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Action] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Asset] <System.Nullable[Int32]><br>

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number
$Action = "cycle" # String | The power action to send to the ipmi controller.
$Asset = 56 # Int32 | The Asset ID (optional)

# Server IPMI Power
try {
    $Result = Invoke-ServerIpmiPowerPost -Id $Id -Action $Action -Asset $Asset
} catch {
    Write-Host ("Exception occurred when calling Invoke-ServerIpmiPowerPost: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 
 **Action** | **String**| The power action to send to the ipmi controller. | 
 **Asset** | **Int32**| The Asset ID | [optional] 

### Return type

[**TextResponse**](TextResponse.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-ServersCancel"></a>
# **Invoke-ServersCancel**
> ServersCancel200Response Invoke-ServersCancel<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = 56 # Int32 | Server ID number

# Cancel Server Service
try {
    $Result = Invoke-ServersCancel -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Invoke-ServersCancel: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**| Server ID number | 

### Return type

[**ServersCancel200Response**](ServersCancel200Response.md) (PSCustomObject)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Update-ServerInfo"></a>
# **Update-ServerInfo**
> void Update-ServerInfo<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <String><br>

Update Server Order

Updates settings on a dedicated server order.

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: sessionIdCookieAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

# Configure API key authorization: apiKeyAuth
$Configuration.ApiKey.X-API-KEY = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.X-API-KEY = "Bearer"

# Configure API key authorization: sessionIdHeaderAuth
$Configuration.ApiKey.sessionid = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.sessionid = "Bearer"

$Id = "MyId" # String | Server ID number.

# Update Server Order
try {
    $Result = Update-ServerInfo -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Update-ServerInfo: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **String**| Server ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

