# AccountInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Custid** | Pointer to **string** |  | [optional] 
**Ima** | Pointer to **string** |  | [optional] 
**Data** | Pointer to [**AccountInfoData**](AccountInfoData.md) |  | [optional] 
**Ip** | Pointer to **string** |  | [optional] 
**Oauthproviders** | Pointer to [**AccountInfoOauthproviders**](AccountInfoOauthproviders.md) |  | [optional] 
**Oauthconfig** | Pointer to [**AccountInfoOauthConfig**](AccountInfoOauthConfig.md) |  | [optional] 
**Oauthadapters** | Pointer to **[]string** |  | [optional] 
**Limits** | Pointer to [**AccountInfoLimits**](AccountInfoLimits.md) |  | [optional] 
**Language** | Pointer to **string** |  | [optional] 
**CountryCurrencies** | Pointer to [**AccountInfoCountryCurrencies**](AccountInfoCountryCurrencies.md) |  | [optional] 
**EnableLocales** | Pointer to **bool** |  | [optional] 
**EnableCurrencies** | Pointer to **bool** |  | [optional] 
**Gravatar** | Pointer to **string** |  | [optional] 

## Methods

### NewAccountInfo

`func NewAccountInfo() *AccountInfo`

NewAccountInfo instantiates a new AccountInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAccountInfoWithDefaults

`func NewAccountInfoWithDefaults() *AccountInfo`

NewAccountInfoWithDefaults instantiates a new AccountInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCustid

`func (o *AccountInfo) GetCustid() string`

GetCustid returns the Custid field if non-nil, zero value otherwise.

### GetCustidOk

`func (o *AccountInfo) GetCustidOk() (*string, bool)`

GetCustidOk returns a tuple with the Custid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustid

`func (o *AccountInfo) SetCustid(v string)`

SetCustid sets Custid field to given value.

### HasCustid

`func (o *AccountInfo) HasCustid() bool`

HasCustid returns a boolean if a field has been set.

### GetIma

`func (o *AccountInfo) GetIma() string`

GetIma returns the Ima field if non-nil, zero value otherwise.

### GetImaOk

`func (o *AccountInfo) GetImaOk() (*string, bool)`

GetImaOk returns a tuple with the Ima field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIma

`func (o *AccountInfo) SetIma(v string)`

SetIma sets Ima field to given value.

### HasIma

`func (o *AccountInfo) HasIma() bool`

HasIma returns a boolean if a field has been set.

### GetData

`func (o *AccountInfo) GetData() AccountInfoData`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *AccountInfo) GetDataOk() (*AccountInfoData, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *AccountInfo) SetData(v AccountInfoData)`

SetData sets Data field to given value.

### HasData

`func (o *AccountInfo) HasData() bool`

HasData returns a boolean if a field has been set.

### GetIp

`func (o *AccountInfo) GetIp() string`

GetIp returns the Ip field if non-nil, zero value otherwise.

### GetIpOk

`func (o *AccountInfo) GetIpOk() (*string, bool)`

GetIpOk returns a tuple with the Ip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIp

`func (o *AccountInfo) SetIp(v string)`

SetIp sets Ip field to given value.

### HasIp

`func (o *AccountInfo) HasIp() bool`

HasIp returns a boolean if a field has been set.

### GetOauthproviders

`func (o *AccountInfo) GetOauthproviders() AccountInfoOauthproviders`

GetOauthproviders returns the Oauthproviders field if non-nil, zero value otherwise.

### GetOauthprovidersOk

`func (o *AccountInfo) GetOauthprovidersOk() (*AccountInfoOauthproviders, bool)`

GetOauthprovidersOk returns a tuple with the Oauthproviders field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOauthproviders

`func (o *AccountInfo) SetOauthproviders(v AccountInfoOauthproviders)`

SetOauthproviders sets Oauthproviders field to given value.

### HasOauthproviders

`func (o *AccountInfo) HasOauthproviders() bool`

HasOauthproviders returns a boolean if a field has been set.

### GetOauthconfig

`func (o *AccountInfo) GetOauthconfig() AccountInfoOauthConfig`

GetOauthconfig returns the Oauthconfig field if non-nil, zero value otherwise.

### GetOauthconfigOk

`func (o *AccountInfo) GetOauthconfigOk() (*AccountInfoOauthConfig, bool)`

GetOauthconfigOk returns a tuple with the Oauthconfig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOauthconfig

`func (o *AccountInfo) SetOauthconfig(v AccountInfoOauthConfig)`

SetOauthconfig sets Oauthconfig field to given value.

### HasOauthconfig

`func (o *AccountInfo) HasOauthconfig() bool`

HasOauthconfig returns a boolean if a field has been set.

### GetOauthadapters

`func (o *AccountInfo) GetOauthadapters() []string`

GetOauthadapters returns the Oauthadapters field if non-nil, zero value otherwise.

### GetOauthadaptersOk

`func (o *AccountInfo) GetOauthadaptersOk() (*[]string, bool)`

GetOauthadaptersOk returns a tuple with the Oauthadapters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOauthadapters

`func (o *AccountInfo) SetOauthadapters(v []string)`

SetOauthadapters sets Oauthadapters field to given value.

### HasOauthadapters

`func (o *AccountInfo) HasOauthadapters() bool`

HasOauthadapters returns a boolean if a field has been set.

### GetLimits

`func (o *AccountInfo) GetLimits() AccountInfoLimits`

GetLimits returns the Limits field if non-nil, zero value otherwise.

### GetLimitsOk

`func (o *AccountInfo) GetLimitsOk() (*AccountInfoLimits, bool)`

GetLimitsOk returns a tuple with the Limits field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLimits

`func (o *AccountInfo) SetLimits(v AccountInfoLimits)`

SetLimits sets Limits field to given value.

### HasLimits

`func (o *AccountInfo) HasLimits() bool`

HasLimits returns a boolean if a field has been set.

### GetLanguage

`func (o *AccountInfo) GetLanguage() string`

GetLanguage returns the Language field if non-nil, zero value otherwise.

### GetLanguageOk

`func (o *AccountInfo) GetLanguageOk() (*string, bool)`

GetLanguageOk returns a tuple with the Language field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLanguage

`func (o *AccountInfo) SetLanguage(v string)`

SetLanguage sets Language field to given value.

### HasLanguage

`func (o *AccountInfo) HasLanguage() bool`

HasLanguage returns a boolean if a field has been set.

### GetCountryCurrencies

`func (o *AccountInfo) GetCountryCurrencies() AccountInfoCountryCurrencies`

GetCountryCurrencies returns the CountryCurrencies field if non-nil, zero value otherwise.

### GetCountryCurrenciesOk

`func (o *AccountInfo) GetCountryCurrenciesOk() (*AccountInfoCountryCurrencies, bool)`

GetCountryCurrenciesOk returns a tuple with the CountryCurrencies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountryCurrencies

`func (o *AccountInfo) SetCountryCurrencies(v AccountInfoCountryCurrencies)`

SetCountryCurrencies sets CountryCurrencies field to given value.

### HasCountryCurrencies

`func (o *AccountInfo) HasCountryCurrencies() bool`

HasCountryCurrencies returns a boolean if a field has been set.

### GetEnableLocales

`func (o *AccountInfo) GetEnableLocales() bool`

GetEnableLocales returns the EnableLocales field if non-nil, zero value otherwise.

### GetEnableLocalesOk

`func (o *AccountInfo) GetEnableLocalesOk() (*bool, bool)`

GetEnableLocalesOk returns a tuple with the EnableLocales field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnableLocales

`func (o *AccountInfo) SetEnableLocales(v bool)`

SetEnableLocales sets EnableLocales field to given value.

### HasEnableLocales

`func (o *AccountInfo) HasEnableLocales() bool`

HasEnableLocales returns a boolean if a field has been set.

### GetEnableCurrencies

`func (o *AccountInfo) GetEnableCurrencies() bool`

GetEnableCurrencies returns the EnableCurrencies field if non-nil, zero value otherwise.

### GetEnableCurrenciesOk

`func (o *AccountInfo) GetEnableCurrenciesOk() (*bool, bool)`

GetEnableCurrenciesOk returns a tuple with the EnableCurrencies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnableCurrencies

`func (o *AccountInfo) SetEnableCurrencies(v bool)`

SetEnableCurrencies sets EnableCurrencies field to given value.

### HasEnableCurrencies

`func (o *AccountInfo) HasEnableCurrencies() bool`

HasEnableCurrencies returns a boolean if a field has been set.

### GetGravatar

`func (o *AccountInfo) GetGravatar() string`

GetGravatar returns the Gravatar field if non-nil, zero value otherwise.

### GetGravatarOk

`func (o *AccountInfo) GetGravatarOk() (*string, bool)`

GetGravatarOk returns a tuple with the Gravatar field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGravatar

`func (o *AccountInfo) SetGravatar(v string)`

SetGravatar sets Gravatar field to given value.

### HasGravatar

`func (o *AccountInfo) HasGravatar() bool`

HasGravatar returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


