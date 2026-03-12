# DomainDnssecRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Algorithm** | Pointer to **[]int32** | List of DNSSEC algorithm IDs for each record. | [optional] 
**DigestType** | Pointer to **[]int32** | List of digest type IDs for each record. | [optional] 
**Digest** | Pointer to **[]string** | List of hex digests for each record. | [optional] 
**KeyTag** | Pointer to **[]int32** | List of key tag values corresponding to each record. | [optional] 

## Methods

### NewDomainDnssecRequest

`func NewDomainDnssecRequest() *DomainDnssecRequest`

NewDomainDnssecRequest instantiates a new DomainDnssecRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainDnssecRequestWithDefaults

`func NewDomainDnssecRequestWithDefaults() *DomainDnssecRequest`

NewDomainDnssecRequestWithDefaults instantiates a new DomainDnssecRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAlgorithm

`func (o *DomainDnssecRequest) GetAlgorithm() []int32`

GetAlgorithm returns the Algorithm field if non-nil, zero value otherwise.

### GetAlgorithmOk

`func (o *DomainDnssecRequest) GetAlgorithmOk() (*[]int32, bool)`

GetAlgorithmOk returns a tuple with the Algorithm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAlgorithm

`func (o *DomainDnssecRequest) SetAlgorithm(v []int32)`

SetAlgorithm sets Algorithm field to given value.

### HasAlgorithm

`func (o *DomainDnssecRequest) HasAlgorithm() bool`

HasAlgorithm returns a boolean if a field has been set.

### GetDigestType

`func (o *DomainDnssecRequest) GetDigestType() []int32`

GetDigestType returns the DigestType field if non-nil, zero value otherwise.

### GetDigestTypeOk

`func (o *DomainDnssecRequest) GetDigestTypeOk() (*[]int32, bool)`

GetDigestTypeOk returns a tuple with the DigestType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDigestType

`func (o *DomainDnssecRequest) SetDigestType(v []int32)`

SetDigestType sets DigestType field to given value.

### HasDigestType

`func (o *DomainDnssecRequest) HasDigestType() bool`

HasDigestType returns a boolean if a field has been set.

### GetDigest

`func (o *DomainDnssecRequest) GetDigest() []string`

GetDigest returns the Digest field if non-nil, zero value otherwise.

### GetDigestOk

`func (o *DomainDnssecRequest) GetDigestOk() (*[]string, bool)`

GetDigestOk returns a tuple with the Digest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDigest

`func (o *DomainDnssecRequest) SetDigest(v []string)`

SetDigest sets Digest field to given value.

### HasDigest

`func (o *DomainDnssecRequest) HasDigest() bool`

HasDigest returns a boolean if a field has been set.

### GetKeyTag

`func (o *DomainDnssecRequest) GetKeyTag() []int32`

GetKeyTag returns the KeyTag field if non-nil, zero value otherwise.

### GetKeyTagOk

`func (o *DomainDnssecRequest) GetKeyTagOk() (*[]int32, bool)`

GetKeyTagOk returns a tuple with the KeyTag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeyTag

`func (o *DomainDnssecRequest) SetKeyTag(v []int32)`

SetKeyTag sets KeyTag field to given value.

### HasKeyTag

`func (o *DomainDnssecRequest) HasKeyTag() bool`

HasKeyTag returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


