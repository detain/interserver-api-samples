# DnsRecord

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | The ID of the DNS Record. | 
**DomainId** | **string** | The ID of the Domain this is a record of. | 
**Name** | **string** |  | 
**Type** | [**DnsRecordType**](DnsRecordType.md) |  | 
**Content** | **string** | The content of the record, such as the IP address or hsotname. | 
**Ttl** | **string** | Time To Live (seconds) | 
**Prio** | **string** | Priority | 
**Disabled** | **string** |  | 
**Ordername** | **string** | Alternate name to use for sorting | 
**Auth** | **string** |  | 

## Methods

### NewDnsRecord

`func NewDnsRecord(id string, domainId string, name string, type_ DnsRecordType, content string, ttl string, prio string, disabled string, ordername string, auth string, ) *DnsRecord`

NewDnsRecord instantiates a new DnsRecord object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDnsRecordWithDefaults

`func NewDnsRecordWithDefaults() *DnsRecord`

NewDnsRecordWithDefaults instantiates a new DnsRecord object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *DnsRecord) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *DnsRecord) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *DnsRecord) SetId(v string)`

SetId sets Id field to given value.


### GetDomainId

`func (o *DnsRecord) GetDomainId() string`

GetDomainId returns the DomainId field if non-nil, zero value otherwise.

### GetDomainIdOk

`func (o *DnsRecord) GetDomainIdOk() (*string, bool)`

GetDomainIdOk returns a tuple with the DomainId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainId

`func (o *DnsRecord) SetDomainId(v string)`

SetDomainId sets DomainId field to given value.


### GetName

`func (o *DnsRecord) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *DnsRecord) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *DnsRecord) SetName(v string)`

SetName sets Name field to given value.


### GetType

`func (o *DnsRecord) GetType() DnsRecordType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *DnsRecord) GetTypeOk() (*DnsRecordType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *DnsRecord) SetType(v DnsRecordType)`

SetType sets Type field to given value.


### GetContent

`func (o *DnsRecord) GetContent() string`

GetContent returns the Content field if non-nil, zero value otherwise.

### GetContentOk

`func (o *DnsRecord) GetContentOk() (*string, bool)`

GetContentOk returns a tuple with the Content field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContent

`func (o *DnsRecord) SetContent(v string)`

SetContent sets Content field to given value.


### GetTtl

`func (o *DnsRecord) GetTtl() string`

GetTtl returns the Ttl field if non-nil, zero value otherwise.

### GetTtlOk

`func (o *DnsRecord) GetTtlOk() (*string, bool)`

GetTtlOk returns a tuple with the Ttl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTtl

`func (o *DnsRecord) SetTtl(v string)`

SetTtl sets Ttl field to given value.


### GetPrio

`func (o *DnsRecord) GetPrio() string`

GetPrio returns the Prio field if non-nil, zero value otherwise.

### GetPrioOk

`func (o *DnsRecord) GetPrioOk() (*string, bool)`

GetPrioOk returns a tuple with the Prio field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrio

`func (o *DnsRecord) SetPrio(v string)`

SetPrio sets Prio field to given value.


### GetDisabled

`func (o *DnsRecord) GetDisabled() string`

GetDisabled returns the Disabled field if non-nil, zero value otherwise.

### GetDisabledOk

`func (o *DnsRecord) GetDisabledOk() (*string, bool)`

GetDisabledOk returns a tuple with the Disabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisabled

`func (o *DnsRecord) SetDisabled(v string)`

SetDisabled sets Disabled field to given value.


### GetOrdername

`func (o *DnsRecord) GetOrdername() string`

GetOrdername returns the Ordername field if non-nil, zero value otherwise.

### GetOrdernameOk

`func (o *DnsRecord) GetOrdernameOk() (*string, bool)`

GetOrdernameOk returns a tuple with the Ordername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrdername

`func (o *DnsRecord) SetOrdername(v string)`

SetOrdername sets Ordername field to given value.


### GetAuth

`func (o *DnsRecord) GetAuth() string`

GetAuth returns the Auth field if non-nil, zero value otherwise.

### GetAuthOk

`func (o *DnsRecord) GetAuthOk() (*string, bool)`

GetAuthOk returns a tuple with the Auth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuth

`func (o *DnsRecord) SetAuth(v string)`

SetAuth sets Auth field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


