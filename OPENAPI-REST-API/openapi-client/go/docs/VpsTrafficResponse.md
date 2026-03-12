# VpsTrafficResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | **string** |  | 
**Target** | **string** |  | 
**Interval** | **int32** |  | 
**History** | [**VpsTrafficHistoryResponse**](VpsTrafficHistoryResponse.md) |  | 
**Last** | **time.Time** |  | 
**Times** | [**[]time.Time**](time.Time.md) |  | 
**Totals** | [**VpsTrafficTotalsResposne**](VpsTrafficTotalsResposne.md) |  | 
**Usage** | [**VpsTrafficUsageResponse**](VpsTrafficUsageResponse.md) |  | 
**Data** | [**[]VpsTrafficDataSectionResponse**](VpsTrafficDataSectionResponse.md) |  | 

## Methods

### NewVpsTrafficResponse

`func NewVpsTrafficResponse(name string, target string, interval int32, history VpsTrafficHistoryResponse, last time.Time, times []time.Time, totals VpsTrafficTotalsResposne, usage VpsTrafficUsageResponse, data []VpsTrafficDataSectionResponse, ) *VpsTrafficResponse`

NewVpsTrafficResponse instantiates a new VpsTrafficResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsTrafficResponseWithDefaults

`func NewVpsTrafficResponseWithDefaults() *VpsTrafficResponse`

NewVpsTrafficResponseWithDefaults instantiates a new VpsTrafficResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *VpsTrafficResponse) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *VpsTrafficResponse) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *VpsTrafficResponse) SetName(v string)`

SetName sets Name field to given value.


### GetTarget

`func (o *VpsTrafficResponse) GetTarget() string`

GetTarget returns the Target field if non-nil, zero value otherwise.

### GetTargetOk

`func (o *VpsTrafficResponse) GetTargetOk() (*string, bool)`

GetTargetOk returns a tuple with the Target field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTarget

`func (o *VpsTrafficResponse) SetTarget(v string)`

SetTarget sets Target field to given value.


### GetInterval

`func (o *VpsTrafficResponse) GetInterval() int32`

GetInterval returns the Interval field if non-nil, zero value otherwise.

### GetIntervalOk

`func (o *VpsTrafficResponse) GetIntervalOk() (*int32, bool)`

GetIntervalOk returns a tuple with the Interval field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInterval

`func (o *VpsTrafficResponse) SetInterval(v int32)`

SetInterval sets Interval field to given value.


### GetHistory

`func (o *VpsTrafficResponse) GetHistory() VpsTrafficHistoryResponse`

GetHistory returns the History field if non-nil, zero value otherwise.

### GetHistoryOk

`func (o *VpsTrafficResponse) GetHistoryOk() (*VpsTrafficHistoryResponse, bool)`

GetHistoryOk returns a tuple with the History field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHistory

`func (o *VpsTrafficResponse) SetHistory(v VpsTrafficHistoryResponse)`

SetHistory sets History field to given value.


### GetLast

`func (o *VpsTrafficResponse) GetLast() time.Time`

GetLast returns the Last field if non-nil, zero value otherwise.

### GetLastOk

`func (o *VpsTrafficResponse) GetLastOk() (*time.Time, bool)`

GetLastOk returns a tuple with the Last field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLast

`func (o *VpsTrafficResponse) SetLast(v time.Time)`

SetLast sets Last field to given value.


### GetTimes

`func (o *VpsTrafficResponse) GetTimes() []time.Time`

GetTimes returns the Times field if non-nil, zero value otherwise.

### GetTimesOk

`func (o *VpsTrafficResponse) GetTimesOk() (*[]time.Time, bool)`

GetTimesOk returns a tuple with the Times field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimes

`func (o *VpsTrafficResponse) SetTimes(v []time.Time)`

SetTimes sets Times field to given value.


### GetTotals

`func (o *VpsTrafficResponse) GetTotals() VpsTrafficTotalsResposne`

GetTotals returns the Totals field if non-nil, zero value otherwise.

### GetTotalsOk

`func (o *VpsTrafficResponse) GetTotalsOk() (*VpsTrafficTotalsResposne, bool)`

GetTotalsOk returns a tuple with the Totals field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotals

`func (o *VpsTrafficResponse) SetTotals(v VpsTrafficTotalsResposne)`

SetTotals sets Totals field to given value.


### GetUsage

`func (o *VpsTrafficResponse) GetUsage() VpsTrafficUsageResponse`

GetUsage returns the Usage field if non-nil, zero value otherwise.

### GetUsageOk

`func (o *VpsTrafficResponse) GetUsageOk() (*VpsTrafficUsageResponse, bool)`

GetUsageOk returns a tuple with the Usage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsage

`func (o *VpsTrafficResponse) SetUsage(v VpsTrafficUsageResponse)`

SetUsage sets Usage field to given value.


### GetData

`func (o *VpsTrafficResponse) GetData() []VpsTrafficDataSectionResponse`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *VpsTrafficResponse) GetDataOk() (*[]VpsTrafficDataSectionResponse, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *VpsTrafficResponse) SetData(v []VpsTrafficDataSectionResponse)`

SetData sets Data field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


