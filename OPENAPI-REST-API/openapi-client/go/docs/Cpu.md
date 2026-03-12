# Cpu

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **int32** |  | [optional] 
**ShortDesc** | Pointer to **string** |  | [optional] 
**LongDesc** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**Speed** | Pointer to **string** |  | [optional] 
**NumCores** | Pointer to **string** |  | [optional] 
**NumCpus** | Pointer to **string** |  | [optional] 
**Benchmark** | Pointer to **string** |  | [optional] 
**MonthlyPrice** | Pointer to **float32** |  | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** |  | [optional] 
**MaxRam** | Pointer to **string** |  | [optional] 
**MinRam** | Pointer to **string** |  | [optional] 
**MaxLff** | Pointer to **string** |  | [optional] 
**MaxSff** | Pointer to **string** |  | [optional] 
**MaxNve** | Pointer to **string** |  | [optional] 
**Visible** | Pointer to **string** |  | [optional] 
**Active** | Pointer to **string** |  | [optional] 

## Methods

### NewCpu

`func NewCpu() *Cpu`

NewCpu instantiates a new Cpu object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCpuWithDefaults

`func NewCpuWithDefaults() *Cpu`

NewCpuWithDefaults instantiates a new Cpu object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *Cpu) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *Cpu) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *Cpu) SetId(v int32)`

SetId sets Id field to given value.

### HasId

`func (o *Cpu) HasId() bool`

HasId returns a boolean if a field has been set.

### GetShortDesc

`func (o *Cpu) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *Cpu) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *Cpu) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *Cpu) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *Cpu) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *Cpu) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *Cpu) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *Cpu) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetType

`func (o *Cpu) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *Cpu) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *Cpu) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *Cpu) HasType() bool`

HasType returns a boolean if a field has been set.

### GetSpeed

`func (o *Cpu) GetSpeed() string`

GetSpeed returns the Speed field if non-nil, zero value otherwise.

### GetSpeedOk

`func (o *Cpu) GetSpeedOk() (*string, bool)`

GetSpeedOk returns a tuple with the Speed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSpeed

`func (o *Cpu) SetSpeed(v string)`

SetSpeed sets Speed field to given value.

### HasSpeed

`func (o *Cpu) HasSpeed() bool`

HasSpeed returns a boolean if a field has been set.

### GetNumCores

`func (o *Cpu) GetNumCores() string`

GetNumCores returns the NumCores field if non-nil, zero value otherwise.

### GetNumCoresOk

`func (o *Cpu) GetNumCoresOk() (*string, bool)`

GetNumCoresOk returns a tuple with the NumCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCores

`func (o *Cpu) SetNumCores(v string)`

SetNumCores sets NumCores field to given value.

### HasNumCores

`func (o *Cpu) HasNumCores() bool`

HasNumCores returns a boolean if a field has been set.

### GetNumCpus

`func (o *Cpu) GetNumCpus() string`

GetNumCpus returns the NumCpus field if non-nil, zero value otherwise.

### GetNumCpusOk

`func (o *Cpu) GetNumCpusOk() (*string, bool)`

GetNumCpusOk returns a tuple with the NumCpus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCpus

`func (o *Cpu) SetNumCpus(v string)`

SetNumCpus sets NumCpus field to given value.

### HasNumCpus

`func (o *Cpu) HasNumCpus() bool`

HasNumCpus returns a boolean if a field has been set.

### GetBenchmark

`func (o *Cpu) GetBenchmark() string`

GetBenchmark returns the Benchmark field if non-nil, zero value otherwise.

### GetBenchmarkOk

`func (o *Cpu) GetBenchmarkOk() (*string, bool)`

GetBenchmarkOk returns a tuple with the Benchmark field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBenchmark

`func (o *Cpu) SetBenchmark(v string)`

SetBenchmark sets Benchmark field to given value.

### HasBenchmark

`func (o *Cpu) HasBenchmark() bool`

HasBenchmark returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *Cpu) GetMonthlyPrice() float32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *Cpu) GetMonthlyPriceOk() (*float32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *Cpu) SetMonthlyPrice(v float32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *Cpu) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *Cpu) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *Cpu) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *Cpu) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *Cpu) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.

### GetMaxRam

`func (o *Cpu) GetMaxRam() string`

GetMaxRam returns the MaxRam field if non-nil, zero value otherwise.

### GetMaxRamOk

`func (o *Cpu) GetMaxRamOk() (*string, bool)`

GetMaxRamOk returns a tuple with the MaxRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxRam

`func (o *Cpu) SetMaxRam(v string)`

SetMaxRam sets MaxRam field to given value.

### HasMaxRam

`func (o *Cpu) HasMaxRam() bool`

HasMaxRam returns a boolean if a field has been set.

### GetMinRam

`func (o *Cpu) GetMinRam() string`

GetMinRam returns the MinRam field if non-nil, zero value otherwise.

### GetMinRamOk

`func (o *Cpu) GetMinRamOk() (*string, bool)`

GetMinRamOk returns a tuple with the MinRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMinRam

`func (o *Cpu) SetMinRam(v string)`

SetMinRam sets MinRam field to given value.

### HasMinRam

`func (o *Cpu) HasMinRam() bool`

HasMinRam returns a boolean if a field has been set.

### GetMaxLff

`func (o *Cpu) GetMaxLff() string`

GetMaxLff returns the MaxLff field if non-nil, zero value otherwise.

### GetMaxLffOk

`func (o *Cpu) GetMaxLffOk() (*string, bool)`

GetMaxLffOk returns a tuple with the MaxLff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxLff

`func (o *Cpu) SetMaxLff(v string)`

SetMaxLff sets MaxLff field to given value.

### HasMaxLff

`func (o *Cpu) HasMaxLff() bool`

HasMaxLff returns a boolean if a field has been set.

### GetMaxSff

`func (o *Cpu) GetMaxSff() string`

GetMaxSff returns the MaxSff field if non-nil, zero value otherwise.

### GetMaxSffOk

`func (o *Cpu) GetMaxSffOk() (*string, bool)`

GetMaxSffOk returns a tuple with the MaxSff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxSff

`func (o *Cpu) SetMaxSff(v string)`

SetMaxSff sets MaxSff field to given value.

### HasMaxSff

`func (o *Cpu) HasMaxSff() bool`

HasMaxSff returns a boolean if a field has been set.

### GetMaxNve

`func (o *Cpu) GetMaxNve() string`

GetMaxNve returns the MaxNve field if non-nil, zero value otherwise.

### GetMaxNveOk

`func (o *Cpu) GetMaxNveOk() (*string, bool)`

GetMaxNveOk returns a tuple with the MaxNve field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxNve

`func (o *Cpu) SetMaxNve(v string)`

SetMaxNve sets MaxNve field to given value.

### HasMaxNve

`func (o *Cpu) HasMaxNve() bool`

HasMaxNve returns a boolean if a field has been set.

### GetVisible

`func (o *Cpu) GetVisible() string`

GetVisible returns the Visible field if non-nil, zero value otherwise.

### GetVisibleOk

`func (o *Cpu) GetVisibleOk() (*string, bool)`

GetVisibleOk returns a tuple with the Visible field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisible

`func (o *Cpu) SetVisible(v string)`

SetVisible sets Visible field to given value.

### HasVisible

`func (o *Cpu) HasVisible() bool`

HasVisible returns a boolean if a field has been set.

### GetActive

`func (o *Cpu) GetActive() string`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *Cpu) GetActiveOk() (*string, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *Cpu) SetActive(v string)`

SetActive sets Active field to given value.

### HasActive

`func (o *Cpu) HasActive() bool`

HasActive returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


