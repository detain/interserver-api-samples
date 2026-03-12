# VpsDALicense

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** | License tier name. | [optional] 
**SubName** | Pointer to **string** | License tier sub-name. | [optional] 
**Cost** | Pointer to **int32** | Monthly cost in cents. | [optional] 
**ImgDisabled** | Pointer to **string** | Image path for the disabled state icon. | [optional] 
**ImgActive** | Pointer to **string** | Image path for the active state icon. | [optional] 

## Methods

### NewVpsDALicense

`func NewVpsDALicense() *VpsDALicense`

NewVpsDALicense instantiates a new VpsDALicense object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsDALicenseWithDefaults

`func NewVpsDALicenseWithDefaults() *VpsDALicense`

NewVpsDALicenseWithDefaults instantiates a new VpsDALicense object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *VpsDALicense) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *VpsDALicense) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *VpsDALicense) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *VpsDALicense) HasName() bool`

HasName returns a boolean if a field has been set.

### GetSubName

`func (o *VpsDALicense) GetSubName() string`

GetSubName returns the SubName field if non-nil, zero value otherwise.

### GetSubNameOk

`func (o *VpsDALicense) GetSubNameOk() (*string, bool)`

GetSubNameOk returns a tuple with the SubName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubName

`func (o *VpsDALicense) SetSubName(v string)`

SetSubName sets SubName field to given value.

### HasSubName

`func (o *VpsDALicense) HasSubName() bool`

HasSubName returns a boolean if a field has been set.

### GetCost

`func (o *VpsDALicense) GetCost() int32`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *VpsDALicense) GetCostOk() (*int32, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *VpsDALicense) SetCost(v int32)`

SetCost sets Cost field to given value.

### HasCost

`func (o *VpsDALicense) HasCost() bool`

HasCost returns a boolean if a field has been set.

### GetImgDisabled

`func (o *VpsDALicense) GetImgDisabled() string`

GetImgDisabled returns the ImgDisabled field if non-nil, zero value otherwise.

### GetImgDisabledOk

`func (o *VpsDALicense) GetImgDisabledOk() (*string, bool)`

GetImgDisabledOk returns a tuple with the ImgDisabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImgDisabled

`func (o *VpsDALicense) SetImgDisabled(v string)`

SetImgDisabled sets ImgDisabled field to given value.

### HasImgDisabled

`func (o *VpsDALicense) HasImgDisabled() bool`

HasImgDisabled returns a boolean if a field has been set.

### GetImgActive

`func (o *VpsDALicense) GetImgActive() string`

GetImgActive returns the ImgActive field if non-nil, zero value otherwise.

### GetImgActiveOk

`func (o *VpsDALicense) GetImgActiveOk() (*string, bool)`

GetImgActiveOk returns a tuple with the ImgActive field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImgActive

`func (o *VpsDALicense) SetImgActive(v string)`

SetImgActive sets ImgActive field to given value.

### HasImgActive

`func (o *VpsDALicense) HasImgActive() bool`

HasImgActive returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


