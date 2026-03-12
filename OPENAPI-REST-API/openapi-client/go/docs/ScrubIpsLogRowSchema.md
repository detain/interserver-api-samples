# ScrubIpsLogRowSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Date** | Pointer to **string** |  | [optional] 
**Filter** | Pointer to **string** |  | [optional] 
**BlockedIp** | Pointer to **string** |  | [optional] 
**TargetIp** | Pointer to **string** |  | [optional] 
**TargetPort** | Pointer to **float32** |  | [optional] 
**Protocol** | Pointer to **string** |  | [optional] 
**ByteCount** | Pointer to **float32** |  | [optional] 
**XdpAction** | Pointer to **string** |  | [optional] 

## Methods

### NewScrubIpsLogRowSchema

`func NewScrubIpsLogRowSchema() *ScrubIpsLogRowSchema`

NewScrubIpsLogRowSchema instantiates a new ScrubIpsLogRowSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewScrubIpsLogRowSchemaWithDefaults

`func NewScrubIpsLogRowSchemaWithDefaults() *ScrubIpsLogRowSchema`

NewScrubIpsLogRowSchemaWithDefaults instantiates a new ScrubIpsLogRowSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDate

`func (o *ScrubIpsLogRowSchema) GetDate() string`

GetDate returns the Date field if non-nil, zero value otherwise.

### GetDateOk

`func (o *ScrubIpsLogRowSchema) GetDateOk() (*string, bool)`

GetDateOk returns a tuple with the Date field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDate

`func (o *ScrubIpsLogRowSchema) SetDate(v string)`

SetDate sets Date field to given value.

### HasDate

`func (o *ScrubIpsLogRowSchema) HasDate() bool`

HasDate returns a boolean if a field has been set.

### GetFilter

`func (o *ScrubIpsLogRowSchema) GetFilter() string`

GetFilter returns the Filter field if non-nil, zero value otherwise.

### GetFilterOk

`func (o *ScrubIpsLogRowSchema) GetFilterOk() (*string, bool)`

GetFilterOk returns a tuple with the Filter field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilter

`func (o *ScrubIpsLogRowSchema) SetFilter(v string)`

SetFilter sets Filter field to given value.

### HasFilter

`func (o *ScrubIpsLogRowSchema) HasFilter() bool`

HasFilter returns a boolean if a field has been set.

### GetBlockedIp

`func (o *ScrubIpsLogRowSchema) GetBlockedIp() string`

GetBlockedIp returns the BlockedIp field if non-nil, zero value otherwise.

### GetBlockedIpOk

`func (o *ScrubIpsLogRowSchema) GetBlockedIpOk() (*string, bool)`

GetBlockedIpOk returns a tuple with the BlockedIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlockedIp

`func (o *ScrubIpsLogRowSchema) SetBlockedIp(v string)`

SetBlockedIp sets BlockedIp field to given value.

### HasBlockedIp

`func (o *ScrubIpsLogRowSchema) HasBlockedIp() bool`

HasBlockedIp returns a boolean if a field has been set.

### GetTargetIp

`func (o *ScrubIpsLogRowSchema) GetTargetIp() string`

GetTargetIp returns the TargetIp field if non-nil, zero value otherwise.

### GetTargetIpOk

`func (o *ScrubIpsLogRowSchema) GetTargetIpOk() (*string, bool)`

GetTargetIpOk returns a tuple with the TargetIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTargetIp

`func (o *ScrubIpsLogRowSchema) SetTargetIp(v string)`

SetTargetIp sets TargetIp field to given value.

### HasTargetIp

`func (o *ScrubIpsLogRowSchema) HasTargetIp() bool`

HasTargetIp returns a boolean if a field has been set.

### GetTargetPort

`func (o *ScrubIpsLogRowSchema) GetTargetPort() float32`

GetTargetPort returns the TargetPort field if non-nil, zero value otherwise.

### GetTargetPortOk

`func (o *ScrubIpsLogRowSchema) GetTargetPortOk() (*float32, bool)`

GetTargetPortOk returns a tuple with the TargetPort field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTargetPort

`func (o *ScrubIpsLogRowSchema) SetTargetPort(v float32)`

SetTargetPort sets TargetPort field to given value.

### HasTargetPort

`func (o *ScrubIpsLogRowSchema) HasTargetPort() bool`

HasTargetPort returns a boolean if a field has been set.

### GetProtocol

`func (o *ScrubIpsLogRowSchema) GetProtocol() string`

GetProtocol returns the Protocol field if non-nil, zero value otherwise.

### GetProtocolOk

`func (o *ScrubIpsLogRowSchema) GetProtocolOk() (*string, bool)`

GetProtocolOk returns a tuple with the Protocol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProtocol

`func (o *ScrubIpsLogRowSchema) SetProtocol(v string)`

SetProtocol sets Protocol field to given value.

### HasProtocol

`func (o *ScrubIpsLogRowSchema) HasProtocol() bool`

HasProtocol returns a boolean if a field has been set.

### GetByteCount

`func (o *ScrubIpsLogRowSchema) GetByteCount() float32`

GetByteCount returns the ByteCount field if non-nil, zero value otherwise.

### GetByteCountOk

`func (o *ScrubIpsLogRowSchema) GetByteCountOk() (*float32, bool)`

GetByteCountOk returns a tuple with the ByteCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetByteCount

`func (o *ScrubIpsLogRowSchema) SetByteCount(v float32)`

SetByteCount sets ByteCount field to given value.

### HasByteCount

`func (o *ScrubIpsLogRowSchema) HasByteCount() bool`

HasByteCount returns a boolean if a field has been set.

### GetXdpAction

`func (o *ScrubIpsLogRowSchema) GetXdpAction() string`

GetXdpAction returns the XdpAction field if non-nil, zero value otherwise.

### GetXdpActionOk

`func (o *ScrubIpsLogRowSchema) GetXdpActionOk() (*string, bool)`

GetXdpActionOk returns a tuple with the XdpAction field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetXdpAction

`func (o *ScrubIpsLogRowSchema) SetXdpAction(v string)`

SetXdpAction sets XdpAction field to given value.

### HasXdpAction

`func (o *ScrubIpsLogRowSchema) HasXdpAction() bool`

HasXdpAction returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


