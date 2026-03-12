# ReverseDnsEntries

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Ips** | Pointer to **map[string]interface{}** | The IPs you have access to and their current reverse dns mapping. | [optional] 

## Methods

### NewReverseDnsEntries

`func NewReverseDnsEntries() *ReverseDnsEntries`

NewReverseDnsEntries instantiates a new ReverseDnsEntries object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewReverseDnsEntriesWithDefaults

`func NewReverseDnsEntriesWithDefaults() *ReverseDnsEntries`

NewReverseDnsEntriesWithDefaults instantiates a new ReverseDnsEntries object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIps

`func (o *ReverseDnsEntries) GetIps() map[string]interface{}`

GetIps returns the Ips field if non-nil, zero value otherwise.

### GetIpsOk

`func (o *ReverseDnsEntries) GetIpsOk() (*map[string]interface{}, bool)`

GetIpsOk returns a tuple with the Ips field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIps

`func (o *ReverseDnsEntries) SetIps(v map[string]interface{})`

SetIps sets Ips field to given value.

### HasIps

`func (o *ReverseDnsEntries) HasIps() bool`

HasIps returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


