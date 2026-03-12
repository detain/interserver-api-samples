# QuickserverOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**QsId** | Pointer to **string** | Quickserver ID. | [optional] 
**ServerDetails** | Pointer to [**QuickserverOrderServerDetails**](QuickserverOrderServerDetails.md) |  | [optional] 
**Templates** | Pointer to [**QuickserverOrderTemplates**](QuickserverOrderTemplates.md) |  | [optional] 
**Version** | Pointer to [**QuickserverOrderVersion**](QuickserverOrderVersion.md) |  | [optional] 
**DistroSel** | Pointer to [**QuickserverOrderDistroSel**](QuickserverOrderDistroSel.md) |  | [optional] 

## Methods

### NewQuickserverOrder

`func NewQuickserverOrder() *QuickserverOrder`

NewQuickserverOrder instantiates a new QuickserverOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickserverOrderWithDefaults

`func NewQuickserverOrderWithDefaults() *QuickserverOrder`

NewQuickserverOrderWithDefaults instantiates a new QuickserverOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetQsId

`func (o *QuickserverOrder) GetQsId() string`

GetQsId returns the QsId field if non-nil, zero value otherwise.

### GetQsIdOk

`func (o *QuickserverOrder) GetQsIdOk() (*string, bool)`

GetQsIdOk returns a tuple with the QsId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsId

`func (o *QuickserverOrder) SetQsId(v string)`

SetQsId sets QsId field to given value.

### HasQsId

`func (o *QuickserverOrder) HasQsId() bool`

HasQsId returns a boolean if a field has been set.

### GetServerDetails

`func (o *QuickserverOrder) GetServerDetails() QuickserverOrderServerDetails`

GetServerDetails returns the ServerDetails field if non-nil, zero value otherwise.

### GetServerDetailsOk

`func (o *QuickserverOrder) GetServerDetailsOk() (*QuickserverOrderServerDetails, bool)`

GetServerDetailsOk returns a tuple with the ServerDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDetails

`func (o *QuickserverOrder) SetServerDetails(v QuickserverOrderServerDetails)`

SetServerDetails sets ServerDetails field to given value.

### HasServerDetails

`func (o *QuickserverOrder) HasServerDetails() bool`

HasServerDetails returns a boolean if a field has been set.

### GetTemplates

`func (o *QuickserverOrder) GetTemplates() QuickserverOrderTemplates`

GetTemplates returns the Templates field if non-nil, zero value otherwise.

### GetTemplatesOk

`func (o *QuickserverOrder) GetTemplatesOk() (*QuickserverOrderTemplates, bool)`

GetTemplatesOk returns a tuple with the Templates field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTemplates

`func (o *QuickserverOrder) SetTemplates(v QuickserverOrderTemplates)`

SetTemplates sets Templates field to given value.

### HasTemplates

`func (o *QuickserverOrder) HasTemplates() bool`

HasTemplates returns a boolean if a field has been set.

### GetVersion

`func (o *QuickserverOrder) GetVersion() QuickserverOrderVersion`

GetVersion returns the Version field if non-nil, zero value otherwise.

### GetVersionOk

`func (o *QuickserverOrder) GetVersionOk() (*QuickserverOrderVersion, bool)`

GetVersionOk returns a tuple with the Version field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVersion

`func (o *QuickserverOrder) SetVersion(v QuickserverOrderVersion)`

SetVersion sets Version field to given value.

### HasVersion

`func (o *QuickserverOrder) HasVersion() bool`

HasVersion returns a boolean if a field has been set.

### GetDistroSel

`func (o *QuickserverOrder) GetDistroSel() QuickserverOrderDistroSel`

GetDistroSel returns the DistroSel field if non-nil, zero value otherwise.

### GetDistroSelOk

`func (o *QuickserverOrder) GetDistroSelOk() (*QuickserverOrderDistroSel, bool)`

GetDistroSelOk returns a tuple with the DistroSel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDistroSel

`func (o *QuickserverOrder) SetDistroSel(v QuickserverOrderDistroSel)`

SetDistroSel sets DistroSel field to given value.

### HasDistroSel

`func (o *QuickserverOrder) HasDistroSel() bool`

HasDistroSel returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


