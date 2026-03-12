# PlaceBuyNowServerRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServerId** | Pointer to **float32** | The ID of the buy-it-now server configuration to order. Use the server listing from &#x60;GET /servers/order/buy_now_server&#x60; to find valid IDs. | [optional] 
**ServerHostname** | Pointer to **string** | The fully-qualified hostname to assign to the server. | [optional] 
**ServerRootPassword** | Pointer to **string** | The root or administrator password to set on the server. | [optional] 

## Methods

### NewPlaceBuyNowServerRequest

`func NewPlaceBuyNowServerRequest() *PlaceBuyNowServerRequest`

NewPlaceBuyNowServerRequest instantiates a new PlaceBuyNowServerRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPlaceBuyNowServerRequestWithDefaults

`func NewPlaceBuyNowServerRequestWithDefaults() *PlaceBuyNowServerRequest`

NewPlaceBuyNowServerRequestWithDefaults instantiates a new PlaceBuyNowServerRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServerId

`func (o *PlaceBuyNowServerRequest) GetServerId() float32`

GetServerId returns the ServerId field if non-nil, zero value otherwise.

### GetServerIdOk

`func (o *PlaceBuyNowServerRequest) GetServerIdOk() (*float32, bool)`

GetServerIdOk returns a tuple with the ServerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerId

`func (o *PlaceBuyNowServerRequest) SetServerId(v float32)`

SetServerId sets ServerId field to given value.

### HasServerId

`func (o *PlaceBuyNowServerRequest) HasServerId() bool`

HasServerId returns a boolean if a field has been set.

### GetServerHostname

`func (o *PlaceBuyNowServerRequest) GetServerHostname() string`

GetServerHostname returns the ServerHostname field if non-nil, zero value otherwise.

### GetServerHostnameOk

`func (o *PlaceBuyNowServerRequest) GetServerHostnameOk() (*string, bool)`

GetServerHostnameOk returns a tuple with the ServerHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerHostname

`func (o *PlaceBuyNowServerRequest) SetServerHostname(v string)`

SetServerHostname sets ServerHostname field to given value.

### HasServerHostname

`func (o *PlaceBuyNowServerRequest) HasServerHostname() bool`

HasServerHostname returns a boolean if a field has been set.

### GetServerRootPassword

`func (o *PlaceBuyNowServerRequest) GetServerRootPassword() string`

GetServerRootPassword returns the ServerRootPassword field if non-nil, zero value otherwise.

### GetServerRootPasswordOk

`func (o *PlaceBuyNowServerRequest) GetServerRootPasswordOk() (*string, bool)`

GetServerRootPasswordOk returns a tuple with the ServerRootPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerRootPassword

`func (o *PlaceBuyNowServerRequest) SetServerRootPassword(v string)`

SetServerRootPassword sets ServerRootPassword field to given value.

### HasServerRootPassword

`func (o *PlaceBuyNowServerRequest) HasServerRootPassword() bool`

HasServerRootPassword returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


