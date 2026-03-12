# MailStatsType

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Time** | Pointer to **string** |  | [optional] [default to "1h"]
**Usage** | Pointer to **int32** |  | [optional] 
**Currency** | Pointer to **string** |  | [optional] 
**CurrencySymbol** | Pointer to **string** |  | [optional] 
**Cost** | Pointer to **float64** |  | [optional] 
**Received** | Pointer to **int32** |  | [optional] 
**Sent** | Pointer to **int32** |  | [optional] 
**Volume** | Pointer to [**MailStatsTypeVolume**](MailStatsTypeVolume.md) |  | [optional] 

## Methods

### NewMailStatsType

`func NewMailStatsType() *MailStatsType`

NewMailStatsType instantiates a new MailStatsType object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailStatsTypeWithDefaults

`func NewMailStatsTypeWithDefaults() *MailStatsType`

NewMailStatsTypeWithDefaults instantiates a new MailStatsType object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTime

`func (o *MailStatsType) GetTime() string`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *MailStatsType) GetTimeOk() (*string, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *MailStatsType) SetTime(v string)`

SetTime sets Time field to given value.

### HasTime

`func (o *MailStatsType) HasTime() bool`

HasTime returns a boolean if a field has been set.

### GetUsage

`func (o *MailStatsType) GetUsage() int32`

GetUsage returns the Usage field if non-nil, zero value otherwise.

### GetUsageOk

`func (o *MailStatsType) GetUsageOk() (*int32, bool)`

GetUsageOk returns a tuple with the Usage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsage

`func (o *MailStatsType) SetUsage(v int32)`

SetUsage sets Usage field to given value.

### HasUsage

`func (o *MailStatsType) HasUsage() bool`

HasUsage returns a boolean if a field has been set.

### GetCurrency

`func (o *MailStatsType) GetCurrency() string`

GetCurrency returns the Currency field if non-nil, zero value otherwise.

### GetCurrencyOk

`func (o *MailStatsType) GetCurrencyOk() (*string, bool)`

GetCurrencyOk returns a tuple with the Currency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrency

`func (o *MailStatsType) SetCurrency(v string)`

SetCurrency sets Currency field to given value.

### HasCurrency

`func (o *MailStatsType) HasCurrency() bool`

HasCurrency returns a boolean if a field has been set.

### GetCurrencySymbol

`func (o *MailStatsType) GetCurrencySymbol() string`

GetCurrencySymbol returns the CurrencySymbol field if non-nil, zero value otherwise.

### GetCurrencySymbolOk

`func (o *MailStatsType) GetCurrencySymbolOk() (*string, bool)`

GetCurrencySymbolOk returns a tuple with the CurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencySymbol

`func (o *MailStatsType) SetCurrencySymbol(v string)`

SetCurrencySymbol sets CurrencySymbol field to given value.

### HasCurrencySymbol

`func (o *MailStatsType) HasCurrencySymbol() bool`

HasCurrencySymbol returns a boolean if a field has been set.

### GetCost

`func (o *MailStatsType) GetCost() float64`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *MailStatsType) GetCostOk() (*float64, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *MailStatsType) SetCost(v float64)`

SetCost sets Cost field to given value.

### HasCost

`func (o *MailStatsType) HasCost() bool`

HasCost returns a boolean if a field has been set.

### GetReceived

`func (o *MailStatsType) GetReceived() int32`

GetReceived returns the Received field if non-nil, zero value otherwise.

### GetReceivedOk

`func (o *MailStatsType) GetReceivedOk() (*int32, bool)`

GetReceivedOk returns a tuple with the Received field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReceived

`func (o *MailStatsType) SetReceived(v int32)`

SetReceived sets Received field to given value.

### HasReceived

`func (o *MailStatsType) HasReceived() bool`

HasReceived returns a boolean if a field has been set.

### GetSent

`func (o *MailStatsType) GetSent() int32`

GetSent returns the Sent field if non-nil, zero value otherwise.

### GetSentOk

`func (o *MailStatsType) GetSentOk() (*int32, bool)`

GetSentOk returns a tuple with the Sent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSent

`func (o *MailStatsType) SetSent(v int32)`

SetSent sets Sent field to given value.

### HasSent

`func (o *MailStatsType) HasSent() bool`

HasSent returns a boolean if a field has been set.

### GetVolume

`func (o *MailStatsType) GetVolume() MailStatsTypeVolume`

GetVolume returns the Volume field if non-nil, zero value otherwise.

### GetVolumeOk

`func (o *MailStatsType) GetVolumeOk() (*MailStatsTypeVolume, bool)`

GetVolumeOk returns a tuple with the Volume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume

`func (o *MailStatsType) SetVolume(v MailStatsTypeVolume)`

SetVolume sets Volume field to given value.

### HasVolume

`func (o *MailStatsType) HasVolume() bool`

HasVolume returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


