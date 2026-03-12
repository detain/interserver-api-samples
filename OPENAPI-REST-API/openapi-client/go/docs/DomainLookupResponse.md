# DomainLookupResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Available** | Pointer to **bool** | Whether the domain is available to register. | [optional] 
**Premium** | Pointer to **bool** | Whether the domain is marked as premium by the registrar. | [optional] 
**Website** | Pointer to **bool** | Indicates if the domain is already used by a website service. | [optional] 
**DomainService** | Pointer to **bool** | Indicates if the domain already exists as a domain service on the account. | [optional] 
**Service** | Pointer to **map[string]interface{}** | Service catalog details for the domain&#39;s TLD. | [optional] 
**WhoisPrivacy** | Pointer to **bool** | Whether Whois privacy is available for the TLD. | [optional] 
**New** | Pointer to **string** | Calculated registration price, when available. | [optional] 
**Renewal** | Pointer to **string** | Calculated renewal price, when available. | [optional] 
**Transfer** | Pointer to **string** | Calculated transfer price, when available. | [optional] 
**Fields** | Pointer to **map[string]interface{}** | Registrar field requirements for this domain/TLD. | [optional] 
**Currencies** | Pointer to **map[string]interface{}** | Pricing information normalized to supported currencies. | [optional] 

## Methods

### NewDomainLookupResponse

`func NewDomainLookupResponse() *DomainLookupResponse`

NewDomainLookupResponse instantiates a new DomainLookupResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainLookupResponseWithDefaults

`func NewDomainLookupResponseWithDefaults() *DomainLookupResponse`

NewDomainLookupResponseWithDefaults instantiates a new DomainLookupResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAvailable

`func (o *DomainLookupResponse) GetAvailable() bool`

GetAvailable returns the Available field if non-nil, zero value otherwise.

### GetAvailableOk

`func (o *DomainLookupResponse) GetAvailableOk() (*bool, bool)`

GetAvailableOk returns a tuple with the Available field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAvailable

`func (o *DomainLookupResponse) SetAvailable(v bool)`

SetAvailable sets Available field to given value.

### HasAvailable

`func (o *DomainLookupResponse) HasAvailable() bool`

HasAvailable returns a boolean if a field has been set.

### GetPremium

`func (o *DomainLookupResponse) GetPremium() bool`

GetPremium returns the Premium field if non-nil, zero value otherwise.

### GetPremiumOk

`func (o *DomainLookupResponse) GetPremiumOk() (*bool, bool)`

GetPremiumOk returns a tuple with the Premium field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPremium

`func (o *DomainLookupResponse) SetPremium(v bool)`

SetPremium sets Premium field to given value.

### HasPremium

`func (o *DomainLookupResponse) HasPremium() bool`

HasPremium returns a boolean if a field has been set.

### GetWebsite

`func (o *DomainLookupResponse) GetWebsite() bool`

GetWebsite returns the Website field if non-nil, zero value otherwise.

### GetWebsiteOk

`func (o *DomainLookupResponse) GetWebsiteOk() (*bool, bool)`

GetWebsiteOk returns a tuple with the Website field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWebsite

`func (o *DomainLookupResponse) SetWebsite(v bool)`

SetWebsite sets Website field to given value.

### HasWebsite

`func (o *DomainLookupResponse) HasWebsite() bool`

HasWebsite returns a boolean if a field has been set.

### GetDomainService

`func (o *DomainLookupResponse) GetDomainService() bool`

GetDomainService returns the DomainService field if non-nil, zero value otherwise.

### GetDomainServiceOk

`func (o *DomainLookupResponse) GetDomainServiceOk() (*bool, bool)`

GetDomainServiceOk returns a tuple with the DomainService field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainService

`func (o *DomainLookupResponse) SetDomainService(v bool)`

SetDomainService sets DomainService field to given value.

### HasDomainService

`func (o *DomainLookupResponse) HasDomainService() bool`

HasDomainService returns a boolean if a field has been set.

### GetService

`func (o *DomainLookupResponse) GetService() map[string]interface{}`

GetService returns the Service field if non-nil, zero value otherwise.

### GetServiceOk

`func (o *DomainLookupResponse) GetServiceOk() (*map[string]interface{}, bool)`

GetServiceOk returns a tuple with the Service field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetService

`func (o *DomainLookupResponse) SetService(v map[string]interface{})`

SetService sets Service field to given value.

### HasService

`func (o *DomainLookupResponse) HasService() bool`

HasService returns a boolean if a field has been set.

### GetWhoisPrivacy

`func (o *DomainLookupResponse) GetWhoisPrivacy() bool`

GetWhoisPrivacy returns the WhoisPrivacy field if non-nil, zero value otherwise.

### GetWhoisPrivacyOk

`func (o *DomainLookupResponse) GetWhoisPrivacyOk() (*bool, bool)`

GetWhoisPrivacyOk returns a tuple with the WhoisPrivacy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWhoisPrivacy

`func (o *DomainLookupResponse) SetWhoisPrivacy(v bool)`

SetWhoisPrivacy sets WhoisPrivacy field to given value.

### HasWhoisPrivacy

`func (o *DomainLookupResponse) HasWhoisPrivacy() bool`

HasWhoisPrivacy returns a boolean if a field has been set.

### GetNew

`func (o *DomainLookupResponse) GetNew() string`

GetNew returns the New field if non-nil, zero value otherwise.

### GetNewOk

`func (o *DomainLookupResponse) GetNewOk() (*string, bool)`

GetNewOk returns a tuple with the New field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNew

`func (o *DomainLookupResponse) SetNew(v string)`

SetNew sets New field to given value.

### HasNew

`func (o *DomainLookupResponse) HasNew() bool`

HasNew returns a boolean if a field has been set.

### GetRenewal

`func (o *DomainLookupResponse) GetRenewal() string`

GetRenewal returns the Renewal field if non-nil, zero value otherwise.

### GetRenewalOk

`func (o *DomainLookupResponse) GetRenewalOk() (*string, bool)`

GetRenewalOk returns a tuple with the Renewal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRenewal

`func (o *DomainLookupResponse) SetRenewal(v string)`

SetRenewal sets Renewal field to given value.

### HasRenewal

`func (o *DomainLookupResponse) HasRenewal() bool`

HasRenewal returns a boolean if a field has been set.

### GetTransfer

`func (o *DomainLookupResponse) GetTransfer() string`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *DomainLookupResponse) GetTransferOk() (*string, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *DomainLookupResponse) SetTransfer(v string)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *DomainLookupResponse) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.

### GetFields

`func (o *DomainLookupResponse) GetFields() map[string]interface{}`

GetFields returns the Fields field if non-nil, zero value otherwise.

### GetFieldsOk

`func (o *DomainLookupResponse) GetFieldsOk() (*map[string]interface{}, bool)`

GetFieldsOk returns a tuple with the Fields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFields

`func (o *DomainLookupResponse) SetFields(v map[string]interface{})`

SetFields sets Fields field to given value.

### HasFields

`func (o *DomainLookupResponse) HasFields() bool`

HasFields returns a boolean if a field has been set.

### GetCurrencies

`func (o *DomainLookupResponse) GetCurrencies() map[string]interface{}`

GetCurrencies returns the Currencies field if non-nil, zero value otherwise.

### GetCurrenciesOk

`func (o *DomainLookupResponse) GetCurrenciesOk() (*map[string]interface{}, bool)`

GetCurrenciesOk returns a tuple with the Currencies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencies

`func (o *DomainLookupResponse) SetCurrencies(v map[string]interface{})`

SetCurrencies sets Currencies field to given value.

### HasCurrencies

`func (o *DomainLookupResponse) HasCurrencies() bool`

HasCurrencies returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


