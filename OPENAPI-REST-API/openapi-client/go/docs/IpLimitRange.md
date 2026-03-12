# IpLimitRange

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Start** | **string** | The begining (or first) IP address in the range. | 
**End** | **string** | The ending (or last) IP address in the range. | 

## Methods

### NewIpLimitRange

`func NewIpLimitRange(start string, end string, ) *IpLimitRange`

NewIpLimitRange instantiates a new IpLimitRange object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIpLimitRangeWithDefaults

`func NewIpLimitRangeWithDefaults() *IpLimitRange`

NewIpLimitRangeWithDefaults instantiates a new IpLimitRange object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStart

`func (o *IpLimitRange) GetStart() string`

GetStart returns the Start field if non-nil, zero value otherwise.

### GetStartOk

`func (o *IpLimitRange) GetStartOk() (*string, bool)`

GetStartOk returns a tuple with the Start field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStart

`func (o *IpLimitRange) SetStart(v string)`

SetStart sets Start field to given value.


### GetEnd

`func (o *IpLimitRange) GetEnd() string`

GetEnd returns the End field if non-nil, zero value otherwise.

### GetEndOk

`func (o *IpLimitRange) GetEndOk() (*string, bool)`

GetEndOk returns a tuple with the End field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnd

`func (o *IpLimitRange) SetEnd(v string)`

SetEnd sets End field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


