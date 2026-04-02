# ServersAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServersAPI_addServer**](ServersAPI.md#ServersAPI_addServer) | **POST** /servers/order | Place Server Order
[**ServersAPI_buyItNowServerOrder**](ServersAPI.md#ServersAPI_buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**ServersAPI_getMPServers**](ServersAPI.md#ServersAPI_getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**ServersAPI_getNewServer**](ServersAPI.md#ServersAPI_getNewServer) | **GET** /servers/order | Server Ordering Information
[**ServersAPI_getServerInfo**](ServersAPI.md#ServersAPI_getServerInfo) | **GET** /servers/{id} | Get Server Order
[**ServersAPI_getServerInvoices**](ServersAPI.md#ServersAPI_getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**ServersAPI_getServerList**](ServersAPI.md#ServersAPI_getServerList) | **GET** /servers | List Servers
[**ServersAPI_getServerReverseDns**](ServersAPI.md#ServersAPI_getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**ServersAPI_getServersWelcomeEmail**](ServersAPI.md#ServersAPI_getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**ServersAPI_placeBuyNowServer**](ServersAPI.md#ServersAPI_placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**ServersAPI_postServerReverseDns**](ServersAPI.md#ServersAPI_postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**ServersAPI_putServers**](ServersAPI.md#ServersAPI_putServers) | **PUT** /servers/order | Validate Server Order
[**ServersAPI_serverIpmiLiveGet**](ServersAPI.md#ServersAPI_serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**ServersAPI_serverIpmiLivePost**](ServersAPI.md#ServersAPI_serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**ServersAPI_serverIpmiPowerGet**](ServersAPI.md#ServersAPI_serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**ServersAPI_serverIpmiPowerPost**](ServersAPI.md#ServersAPI_serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**ServersAPI_serversCancel**](ServersAPI.md#ServersAPI_serversCancel) | **DELETE** /servers/{id} | Cancel Server Service
[**ServersAPI_updateServerInfo**](ServersAPI.md#ServersAPI_updateServerInfo) | **POST** /servers/{id} | Update Server Order


# **ServersAPI_addServer**
```c
// Place Server Order
//
// Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
//
add_server_200_response_t* ServersAPI_addServer(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[add_server_200_response_t](add_server_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_buyItNowServerOrder**
```c
// Get Buy Now Server Options
//
// Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
//
buy_it_now_server_order_200_response_t* ServersAPI_buyItNowServerOrder(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[buy_it_now_server_order_200_response_t](buy_it_now_server_order_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getMPServers**
```c
// List Marketplace Servers
//
// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
//
buy_it_now_list_t* ServersAPI_getMPServers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[buy_it_now_list_t](buy_it_now_list.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getNewServer**
```c
// Server Ordering Information
//
// Retrieves available server configurations and pricing for ordering a new dedicated server.
//
server_order_t* ServersAPI_getNewServer(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[server_order_t](server_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getServerInfo**
```c
// Get Server Order
//
// Returns detailed information about a specific server including its hardware configuration, IPs, and status.
//
server_t* ServersAPI_getServerInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number. | 

### Return type

[server_t](server.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getServerInvoices**
```c
// Get Server Invoices
//
// Returns the billing invoices associated with this dedicated server.
//
charge_invoice_rows_t* ServersAPI_getServerInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getServerList**
```c
// List Servers
//
// Returns all dedicated server services on the account with their current status and configuration.
//
list_t* ServersAPI_getServerList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](server_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getServerReverseDns**
```c
// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
//
reverse_dns_entries_t* ServersAPI_getServerReverseDns(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[reverse_dns_entries_t](reverse_dns_entries.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_getServersWelcomeEmail**
```c
// Resend Server Welcome Email
//
// Resends the welcome email for the order.
//
success_text_response_t* ServersAPI_getServersWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_placeBuyNowServer**
```c
// Place Buy Now Server Order
//
// Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
//
servers_buy_now_response_t* ServersAPI_placeBuyNowServer(apiClient_t *apiClient, place_buy_now_server_request_t *place_buy_now_server_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**place_buy_now_server_request** | **[place_buy_now_server_request_t](place_buy_now_server_request.md) \*** |  | [optional] 

### Return type

[servers_buy_now_response_t](servers_buy_now_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_postServerReverseDns**
```c
// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the server's IP addresses.
//
text_response_t* ServersAPI_postServerReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 
**reverse_dns_entries** | **[reverse_dns_entries_t](reverse_dns_entries.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_putServers**
```c
// Validate Server Order
//
// Validates a server order before placing it. Use this to check for errors before committing to a purchase.
//
void ServersAPI_putServers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_serverIpmiLiveGet**
```c
// Server IPMI Live Information
//
// Returns the current IPMI live connection information for the server.
//
server_ipmi_live_info_t* ServersAPI_serverIpmiLiveGet(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[server_ipmi_live_info_t](server_ipmi_live_info.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_serverIpmiLivePost**
```c
// Server IPMI Live Setup
//
// Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
//
server_ipmi_live_info_t* ServersAPI_serverIpmiLivePost(apiClient_t *apiClient, int *id, char *ip, int *asset);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 
**ip** | **char \*** | Your IP Address you wish to connect to the IPMI system from. | 
**asset** | **int \*** | Asset ID | [optional] 

### Return type

[server_ipmi_live_info_t](server_ipmi_live_info.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_serverIpmiPowerGet**
```c
// Get IPMI Power Status
//
// Returns the chassis power status from ipmi.
//
text_response_t* ServersAPI_serverIpmiPowerGet(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_serverIpmiPowerPost**
```c
// Server IPMI Power
//
// Uses the IPMI interface to set the Power status on the server.
//
text_response_t* ServersAPI_serverIpmiPowerPost(apiClient_t *apiClient, int *id, interserver_management_api_serverIpmiPowerPost_action_e action, int *asset);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 
**action** | **interserver_management_api_serverIpmiPowerPost_action_e** | The power action to send to the ipmi controller. | 
**asset** | **int \*** | The Asset ID | [optional] 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_serversCancel**
```c
// Cancel Server Service
//
// Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
servers_cancel_200_response_t* ServersAPI_serversCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Server ID number | 

### Return type

[servers_cancel_200_response_t](servers_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersAPI_updateServerInfo**
```c
// Update Server Order
//
// Updates settings on a dedicated server order.
//
success_text_response_t* ServersAPI_updateServerInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Server ID number. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

