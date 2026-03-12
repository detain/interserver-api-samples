# DnsNewRecord

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | **string** | Name part of record | 
**Type** | [**DnsRecordType**](DnsRecordType.md) |  | 
**Content** | **string** | Content of record | 
**Ttl** | Pointer to **int32** | Time-to-live | [optional] [default to 86400]
**Prio** | Pointer to **int32** | Priority | [optional] [default to 0]

## Methods

### NewDnsNewRecord

`func NewDnsNewRecord(name string, type_ DnsRecordType, content string, ) *DnsNewRecord`

NewDnsNewRecord instantiates a new DnsNewRecord object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDnsNewRecordWithDefaults

`func NewDnsNewRecordWithDefaults() *DnsNewRecord`

NewDnsNewRecordWithDefaults instantiates a new DnsNewRecord object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *DnsNewRecord) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *DnsNewRecord) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *DnsNewRecord) SetName(v string)`

SetName sets Name field to given value.


### GetType

`func (o *DnsNewRecord) GetType() DnsRecordType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *DnsNewRecord) GetTypeOk() (*DnsRecordType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *DnsNewRecord) SetType(v DnsRecordType)`

SetType sets Type field to given value.


### GetContent

`func (o *DnsNewRecord) GetContent() string`

GetContent returns the Content field if non-nil, zero value otherwise.

### GetContentOk

`func (o *DnsNewRecord) GetContentOk() (*string, bool)`

GetContentOk returns a tuple with the Content field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContent

`func (o *DnsNewRecord) SetContent(v string)`

SetContent sets Content field to given value.


### GetTtl

`func (o *DnsNewRecord) GetTtl() int32`

GetTtl returns the Ttl field if non-nil, zero value otherwise.

### GetTtlOk

`func (o *DnsNewRecord) GetTtlOk() (*int32, bool)`

GetTtlOk returns a tuple with the Ttl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTtl

`func (o *DnsNewRecord) SetTtl(v int32)`

SetTtl sets Ttl field to given value.

### HasTtl

`func (o *DnsNewRecord) HasTtl() bool`

HasTtl returns a boolean if a field has been set.

### GetPrio

`func (o *DnsNewRecord) GetPrio() int32`

GetPrio returns the Prio field if non-nil, zero value otherwise.

### GetPrioOk

`func (o *DnsNewRecord) GetPrioOk() (*int32, bool)`

GetPrioOk returns a tuple with the Prio field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrio

`func (o *DnsNewRecord) SetPrio(v int32)`

SetPrio sets Prio field to given value.

### HasPrio

`func (o *DnsNewRecord) HasPrio() bool`

HasPrio returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


