# DnsUpdateRecord

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**Type** | Pointer to [**DnsRecordType**](DnsRecordType.md) |  | [optional] 
**Content** | Pointer to **string** |  | [optional] 
**Ttl** | Pointer to **string** |  | [optional] 
**Prio** | Pointer to **string** |  | [optional] 
**Disabled** | Pointer to **string** |  | [optional] 
**Ordername** | Pointer to **string** |  | [optional] 
**Auth** | Pointer to **string** |  | [optional] 

## Methods

### NewDnsUpdateRecord

`func NewDnsUpdateRecord() *DnsUpdateRecord`

NewDnsUpdateRecord instantiates a new DnsUpdateRecord object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDnsUpdateRecordWithDefaults

`func NewDnsUpdateRecordWithDefaults() *DnsUpdateRecord`

NewDnsUpdateRecordWithDefaults instantiates a new DnsUpdateRecord object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *DnsUpdateRecord) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *DnsUpdateRecord) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *DnsUpdateRecord) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *DnsUpdateRecord) HasName() bool`

HasName returns a boolean if a field has been set.

### GetType

`func (o *DnsUpdateRecord) GetType() DnsRecordType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *DnsUpdateRecord) GetTypeOk() (*DnsRecordType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *DnsUpdateRecord) SetType(v DnsRecordType)`

SetType sets Type field to given value.

### HasType

`func (o *DnsUpdateRecord) HasType() bool`

HasType returns a boolean if a field has been set.

### GetContent

`func (o *DnsUpdateRecord) GetContent() string`

GetContent returns the Content field if non-nil, zero value otherwise.

### GetContentOk

`func (o *DnsUpdateRecord) GetContentOk() (*string, bool)`

GetContentOk returns a tuple with the Content field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContent

`func (o *DnsUpdateRecord) SetContent(v string)`

SetContent sets Content field to given value.

### HasContent

`func (o *DnsUpdateRecord) HasContent() bool`

HasContent returns a boolean if a field has been set.

### GetTtl

`func (o *DnsUpdateRecord) GetTtl() string`

GetTtl returns the Ttl field if non-nil, zero value otherwise.

### GetTtlOk

`func (o *DnsUpdateRecord) GetTtlOk() (*string, bool)`

GetTtlOk returns a tuple with the Ttl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTtl

`func (o *DnsUpdateRecord) SetTtl(v string)`

SetTtl sets Ttl field to given value.

### HasTtl

`func (o *DnsUpdateRecord) HasTtl() bool`

HasTtl returns a boolean if a field has been set.

### GetPrio

`func (o *DnsUpdateRecord) GetPrio() string`

GetPrio returns the Prio field if non-nil, zero value otherwise.

### GetPrioOk

`func (o *DnsUpdateRecord) GetPrioOk() (*string, bool)`

GetPrioOk returns a tuple with the Prio field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrio

`func (o *DnsUpdateRecord) SetPrio(v string)`

SetPrio sets Prio field to given value.

### HasPrio

`func (o *DnsUpdateRecord) HasPrio() bool`

HasPrio returns a boolean if a field has been set.

### GetDisabled

`func (o *DnsUpdateRecord) GetDisabled() string`

GetDisabled returns the Disabled field if non-nil, zero value otherwise.

### GetDisabledOk

`func (o *DnsUpdateRecord) GetDisabledOk() (*string, bool)`

GetDisabledOk returns a tuple with the Disabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisabled

`func (o *DnsUpdateRecord) SetDisabled(v string)`

SetDisabled sets Disabled field to given value.

### HasDisabled

`func (o *DnsUpdateRecord) HasDisabled() bool`

HasDisabled returns a boolean if a field has been set.

### GetOrdername

`func (o *DnsUpdateRecord) GetOrdername() string`

GetOrdername returns the Ordername field if non-nil, zero value otherwise.

### GetOrdernameOk

`func (o *DnsUpdateRecord) GetOrdernameOk() (*string, bool)`

GetOrdernameOk returns a tuple with the Ordername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrdername

`func (o *DnsUpdateRecord) SetOrdername(v string)`

SetOrdername sets Ordername field to given value.

### HasOrdername

`func (o *DnsUpdateRecord) HasOrdername() bool`

HasOrdername returns a boolean if a field has been set.

### GetAuth

`func (o *DnsUpdateRecord) GetAuth() string`

GetAuth returns the Auth field if non-nil, zero value otherwise.

### GetAuthOk

`func (o *DnsUpdateRecord) GetAuthOk() (*string, bool)`

GetAuthOk returns a tuple with the Auth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuth

`func (o *DnsUpdateRecord) SetAuth(v string)`

SetAuth sets Auth field to given value.

### HasAuth

`func (o *DnsUpdateRecord) HasAuth() bool`

HasAuth returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


