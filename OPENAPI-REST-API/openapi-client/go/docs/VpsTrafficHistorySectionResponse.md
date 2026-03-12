# VpsTrafficHistorySectionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Data** | [**[]VpsTrafficHistorySectionDataResponse**](VpsTrafficHistorySectionDataResponse.md) |  | 
**Times** | [**[]time.Time**](time.Time.md) |  | 

## Methods

### NewVpsTrafficHistorySectionResponse

`func NewVpsTrafficHistorySectionResponse(data []VpsTrafficHistorySectionDataResponse, times []time.Time, ) *VpsTrafficHistorySectionResponse`

NewVpsTrafficHistorySectionResponse instantiates a new VpsTrafficHistorySectionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsTrafficHistorySectionResponseWithDefaults

`func NewVpsTrafficHistorySectionResponseWithDefaults() *VpsTrafficHistorySectionResponse`

NewVpsTrafficHistorySectionResponseWithDefaults instantiates a new VpsTrafficHistorySectionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetData

`func (o *VpsTrafficHistorySectionResponse) GetData() []VpsTrafficHistorySectionDataResponse`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *VpsTrafficHistorySectionResponse) GetDataOk() (*[]VpsTrafficHistorySectionDataResponse, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *VpsTrafficHistorySectionResponse) SetData(v []VpsTrafficHistorySectionDataResponse)`

SetData sets Data field to given value.


### GetTimes

`func (o *VpsTrafficHistorySectionResponse) GetTimes() []time.Time`

GetTimes returns the Times field if non-nil, zero value otherwise.

### GetTimesOk

`func (o *VpsTrafficHistorySectionResponse) GetTimesOk() (*[]time.Time, bool)`

GetTimesOk returns a tuple with the Times field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimes

`func (o *VpsTrafficHistorySectionResponse) SetTimes(v []time.Time)`

SetTimes sets Times field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


