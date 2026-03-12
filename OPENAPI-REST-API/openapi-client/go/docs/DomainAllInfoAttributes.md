# DomainAllInfoAttributes

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ContactSet** | Pointer to [**DomainAllInfoAttributesContactSet**](DomainAllInfoAttributesContactSet.md) |  | [optional] 
**RegistryCreatedate** | Pointer to **string** |  | [optional] 
**RegistryExpiredate** | Pointer to **string** |  | [optional] 
**TldData** | Pointer to **string** |  | [optional] 
**LetExpire** | Pointer to **string** |  | [optional] 
**AutoRenew** | Pointer to **string** |  | [optional] 
**SponsoringRsp** | Pointer to **string** |  | [optional] 
**GdprConsentStatus** | Pointer to **string** |  | [optional] 
**NameserverList** | Pointer to [**[]DomainNameServer**](DomainNameServer.md) |  | [optional] 
**RegistryUpdatedate** | Pointer to **string** |  | [optional] 
**AffiliateId** | Pointer to **string** |  | [optional] 
**Expiredate** | Pointer to **string** |  | [optional] 

## Methods

### NewDomainAllInfoAttributes

`func NewDomainAllInfoAttributes() *DomainAllInfoAttributes`

NewDomainAllInfoAttributes instantiates a new DomainAllInfoAttributes object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainAllInfoAttributesWithDefaults

`func NewDomainAllInfoAttributesWithDefaults() *DomainAllInfoAttributes`

NewDomainAllInfoAttributesWithDefaults instantiates a new DomainAllInfoAttributes object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetContactSet

`func (o *DomainAllInfoAttributes) GetContactSet() DomainAllInfoAttributesContactSet`

GetContactSet returns the ContactSet field if non-nil, zero value otherwise.

### GetContactSetOk

`func (o *DomainAllInfoAttributes) GetContactSetOk() (*DomainAllInfoAttributesContactSet, bool)`

GetContactSetOk returns a tuple with the ContactSet field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContactSet

`func (o *DomainAllInfoAttributes) SetContactSet(v DomainAllInfoAttributesContactSet)`

SetContactSet sets ContactSet field to given value.

### HasContactSet

`func (o *DomainAllInfoAttributes) HasContactSet() bool`

HasContactSet returns a boolean if a field has been set.

### GetRegistryCreatedate

`func (o *DomainAllInfoAttributes) GetRegistryCreatedate() string`

GetRegistryCreatedate returns the RegistryCreatedate field if non-nil, zero value otherwise.

### GetRegistryCreatedateOk

`func (o *DomainAllInfoAttributes) GetRegistryCreatedateOk() (*string, bool)`

GetRegistryCreatedateOk returns a tuple with the RegistryCreatedate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegistryCreatedate

`func (o *DomainAllInfoAttributes) SetRegistryCreatedate(v string)`

SetRegistryCreatedate sets RegistryCreatedate field to given value.

### HasRegistryCreatedate

`func (o *DomainAllInfoAttributes) HasRegistryCreatedate() bool`

HasRegistryCreatedate returns a boolean if a field has been set.

### GetRegistryExpiredate

`func (o *DomainAllInfoAttributes) GetRegistryExpiredate() string`

GetRegistryExpiredate returns the RegistryExpiredate field if non-nil, zero value otherwise.

### GetRegistryExpiredateOk

`func (o *DomainAllInfoAttributes) GetRegistryExpiredateOk() (*string, bool)`

GetRegistryExpiredateOk returns a tuple with the RegistryExpiredate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegistryExpiredate

`func (o *DomainAllInfoAttributes) SetRegistryExpiredate(v string)`

SetRegistryExpiredate sets RegistryExpiredate field to given value.

### HasRegistryExpiredate

`func (o *DomainAllInfoAttributes) HasRegistryExpiredate() bool`

HasRegistryExpiredate returns a boolean if a field has been set.

### GetTldData

`func (o *DomainAllInfoAttributes) GetTldData() string`

GetTldData returns the TldData field if non-nil, zero value otherwise.

### GetTldDataOk

`func (o *DomainAllInfoAttributes) GetTldDataOk() (*string, bool)`

GetTldDataOk returns a tuple with the TldData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTldData

`func (o *DomainAllInfoAttributes) SetTldData(v string)`

SetTldData sets TldData field to given value.

### HasTldData

`func (o *DomainAllInfoAttributes) HasTldData() bool`

HasTldData returns a boolean if a field has been set.

### GetLetExpire

`func (o *DomainAllInfoAttributes) GetLetExpire() string`

GetLetExpire returns the LetExpire field if non-nil, zero value otherwise.

### GetLetExpireOk

`func (o *DomainAllInfoAttributes) GetLetExpireOk() (*string, bool)`

GetLetExpireOk returns a tuple with the LetExpire field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLetExpire

`func (o *DomainAllInfoAttributes) SetLetExpire(v string)`

SetLetExpire sets LetExpire field to given value.

### HasLetExpire

`func (o *DomainAllInfoAttributes) HasLetExpire() bool`

HasLetExpire returns a boolean if a field has been set.

### GetAutoRenew

`func (o *DomainAllInfoAttributes) GetAutoRenew() string`

GetAutoRenew returns the AutoRenew field if non-nil, zero value otherwise.

### GetAutoRenewOk

`func (o *DomainAllInfoAttributes) GetAutoRenewOk() (*string, bool)`

GetAutoRenewOk returns a tuple with the AutoRenew field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAutoRenew

`func (o *DomainAllInfoAttributes) SetAutoRenew(v string)`

SetAutoRenew sets AutoRenew field to given value.

### HasAutoRenew

`func (o *DomainAllInfoAttributes) HasAutoRenew() bool`

HasAutoRenew returns a boolean if a field has been set.

### GetSponsoringRsp

`func (o *DomainAllInfoAttributes) GetSponsoringRsp() string`

GetSponsoringRsp returns the SponsoringRsp field if non-nil, zero value otherwise.

### GetSponsoringRspOk

`func (o *DomainAllInfoAttributes) GetSponsoringRspOk() (*string, bool)`

GetSponsoringRspOk returns a tuple with the SponsoringRsp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSponsoringRsp

`func (o *DomainAllInfoAttributes) SetSponsoringRsp(v string)`

SetSponsoringRsp sets SponsoringRsp field to given value.

### HasSponsoringRsp

`func (o *DomainAllInfoAttributes) HasSponsoringRsp() bool`

HasSponsoringRsp returns a boolean if a field has been set.

### GetGdprConsentStatus

`func (o *DomainAllInfoAttributes) GetGdprConsentStatus() string`

GetGdprConsentStatus returns the GdprConsentStatus field if non-nil, zero value otherwise.

### GetGdprConsentStatusOk

`func (o *DomainAllInfoAttributes) GetGdprConsentStatusOk() (*string, bool)`

GetGdprConsentStatusOk returns a tuple with the GdprConsentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGdprConsentStatus

`func (o *DomainAllInfoAttributes) SetGdprConsentStatus(v string)`

SetGdprConsentStatus sets GdprConsentStatus field to given value.

### HasGdprConsentStatus

`func (o *DomainAllInfoAttributes) HasGdprConsentStatus() bool`

HasGdprConsentStatus returns a boolean if a field has been set.

### GetNameserverList

`func (o *DomainAllInfoAttributes) GetNameserverList() []DomainNameServer`

GetNameserverList returns the NameserverList field if non-nil, zero value otherwise.

### GetNameserverListOk

`func (o *DomainAllInfoAttributes) GetNameserverListOk() (*[]DomainNameServer, bool)`

GetNameserverListOk returns a tuple with the NameserverList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNameserverList

`func (o *DomainAllInfoAttributes) SetNameserverList(v []DomainNameServer)`

SetNameserverList sets NameserverList field to given value.

### HasNameserverList

`func (o *DomainAllInfoAttributes) HasNameserverList() bool`

HasNameserverList returns a boolean if a field has been set.

### GetRegistryUpdatedate

`func (o *DomainAllInfoAttributes) GetRegistryUpdatedate() string`

GetRegistryUpdatedate returns the RegistryUpdatedate field if non-nil, zero value otherwise.

### GetRegistryUpdatedateOk

`func (o *DomainAllInfoAttributes) GetRegistryUpdatedateOk() (*string, bool)`

GetRegistryUpdatedateOk returns a tuple with the RegistryUpdatedate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegistryUpdatedate

`func (o *DomainAllInfoAttributes) SetRegistryUpdatedate(v string)`

SetRegistryUpdatedate sets RegistryUpdatedate field to given value.

### HasRegistryUpdatedate

`func (o *DomainAllInfoAttributes) HasRegistryUpdatedate() bool`

HasRegistryUpdatedate returns a boolean if a field has been set.

### GetAffiliateId

`func (o *DomainAllInfoAttributes) GetAffiliateId() string`

GetAffiliateId returns the AffiliateId field if non-nil, zero value otherwise.

### GetAffiliateIdOk

`func (o *DomainAllInfoAttributes) GetAffiliateIdOk() (*string, bool)`

GetAffiliateIdOk returns a tuple with the AffiliateId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAffiliateId

`func (o *DomainAllInfoAttributes) SetAffiliateId(v string)`

SetAffiliateId sets AffiliateId field to given value.

### HasAffiliateId

`func (o *DomainAllInfoAttributes) HasAffiliateId() bool`

HasAffiliateId returns a boolean if a field has been set.

### GetExpiredate

`func (o *DomainAllInfoAttributes) GetExpiredate() string`

GetExpiredate returns the Expiredate field if non-nil, zero value otherwise.

### GetExpiredateOk

`func (o *DomainAllInfoAttributes) GetExpiredateOk() (*string, bool)`

GetExpiredateOk returns a tuple with the Expiredate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpiredate

`func (o *DomainAllInfoAttributes) SetExpiredate(v string)`

SetExpiredate sets Expiredate field to given value.

### HasExpiredate

`func (o *DomainAllInfoAttributes) HasExpiredate() bool`

HasExpiredate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


