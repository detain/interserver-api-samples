# ServerOrderCPU

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | CPU ID. | [optional] 
**Price** | Pointer to **int32** | CPU price. | [optional] 
**Img** | Pointer to **string** | CPU image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the CPU. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the CPU. | [optional] 
**Location** | Pointer to **string** | Location of the CPU. | [optional] 
**Fsb** | Pointer to **string** | Front Side Bus information. | [optional] 
**Manu** | Pointer to **string** | Manufacturer information. | [optional] 
**Type** | Pointer to **string** | CPU type. | [optional] 
**Speed** | Pointer to **string** | CPU speed. | [optional] 
**Cache** | Pointer to **string** | Cache information. | [optional] 
**Active** | Pointer to **string** | Active status. | [optional] 
**NumCores** | Pointer to **string** | Number of cores. | [optional] 
**NumCpus** | Pointer to **string** | Number of CPUs. | [optional] 
**Benchmark** | Pointer to **string** | CPU benchmark. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**MaxRam** | Pointer to **string** | Maximum RAM supported. | [optional] 
**MinRam** | Pointer to **string** | Minimum RAM required. | [optional] 
**MaxLff** | Pointer to **string** | Maximum LFF (Large Form Factor) supported. | [optional] 
**MaxSff** | Pointer to **string** | Maximum SFF (Small Form Factor) supported. | [optional] 
**MaxNve** | Pointer to **string** | Maximum NVMe drives supported. | [optional] 
**Visible** | Pointer to **string** | Visibility status. | [optional] 
**HdIds** | Pointer to **string** | Hard drive IDs. | [optional] 
**PriceDisplay** | Pointer to **string** | Display of CPU price. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly CPU price. | [optional] 

## Methods

### NewServerOrderCPU

`func NewServerOrderCPU() *ServerOrderCPU`

NewServerOrderCPU instantiates a new ServerOrderCPU object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderCPUWithDefaults

`func NewServerOrderCPUWithDefaults() *ServerOrderCPU`

NewServerOrderCPUWithDefaults instantiates a new ServerOrderCPU object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderCPU) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderCPU) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderCPU) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderCPU) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderCPU) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderCPU) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderCPU) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderCPU) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderCPU) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderCPU) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderCPU) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderCPU) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderCPU) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderCPU) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderCPU) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderCPU) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderCPU) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderCPU) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderCPU) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderCPU) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetLocation

`func (o *ServerOrderCPU) GetLocation() string`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ServerOrderCPU) GetLocationOk() (*string, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ServerOrderCPU) SetLocation(v string)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ServerOrderCPU) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetFsb

`func (o *ServerOrderCPU) GetFsb() string`

GetFsb returns the Fsb field if non-nil, zero value otherwise.

### GetFsbOk

`func (o *ServerOrderCPU) GetFsbOk() (*string, bool)`

GetFsbOk returns a tuple with the Fsb field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFsb

`func (o *ServerOrderCPU) SetFsb(v string)`

SetFsb sets Fsb field to given value.

### HasFsb

`func (o *ServerOrderCPU) HasFsb() bool`

HasFsb returns a boolean if a field has been set.

### GetManu

`func (o *ServerOrderCPU) GetManu() string`

GetManu returns the Manu field if non-nil, zero value otherwise.

### GetManuOk

`func (o *ServerOrderCPU) GetManuOk() (*string, bool)`

GetManuOk returns a tuple with the Manu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetManu

`func (o *ServerOrderCPU) SetManu(v string)`

SetManu sets Manu field to given value.

### HasManu

`func (o *ServerOrderCPU) HasManu() bool`

HasManu returns a boolean if a field has been set.

### GetType

`func (o *ServerOrderCPU) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ServerOrderCPU) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ServerOrderCPU) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ServerOrderCPU) HasType() bool`

HasType returns a boolean if a field has been set.

### GetSpeed

`func (o *ServerOrderCPU) GetSpeed() string`

GetSpeed returns the Speed field if non-nil, zero value otherwise.

### GetSpeedOk

`func (o *ServerOrderCPU) GetSpeedOk() (*string, bool)`

GetSpeedOk returns a tuple with the Speed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSpeed

`func (o *ServerOrderCPU) SetSpeed(v string)`

SetSpeed sets Speed field to given value.

### HasSpeed

`func (o *ServerOrderCPU) HasSpeed() bool`

HasSpeed returns a boolean if a field has been set.

### GetCache

`func (o *ServerOrderCPU) GetCache() string`

GetCache returns the Cache field if non-nil, zero value otherwise.

### GetCacheOk

`func (o *ServerOrderCPU) GetCacheOk() (*string, bool)`

GetCacheOk returns a tuple with the Cache field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCache

`func (o *ServerOrderCPU) SetCache(v string)`

SetCache sets Cache field to given value.

### HasCache

`func (o *ServerOrderCPU) HasCache() bool`

HasCache returns a boolean if a field has been set.

### GetActive

`func (o *ServerOrderCPU) GetActive() string`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *ServerOrderCPU) GetActiveOk() (*string, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *ServerOrderCPU) SetActive(v string)`

SetActive sets Active field to given value.

### HasActive

`func (o *ServerOrderCPU) HasActive() bool`

HasActive returns a boolean if a field has been set.

### GetNumCores

`func (o *ServerOrderCPU) GetNumCores() string`

GetNumCores returns the NumCores field if non-nil, zero value otherwise.

### GetNumCoresOk

`func (o *ServerOrderCPU) GetNumCoresOk() (*string, bool)`

GetNumCoresOk returns a tuple with the NumCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCores

`func (o *ServerOrderCPU) SetNumCores(v string)`

SetNumCores sets NumCores field to given value.

### HasNumCores

`func (o *ServerOrderCPU) HasNumCores() bool`

HasNumCores returns a boolean if a field has been set.

### GetNumCpus

`func (o *ServerOrderCPU) GetNumCpus() string`

GetNumCpus returns the NumCpus field if non-nil, zero value otherwise.

### GetNumCpusOk

`func (o *ServerOrderCPU) GetNumCpusOk() (*string, bool)`

GetNumCpusOk returns a tuple with the NumCpus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCpus

`func (o *ServerOrderCPU) SetNumCpus(v string)`

SetNumCpus sets NumCpus field to given value.

### HasNumCpus

`func (o *ServerOrderCPU) HasNumCpus() bool`

HasNumCpus returns a boolean if a field has been set.

### GetBenchmark

`func (o *ServerOrderCPU) GetBenchmark() string`

GetBenchmark returns the Benchmark field if non-nil, zero value otherwise.

### GetBenchmarkOk

`func (o *ServerOrderCPU) GetBenchmarkOk() (*string, bool)`

GetBenchmarkOk returns a tuple with the Benchmark field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBenchmark

`func (o *ServerOrderCPU) SetBenchmark(v string)`

SetBenchmark sets Benchmark field to given value.

### HasBenchmark

`func (o *ServerOrderCPU) HasBenchmark() bool`

HasBenchmark returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderCPU) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderCPU) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderCPU) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderCPU) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetMaxRam

`func (o *ServerOrderCPU) GetMaxRam() string`

GetMaxRam returns the MaxRam field if non-nil, zero value otherwise.

### GetMaxRamOk

`func (o *ServerOrderCPU) GetMaxRamOk() (*string, bool)`

GetMaxRamOk returns a tuple with the MaxRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxRam

`func (o *ServerOrderCPU) SetMaxRam(v string)`

SetMaxRam sets MaxRam field to given value.

### HasMaxRam

`func (o *ServerOrderCPU) HasMaxRam() bool`

HasMaxRam returns a boolean if a field has been set.

### GetMinRam

`func (o *ServerOrderCPU) GetMinRam() string`

GetMinRam returns the MinRam field if non-nil, zero value otherwise.

### GetMinRamOk

`func (o *ServerOrderCPU) GetMinRamOk() (*string, bool)`

GetMinRamOk returns a tuple with the MinRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMinRam

`func (o *ServerOrderCPU) SetMinRam(v string)`

SetMinRam sets MinRam field to given value.

### HasMinRam

`func (o *ServerOrderCPU) HasMinRam() bool`

HasMinRam returns a boolean if a field has been set.

### GetMaxLff

`func (o *ServerOrderCPU) GetMaxLff() string`

GetMaxLff returns the MaxLff field if non-nil, zero value otherwise.

### GetMaxLffOk

`func (o *ServerOrderCPU) GetMaxLffOk() (*string, bool)`

GetMaxLffOk returns a tuple with the MaxLff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxLff

`func (o *ServerOrderCPU) SetMaxLff(v string)`

SetMaxLff sets MaxLff field to given value.

### HasMaxLff

`func (o *ServerOrderCPU) HasMaxLff() bool`

HasMaxLff returns a boolean if a field has been set.

### GetMaxSff

`func (o *ServerOrderCPU) GetMaxSff() string`

GetMaxSff returns the MaxSff field if non-nil, zero value otherwise.

### GetMaxSffOk

`func (o *ServerOrderCPU) GetMaxSffOk() (*string, bool)`

GetMaxSffOk returns a tuple with the MaxSff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxSff

`func (o *ServerOrderCPU) SetMaxSff(v string)`

SetMaxSff sets MaxSff field to given value.

### HasMaxSff

`func (o *ServerOrderCPU) HasMaxSff() bool`

HasMaxSff returns a boolean if a field has been set.

### GetMaxNve

`func (o *ServerOrderCPU) GetMaxNve() string`

GetMaxNve returns the MaxNve field if non-nil, zero value otherwise.

### GetMaxNveOk

`func (o *ServerOrderCPU) GetMaxNveOk() (*string, bool)`

GetMaxNveOk returns a tuple with the MaxNve field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxNve

`func (o *ServerOrderCPU) SetMaxNve(v string)`

SetMaxNve sets MaxNve field to given value.

### HasMaxNve

`func (o *ServerOrderCPU) HasMaxNve() bool`

HasMaxNve returns a boolean if a field has been set.

### GetVisible

`func (o *ServerOrderCPU) GetVisible() string`

GetVisible returns the Visible field if non-nil, zero value otherwise.

### GetVisibleOk

`func (o *ServerOrderCPU) GetVisibleOk() (*string, bool)`

GetVisibleOk returns a tuple with the Visible field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisible

`func (o *ServerOrderCPU) SetVisible(v string)`

SetVisible sets Visible field to given value.

### HasVisible

`func (o *ServerOrderCPU) HasVisible() bool`

HasVisible returns a boolean if a field has been set.

### GetHdIds

`func (o *ServerOrderCPU) GetHdIds() string`

GetHdIds returns the HdIds field if non-nil, zero value otherwise.

### GetHdIdsOk

`func (o *ServerOrderCPU) GetHdIdsOk() (*string, bool)`

GetHdIdsOk returns a tuple with the HdIds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdIds

`func (o *ServerOrderCPU) SetHdIds(v string)`

SetHdIds sets HdIds field to given value.

### HasHdIds

`func (o *ServerOrderCPU) HasHdIds() bool`

HasHdIds returns a boolean if a field has been set.

### GetPriceDisplay

`func (o *ServerOrderCPU) GetPriceDisplay() string`

GetPriceDisplay returns the PriceDisplay field if non-nil, zero value otherwise.

### GetPriceDisplayOk

`func (o *ServerOrderCPU) GetPriceDisplayOk() (*string, bool)`

GetPriceDisplayOk returns a tuple with the PriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceDisplay

`func (o *ServerOrderCPU) SetPriceDisplay(v string)`

SetPriceDisplay sets PriceDisplay field to given value.

### HasPriceDisplay

`func (o *ServerOrderCPU) HasPriceDisplay() bool`

HasPriceDisplay returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderCPU) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderCPU) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderCPU) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderCPU) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


