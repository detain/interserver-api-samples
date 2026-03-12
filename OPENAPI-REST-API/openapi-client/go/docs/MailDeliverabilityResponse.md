# MailDeliverabilityResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Stat** | Pointer to **map[string]interface{}** | Delivered and bounced counts. | [optional] 
**Percent** | Pointer to **float32** | Bounce percentage. | [optional] 
**TableData** | Pointer to **[][]string** | Detailed deliverability breakdown by sender or domain. | [optional] 

## Methods

### NewMailDeliverabilityResponse

`func NewMailDeliverabilityResponse() *MailDeliverabilityResponse`

NewMailDeliverabilityResponse instantiates a new MailDeliverabilityResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailDeliverabilityResponseWithDefaults

`func NewMailDeliverabilityResponseWithDefaults() *MailDeliverabilityResponse`

NewMailDeliverabilityResponseWithDefaults instantiates a new MailDeliverabilityResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStat

`func (o *MailDeliverabilityResponse) GetStat() map[string]interface{}`

GetStat returns the Stat field if non-nil, zero value otherwise.

### GetStatOk

`func (o *MailDeliverabilityResponse) GetStatOk() (*map[string]interface{}, bool)`

GetStatOk returns a tuple with the Stat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStat

`func (o *MailDeliverabilityResponse) SetStat(v map[string]interface{})`

SetStat sets Stat field to given value.

### HasStat

`func (o *MailDeliverabilityResponse) HasStat() bool`

HasStat returns a boolean if a field has been set.

### GetPercent

`func (o *MailDeliverabilityResponse) GetPercent() float32`

GetPercent returns the Percent field if non-nil, zero value otherwise.

### GetPercentOk

`func (o *MailDeliverabilityResponse) GetPercentOk() (*float32, bool)`

GetPercentOk returns a tuple with the Percent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPercent

`func (o *MailDeliverabilityResponse) SetPercent(v float32)`

SetPercent sets Percent field to given value.

### HasPercent

`func (o *MailDeliverabilityResponse) HasPercent() bool`

HasPercent returns a boolean if a field has been set.

### GetTableData

`func (o *MailDeliverabilityResponse) GetTableData() [][]string`

GetTableData returns the TableData field if non-nil, zero value otherwise.

### GetTableDataOk

`func (o *MailDeliverabilityResponse) GetTableDataOk() (*[][]string, bool)`

GetTableDataOk returns a tuple with the TableData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTableData

`func (o *MailDeliverabilityResponse) SetTableData(v [][]string)`

SetTableData sets TableData field to given value.

### HasTableData

`func (o *MailDeliverabilityResponse) HasTableData() bool`

HasTableData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


