# DomainBillingExtra

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Order** | Pointer to [**DomainOrderResponse**](DomainOrderResponse.md) |  | [optional] 
**OrderId** | Pointer to **string** |  | [optional] 
**DomainId** | Pointer to **string** |  | [optional] 
**ProvProcessPending** | Pointer to [**DomainProvProcessPending**](DomainProvProcessPending.md) |  | [optional] 
**Email** | Pointer to **string** |  | [optional] 
**Firstname** | Pointer to **string** |  | [optional] 
**Lastname** | Pointer to **string** |  | [optional] 
**Company** | Pointer to **string** |  | [optional] 
**Address** | Pointer to **string** |  | [optional] 
**Address2** | Pointer to **string** |  | [optional] 
**Address3** | Pointer to **string** |  | [optional] 
**City** | Pointer to **string** |  | [optional] 
**State** | Pointer to **string** |  | [optional] 
**Zip** | Pointer to **string** |  | [optional] 
**Country** | Pointer to **string** |  | [optional] 
**Phone** | Pointer to **string** |  | [optional] 
**Fax** | Pointer to **string** |  | [optional] 

## Methods

### NewDomainBillingExtra

`func NewDomainBillingExtra() *DomainBillingExtra`

NewDomainBillingExtra instantiates a new DomainBillingExtra object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainBillingExtraWithDefaults

`func NewDomainBillingExtraWithDefaults() *DomainBillingExtra`

NewDomainBillingExtraWithDefaults instantiates a new DomainBillingExtra object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOrder

`func (o *DomainBillingExtra) GetOrder() DomainOrderResponse`

GetOrder returns the Order field if non-nil, zero value otherwise.

### GetOrderOk

`func (o *DomainBillingExtra) GetOrderOk() (*DomainOrderResponse, bool)`

GetOrderOk returns a tuple with the Order field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrder

`func (o *DomainBillingExtra) SetOrder(v DomainOrderResponse)`

SetOrder sets Order field to given value.

### HasOrder

`func (o *DomainBillingExtra) HasOrder() bool`

HasOrder returns a boolean if a field has been set.

### GetOrderId

`func (o *DomainBillingExtra) GetOrderId() string`

GetOrderId returns the OrderId field if non-nil, zero value otherwise.

### GetOrderIdOk

`func (o *DomainBillingExtra) GetOrderIdOk() (*string, bool)`

GetOrderIdOk returns a tuple with the OrderId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderId

`func (o *DomainBillingExtra) SetOrderId(v string)`

SetOrderId sets OrderId field to given value.

### HasOrderId

`func (o *DomainBillingExtra) HasOrderId() bool`

HasOrderId returns a boolean if a field has been set.

### GetDomainId

`func (o *DomainBillingExtra) GetDomainId() string`

GetDomainId returns the DomainId field if non-nil, zero value otherwise.

### GetDomainIdOk

`func (o *DomainBillingExtra) GetDomainIdOk() (*string, bool)`

GetDomainIdOk returns a tuple with the DomainId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainId

`func (o *DomainBillingExtra) SetDomainId(v string)`

SetDomainId sets DomainId field to given value.

### HasDomainId

`func (o *DomainBillingExtra) HasDomainId() bool`

HasDomainId returns a boolean if a field has been set.

### GetProvProcessPending

`func (o *DomainBillingExtra) GetProvProcessPending() DomainProvProcessPending`

GetProvProcessPending returns the ProvProcessPending field if non-nil, zero value otherwise.

### GetProvProcessPendingOk

`func (o *DomainBillingExtra) GetProvProcessPendingOk() (*DomainProvProcessPending, bool)`

GetProvProcessPendingOk returns a tuple with the ProvProcessPending field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProvProcessPending

`func (o *DomainBillingExtra) SetProvProcessPending(v DomainProvProcessPending)`

SetProvProcessPending sets ProvProcessPending field to given value.

### HasProvProcessPending

`func (o *DomainBillingExtra) HasProvProcessPending() bool`

HasProvProcessPending returns a boolean if a field has been set.

### GetEmail

`func (o *DomainBillingExtra) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *DomainBillingExtra) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *DomainBillingExtra) SetEmail(v string)`

SetEmail sets Email field to given value.

### HasEmail

`func (o *DomainBillingExtra) HasEmail() bool`

HasEmail returns a boolean if a field has been set.

### GetFirstname

`func (o *DomainBillingExtra) GetFirstname() string`

GetFirstname returns the Firstname field if non-nil, zero value otherwise.

### GetFirstnameOk

`func (o *DomainBillingExtra) GetFirstnameOk() (*string, bool)`

GetFirstnameOk returns a tuple with the Firstname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFirstname

`func (o *DomainBillingExtra) SetFirstname(v string)`

SetFirstname sets Firstname field to given value.

### HasFirstname

`func (o *DomainBillingExtra) HasFirstname() bool`

HasFirstname returns a boolean if a field has been set.

### GetLastname

`func (o *DomainBillingExtra) GetLastname() string`

GetLastname returns the Lastname field if non-nil, zero value otherwise.

### GetLastnameOk

`func (o *DomainBillingExtra) GetLastnameOk() (*string, bool)`

GetLastnameOk returns a tuple with the Lastname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastname

`func (o *DomainBillingExtra) SetLastname(v string)`

SetLastname sets Lastname field to given value.

### HasLastname

`func (o *DomainBillingExtra) HasLastname() bool`

HasLastname returns a boolean if a field has been set.

### GetCompany

`func (o *DomainBillingExtra) GetCompany() string`

GetCompany returns the Company field if non-nil, zero value otherwise.

### GetCompanyOk

`func (o *DomainBillingExtra) GetCompanyOk() (*string, bool)`

GetCompanyOk returns a tuple with the Company field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCompany

`func (o *DomainBillingExtra) SetCompany(v string)`

SetCompany sets Company field to given value.

### HasCompany

`func (o *DomainBillingExtra) HasCompany() bool`

HasCompany returns a boolean if a field has been set.

### GetAddress

`func (o *DomainBillingExtra) GetAddress() string`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *DomainBillingExtra) GetAddressOk() (*string, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *DomainBillingExtra) SetAddress(v string)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *DomainBillingExtra) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetAddress2

`func (o *DomainBillingExtra) GetAddress2() string`

GetAddress2 returns the Address2 field if non-nil, zero value otherwise.

### GetAddress2Ok

`func (o *DomainBillingExtra) GetAddress2Ok() (*string, bool)`

GetAddress2Ok returns a tuple with the Address2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress2

`func (o *DomainBillingExtra) SetAddress2(v string)`

SetAddress2 sets Address2 field to given value.

### HasAddress2

`func (o *DomainBillingExtra) HasAddress2() bool`

HasAddress2 returns a boolean if a field has been set.

### GetAddress3

`func (o *DomainBillingExtra) GetAddress3() string`

GetAddress3 returns the Address3 field if non-nil, zero value otherwise.

### GetAddress3Ok

`func (o *DomainBillingExtra) GetAddress3Ok() (*string, bool)`

GetAddress3Ok returns a tuple with the Address3 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress3

`func (o *DomainBillingExtra) SetAddress3(v string)`

SetAddress3 sets Address3 field to given value.

### HasAddress3

`func (o *DomainBillingExtra) HasAddress3() bool`

HasAddress3 returns a boolean if a field has been set.

### GetCity

`func (o *DomainBillingExtra) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *DomainBillingExtra) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *DomainBillingExtra) SetCity(v string)`

SetCity sets City field to given value.

### HasCity

`func (o *DomainBillingExtra) HasCity() bool`

HasCity returns a boolean if a field has been set.

### GetState

`func (o *DomainBillingExtra) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *DomainBillingExtra) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *DomainBillingExtra) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *DomainBillingExtra) HasState() bool`

HasState returns a boolean if a field has been set.

### GetZip

`func (o *DomainBillingExtra) GetZip() string`

GetZip returns the Zip field if non-nil, zero value otherwise.

### GetZipOk

`func (o *DomainBillingExtra) GetZipOk() (*string, bool)`

GetZipOk returns a tuple with the Zip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZip

`func (o *DomainBillingExtra) SetZip(v string)`

SetZip sets Zip field to given value.

### HasZip

`func (o *DomainBillingExtra) HasZip() bool`

HasZip returns a boolean if a field has been set.

### GetCountry

`func (o *DomainBillingExtra) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *DomainBillingExtra) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *DomainBillingExtra) SetCountry(v string)`

SetCountry sets Country field to given value.

### HasCountry

`func (o *DomainBillingExtra) HasCountry() bool`

HasCountry returns a boolean if a field has been set.

### GetPhone

`func (o *DomainBillingExtra) GetPhone() string`

GetPhone returns the Phone field if non-nil, zero value otherwise.

### GetPhoneOk

`func (o *DomainBillingExtra) GetPhoneOk() (*string, bool)`

GetPhoneOk returns a tuple with the Phone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhone

`func (o *DomainBillingExtra) SetPhone(v string)`

SetPhone sets Phone field to given value.

### HasPhone

`func (o *DomainBillingExtra) HasPhone() bool`

HasPhone returns a boolean if a field has been set.

### GetFax

`func (o *DomainBillingExtra) GetFax() string`

GetFax returns the Fax field if non-nil, zero value otherwise.

### GetFaxOk

`func (o *DomainBillingExtra) GetFaxOk() (*string, bool)`

GetFaxOk returns a tuple with the Fax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFax

`func (o *DomainBillingExtra) SetFax(v string)`

SetFax sets Fax field to given value.

### HasFax

`func (o *DomainBillingExtra) HasFax() bool`

HasFax returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


