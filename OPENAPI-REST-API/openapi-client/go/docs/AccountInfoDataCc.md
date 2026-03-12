# AccountInfoDataCc

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Cc** | Pointer to **string** |  | [optional] 
**CcExp** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Address** | Pointer to **string** |  | [optional] 
**City** | Pointer to **string** |  | [optional] 
**State** | Pointer to **string** |  | [optional] 
**Zip** | Pointer to **string** |  | [optional] 
**Country** | Pointer to **string** |  | [optional] 
**MaxmindRiskscore** | Pointer to **string** |  | [optional] 
**Maxmind** | Pointer to [**AccountInfoMaxMindResponse**](AccountInfoMaxMindResponse.md) |  | [optional] 
**Verified** | Pointer to **bool** |  | [optional] 

## Methods

### NewAccountInfoDataCc

`func NewAccountInfoDataCc() *AccountInfoDataCc`

NewAccountInfoDataCc instantiates a new AccountInfoDataCc object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAccountInfoDataCcWithDefaults

`func NewAccountInfoDataCcWithDefaults() *AccountInfoDataCc`

NewAccountInfoDataCcWithDefaults instantiates a new AccountInfoDataCc object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCc

`func (o *AccountInfoDataCc) GetCc() string`

GetCc returns the Cc field if non-nil, zero value otherwise.

### GetCcOk

`func (o *AccountInfoDataCc) GetCcOk() (*string, bool)`

GetCcOk returns a tuple with the Cc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCc

`func (o *AccountInfoDataCc) SetCc(v string)`

SetCc sets Cc field to given value.

### HasCc

`func (o *AccountInfoDataCc) HasCc() bool`

HasCc returns a boolean if a field has been set.

### GetCcExp

`func (o *AccountInfoDataCc) GetCcExp() string`

GetCcExp returns the CcExp field if non-nil, zero value otherwise.

### GetCcExpOk

`func (o *AccountInfoDataCc) GetCcExpOk() (*string, bool)`

GetCcExpOk returns a tuple with the CcExp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcExp

`func (o *AccountInfoDataCc) SetCcExp(v string)`

SetCcExp sets CcExp field to given value.

### HasCcExp

`func (o *AccountInfoDataCc) HasCcExp() bool`

HasCcExp returns a boolean if a field has been set.

### GetName

`func (o *AccountInfoDataCc) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *AccountInfoDataCc) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *AccountInfoDataCc) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *AccountInfoDataCc) HasName() bool`

HasName returns a boolean if a field has been set.

### GetAddress

`func (o *AccountInfoDataCc) GetAddress() string`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *AccountInfoDataCc) GetAddressOk() (*string, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *AccountInfoDataCc) SetAddress(v string)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *AccountInfoDataCc) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetCity

`func (o *AccountInfoDataCc) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *AccountInfoDataCc) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *AccountInfoDataCc) SetCity(v string)`

SetCity sets City field to given value.

### HasCity

`func (o *AccountInfoDataCc) HasCity() bool`

HasCity returns a boolean if a field has been set.

### GetState

`func (o *AccountInfoDataCc) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *AccountInfoDataCc) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *AccountInfoDataCc) SetState(v string)`

SetState sets State field to given value.

### HasState

`func (o *AccountInfoDataCc) HasState() bool`

HasState returns a boolean if a field has been set.

### GetZip

`func (o *AccountInfoDataCc) GetZip() string`

GetZip returns the Zip field if non-nil, zero value otherwise.

### GetZipOk

`func (o *AccountInfoDataCc) GetZipOk() (*string, bool)`

GetZipOk returns a tuple with the Zip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZip

`func (o *AccountInfoDataCc) SetZip(v string)`

SetZip sets Zip field to given value.

### HasZip

`func (o *AccountInfoDataCc) HasZip() bool`

HasZip returns a boolean if a field has been set.

### GetCountry

`func (o *AccountInfoDataCc) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *AccountInfoDataCc) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *AccountInfoDataCc) SetCountry(v string)`

SetCountry sets Country field to given value.

### HasCountry

`func (o *AccountInfoDataCc) HasCountry() bool`

HasCountry returns a boolean if a field has been set.

### GetMaxmindRiskscore

`func (o *AccountInfoDataCc) GetMaxmindRiskscore() string`

GetMaxmindRiskscore returns the MaxmindRiskscore field if non-nil, zero value otherwise.

### GetMaxmindRiskscoreOk

`func (o *AccountInfoDataCc) GetMaxmindRiskscoreOk() (*string, bool)`

GetMaxmindRiskscoreOk returns a tuple with the MaxmindRiskscore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxmindRiskscore

`func (o *AccountInfoDataCc) SetMaxmindRiskscore(v string)`

SetMaxmindRiskscore sets MaxmindRiskscore field to given value.

### HasMaxmindRiskscore

`func (o *AccountInfoDataCc) HasMaxmindRiskscore() bool`

HasMaxmindRiskscore returns a boolean if a field has been set.

### GetMaxmind

`func (o *AccountInfoDataCc) GetMaxmind() AccountInfoMaxMindResponse`

GetMaxmind returns the Maxmind field if non-nil, zero value otherwise.

### GetMaxmindOk

`func (o *AccountInfoDataCc) GetMaxmindOk() (*AccountInfoMaxMindResponse, bool)`

GetMaxmindOk returns a tuple with the Maxmind field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxmind

`func (o *AccountInfoDataCc) SetMaxmind(v AccountInfoMaxMindResponse)`

SetMaxmind sets Maxmind field to given value.

### HasMaxmind

`func (o *AccountInfoDataCc) HasMaxmind() bool`

HasMaxmind returns a boolean if a field has been set.

### GetVerified

`func (o *AccountInfoDataCc) GetVerified() bool`

GetVerified returns the Verified field if non-nil, zero value otherwise.

### GetVerifiedOk

`func (o *AccountInfoDataCc) GetVerifiedOk() (*bool, bool)`

GetVerifiedOk returns a tuple with the Verified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVerified

`func (o *AccountInfoDataCc) SetVerified(v bool)`

SetVerified sets Verified field to given value.

### HasVerified

`func (o *AccountInfoDataCc) HasVerified() bool`

HasVerified returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


