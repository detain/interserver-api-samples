# VpsTrafficUsageResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Current** | [**VpsTrafficTotalsSectionResponse**](VpsTrafficTotalsSectionResponse.md) |  | 
**Peak** | [**VpsTrafficTotalsSectionResponse**](VpsTrafficTotalsSectionResponse.md) |  | 
**Average** | [**VpsTrafficUsageAverageResponse**](VpsTrafficUsageAverageResponse.md) |  | 

## Methods

### NewVpsTrafficUsageResponse

`func NewVpsTrafficUsageResponse(current VpsTrafficTotalsSectionResponse, peak VpsTrafficTotalsSectionResponse, average VpsTrafficUsageAverageResponse, ) *VpsTrafficUsageResponse`

NewVpsTrafficUsageResponse instantiates a new VpsTrafficUsageResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsTrafficUsageResponseWithDefaults

`func NewVpsTrafficUsageResponseWithDefaults() *VpsTrafficUsageResponse`

NewVpsTrafficUsageResponseWithDefaults instantiates a new VpsTrafficUsageResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCurrent

`func (o *VpsTrafficUsageResponse) GetCurrent() VpsTrafficTotalsSectionResponse`

GetCurrent returns the Current field if non-nil, zero value otherwise.

### GetCurrentOk

`func (o *VpsTrafficUsageResponse) GetCurrentOk() (*VpsTrafficTotalsSectionResponse, bool)`

GetCurrentOk returns a tuple with the Current field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrent

`func (o *VpsTrafficUsageResponse) SetCurrent(v VpsTrafficTotalsSectionResponse)`

SetCurrent sets Current field to given value.


### GetPeak

`func (o *VpsTrafficUsageResponse) GetPeak() VpsTrafficTotalsSectionResponse`

GetPeak returns the Peak field if non-nil, zero value otherwise.

### GetPeakOk

`func (o *VpsTrafficUsageResponse) GetPeakOk() (*VpsTrafficTotalsSectionResponse, bool)`

GetPeakOk returns a tuple with the Peak field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPeak

`func (o *VpsTrafficUsageResponse) SetPeak(v VpsTrafficTotalsSectionResponse)`

SetPeak sets Peak field to given value.


### GetAverage

`func (o *VpsTrafficUsageResponse) GetAverage() VpsTrafficUsageAverageResponse`

GetAverage returns the Average field if non-nil, zero value otherwise.

### GetAverageOk

`func (o *VpsTrafficUsageResponse) GetAverageOk() (*VpsTrafficUsageAverageResponse, bool)`

GetAverageOk returns a tuple with the Average field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAverage

`func (o *VpsTrafficUsageResponse) SetAverage(v VpsTrafficUsageAverageResponse)`

SetAverage sets Average field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


