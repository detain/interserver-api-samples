# HomeTicketStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Open** | Pointer to **int32** | Count of open tickets. | [optional] 
**OnHold** | Pointer to **int32** | Count of tickets on hold. | [optional] 

## Methods

### NewHomeTicketStatus

`func NewHomeTicketStatus() *HomeTicketStatus`

NewHomeTicketStatus instantiates a new HomeTicketStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewHomeTicketStatusWithDefaults

`func NewHomeTicketStatusWithDefaults() *HomeTicketStatus`

NewHomeTicketStatusWithDefaults instantiates a new HomeTicketStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOpen

`func (o *HomeTicketStatus) GetOpen() int32`

GetOpen returns the Open field if non-nil, zero value otherwise.

### GetOpenOk

`func (o *HomeTicketStatus) GetOpenOk() (*int32, bool)`

GetOpenOk returns a tuple with the Open field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOpen

`func (o *HomeTicketStatus) SetOpen(v int32)`

SetOpen sets Open field to given value.

### HasOpen

`func (o *HomeTicketStatus) HasOpen() bool`

HasOpen returns a boolean if a field has been set.

### GetOnHold

`func (o *HomeTicketStatus) GetOnHold() int32`

GetOnHold returns the OnHold field if non-nil, zero value otherwise.

### GetOnHoldOk

`func (o *HomeTicketStatus) GetOnHoldOk() (*int32, bool)`

GetOnHoldOk returns a tuple with the OnHold field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOnHold

`func (o *HomeTicketStatus) SetOnHold(v int32)`

SetOnHold sets OnHold field to given value.

### HasOnHold

`func (o *HomeTicketStatus) HasOnHold() bool`

HasOnHold returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


