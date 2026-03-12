# DomainRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DomainId** | Pointer to **string** | The ID number of the domain in our billing system. | [optional] 
**DomainHostname** | Pointer to **string** | The hostname of the domain. | [optional] 
**DomainExpireDate** | Pointer to **string** | The expiration date of the domain. | [optional] 
**Cost** | Pointer to **string** | The cost of the domain. | [optional] 
**DomainStatus** | Pointer to **string** | The billing / registration status of the domain. | [optional] 

## Methods

### NewDomainRow

`func NewDomainRow() *DomainRow`

NewDomainRow instantiates a new DomainRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainRowWithDefaults

`func NewDomainRowWithDefaults() *DomainRow`

NewDomainRowWithDefaults instantiates a new DomainRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDomainId

`func (o *DomainRow) GetDomainId() string`

GetDomainId returns the DomainId field if non-nil, zero value otherwise.

### GetDomainIdOk

`func (o *DomainRow) GetDomainIdOk() (*string, bool)`

GetDomainIdOk returns a tuple with the DomainId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainId

`func (o *DomainRow) SetDomainId(v string)`

SetDomainId sets DomainId field to given value.

### HasDomainId

`func (o *DomainRow) HasDomainId() bool`

HasDomainId returns a boolean if a field has been set.

### GetDomainHostname

`func (o *DomainRow) GetDomainHostname() string`

GetDomainHostname returns the DomainHostname field if non-nil, zero value otherwise.

### GetDomainHostnameOk

`func (o *DomainRow) GetDomainHostnameOk() (*string, bool)`

GetDomainHostnameOk returns a tuple with the DomainHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainHostname

`func (o *DomainRow) SetDomainHostname(v string)`

SetDomainHostname sets DomainHostname field to given value.

### HasDomainHostname

`func (o *DomainRow) HasDomainHostname() bool`

HasDomainHostname returns a boolean if a field has been set.

### GetDomainExpireDate

`func (o *DomainRow) GetDomainExpireDate() string`

GetDomainExpireDate returns the DomainExpireDate field if non-nil, zero value otherwise.

### GetDomainExpireDateOk

`func (o *DomainRow) GetDomainExpireDateOk() (*string, bool)`

GetDomainExpireDateOk returns a tuple with the DomainExpireDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainExpireDate

`func (o *DomainRow) SetDomainExpireDate(v string)`

SetDomainExpireDate sets DomainExpireDate field to given value.

### HasDomainExpireDate

`func (o *DomainRow) HasDomainExpireDate() bool`

HasDomainExpireDate returns a boolean if a field has been set.

### GetCost

`func (o *DomainRow) GetCost() string`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *DomainRow) GetCostOk() (*string, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *DomainRow) SetCost(v string)`

SetCost sets Cost field to given value.

### HasCost

`func (o *DomainRow) HasCost() bool`

HasCost returns a boolean if a field has been set.

### GetDomainStatus

`func (o *DomainRow) GetDomainStatus() string`

GetDomainStatus returns the DomainStatus field if non-nil, zero value otherwise.

### GetDomainStatusOk

`func (o *DomainRow) GetDomainStatusOk() (*string, bool)`

GetDomainStatusOk returns a tuple with the DomainStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainStatus

`func (o *DomainRow) SetDomainStatus(v string)`

SetDomainStatus sets DomainStatus field to given value.

### HasDomainStatus

`func (o *DomainRow) HasDomainStatus() bool`

HasDomainStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


