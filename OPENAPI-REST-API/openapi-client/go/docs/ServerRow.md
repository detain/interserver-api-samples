# ServerRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServerId** | **string** | The id of the server. | 
**AccountLid** | **string** | The account lid of the server. | 
**ServerHostname** | **string** | The hostname of the server. | 
**ServerStatus** | **string** | The status of the server. | 

## Methods

### NewServerRow

`func NewServerRow(serverId string, accountLid string, serverHostname string, serverStatus string, ) *ServerRow`

NewServerRow instantiates a new ServerRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerRowWithDefaults

`func NewServerRowWithDefaults() *ServerRow`

NewServerRowWithDefaults instantiates a new ServerRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServerId

`func (o *ServerRow) GetServerId() string`

GetServerId returns the ServerId field if non-nil, zero value otherwise.

### GetServerIdOk

`func (o *ServerRow) GetServerIdOk() (*string, bool)`

GetServerIdOk returns a tuple with the ServerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerId

`func (o *ServerRow) SetServerId(v string)`

SetServerId sets ServerId field to given value.


### GetAccountLid

`func (o *ServerRow) GetAccountLid() string`

GetAccountLid returns the AccountLid field if non-nil, zero value otherwise.

### GetAccountLidOk

`func (o *ServerRow) GetAccountLidOk() (*string, bool)`

GetAccountLidOk returns a tuple with the AccountLid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountLid

`func (o *ServerRow) SetAccountLid(v string)`

SetAccountLid sets AccountLid field to given value.


### GetServerHostname

`func (o *ServerRow) GetServerHostname() string`

GetServerHostname returns the ServerHostname field if non-nil, zero value otherwise.

### GetServerHostnameOk

`func (o *ServerRow) GetServerHostnameOk() (*string, bool)`

GetServerHostnameOk returns a tuple with the ServerHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerHostname

`func (o *ServerRow) SetServerHostname(v string)`

SetServerHostname sets ServerHostname field to given value.


### GetServerStatus

`func (o *ServerRow) GetServerStatus() string`

GetServerStatus returns the ServerStatus field if non-nil, zero value otherwise.

### GetServerStatusOk

`func (o *ServerRow) GetServerStatusOk() (*string, bool)`

GetServerStatusOk returns a tuple with the ServerStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerStatus

`func (o *ServerRow) SetServerStatus(v string)`

SetServerStatus sets ServerStatus field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


