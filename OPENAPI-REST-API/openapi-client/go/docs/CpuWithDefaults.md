# CpuWithDefaults

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
**MemoryDet** | Pointer to [**MemoryOption**](MemoryOption.md) |  | [optional] 
**HdDet** | Pointer to [**HardDrive**](HardDrive.md) |  | [optional] 
**MonthlyFee** | Pointer to **string** |  | [optional] 

## Methods

### NewCpuWithDefaults

`func NewCpuWithDefaults() *CpuWithDefaults`

NewCpuWithDefaults instantiates a new CpuWithDefaults object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCpuWithDefaultsWithDefaults

`func NewCpuWithDefaultsWithDefaults() *CpuWithDefaults`

NewCpuWithDefaultsWithDefaults instantiates a new CpuWithDefaults object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *CpuWithDefaults) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *CpuWithDefaults) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *CpuWithDefaults) SetId(v int32)`

SetId sets Id field to given value.

### HasId

`func (o *CpuWithDefaults) HasId() bool`

HasId returns a boolean if a field has been set.

### GetShortDesc

`func (o *CpuWithDefaults) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *CpuWithDefaults) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *CpuWithDefaults) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *CpuWithDefaults) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *CpuWithDefaults) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *CpuWithDefaults) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *CpuWithDefaults) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *CpuWithDefaults) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetType

`func (o *CpuWithDefaults) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *CpuWithDefaults) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *CpuWithDefaults) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *CpuWithDefaults) HasType() bool`

HasType returns a boolean if a field has been set.

### GetSpeed

`func (o *CpuWithDefaults) GetSpeed() string`

GetSpeed returns the Speed field if non-nil, zero value otherwise.

### GetSpeedOk

`func (o *CpuWithDefaults) GetSpeedOk() (*string, bool)`

GetSpeedOk returns a tuple with the Speed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSpeed

`func (o *CpuWithDefaults) SetSpeed(v string)`

SetSpeed sets Speed field to given value.

### HasSpeed

`func (o *CpuWithDefaults) HasSpeed() bool`

HasSpeed returns a boolean if a field has been set.

### GetNumCores

`func (o *CpuWithDefaults) GetNumCores() string`

GetNumCores returns the NumCores field if non-nil, zero value otherwise.

### GetNumCoresOk

`func (o *CpuWithDefaults) GetNumCoresOk() (*string, bool)`

GetNumCoresOk returns a tuple with the NumCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCores

`func (o *CpuWithDefaults) SetNumCores(v string)`

SetNumCores sets NumCores field to given value.

### HasNumCores

`func (o *CpuWithDefaults) HasNumCores() bool`

HasNumCores returns a boolean if a field has been set.

### GetNumCpus

`func (o *CpuWithDefaults) GetNumCpus() string`

GetNumCpus returns the NumCpus field if non-nil, zero value otherwise.

### GetNumCpusOk

`func (o *CpuWithDefaults) GetNumCpusOk() (*string, bool)`

GetNumCpusOk returns a tuple with the NumCpus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumCpus

`func (o *CpuWithDefaults) SetNumCpus(v string)`

SetNumCpus sets NumCpus field to given value.

### HasNumCpus

`func (o *CpuWithDefaults) HasNumCpus() bool`

HasNumCpus returns a boolean if a field has been set.

### GetBenchmark

`func (o *CpuWithDefaults) GetBenchmark() string`

GetBenchmark returns the Benchmark field if non-nil, zero value otherwise.

### GetBenchmarkOk

`func (o *CpuWithDefaults) GetBenchmarkOk() (*string, bool)`

GetBenchmarkOk returns a tuple with the Benchmark field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBenchmark

`func (o *CpuWithDefaults) SetBenchmark(v string)`

SetBenchmark sets Benchmark field to given value.

### HasBenchmark

`func (o *CpuWithDefaults) HasBenchmark() bool`

HasBenchmark returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *CpuWithDefaults) GetMonthlyPrice() float32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *CpuWithDefaults) GetMonthlyPriceOk() (*float32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *CpuWithDefaults) SetMonthlyPrice(v float32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *CpuWithDefaults) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *CpuWithDefaults) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *CpuWithDefaults) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *CpuWithDefaults) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *CpuWithDefaults) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.

### GetMaxRam

`func (o *CpuWithDefaults) GetMaxRam() string`

GetMaxRam returns the MaxRam field if non-nil, zero value otherwise.

### GetMaxRamOk

`func (o *CpuWithDefaults) GetMaxRamOk() (*string, bool)`

GetMaxRamOk returns a tuple with the MaxRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxRam

`func (o *CpuWithDefaults) SetMaxRam(v string)`

SetMaxRam sets MaxRam field to given value.

### HasMaxRam

`func (o *CpuWithDefaults) HasMaxRam() bool`

HasMaxRam returns a boolean if a field has been set.

### GetMinRam

`func (o *CpuWithDefaults) GetMinRam() string`

GetMinRam returns the MinRam field if non-nil, zero value otherwise.

### GetMinRamOk

`func (o *CpuWithDefaults) GetMinRamOk() (*string, bool)`

GetMinRamOk returns a tuple with the MinRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMinRam

`func (o *CpuWithDefaults) SetMinRam(v string)`

SetMinRam sets MinRam field to given value.

### HasMinRam

`func (o *CpuWithDefaults) HasMinRam() bool`

HasMinRam returns a boolean if a field has been set.

### GetMaxLff

`func (o *CpuWithDefaults) GetMaxLff() string`

GetMaxLff returns the MaxLff field if non-nil, zero value otherwise.

### GetMaxLffOk

`func (o *CpuWithDefaults) GetMaxLffOk() (*string, bool)`

GetMaxLffOk returns a tuple with the MaxLff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxLff

`func (o *CpuWithDefaults) SetMaxLff(v string)`

SetMaxLff sets MaxLff field to given value.

### HasMaxLff

`func (o *CpuWithDefaults) HasMaxLff() bool`

HasMaxLff returns a boolean if a field has been set.

### GetMaxSff

`func (o *CpuWithDefaults) GetMaxSff() string`

GetMaxSff returns the MaxSff field if non-nil, zero value otherwise.

### GetMaxSffOk

`func (o *CpuWithDefaults) GetMaxSffOk() (*string, bool)`

GetMaxSffOk returns a tuple with the MaxSff field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxSff

`func (o *CpuWithDefaults) SetMaxSff(v string)`

SetMaxSff sets MaxSff field to given value.

### HasMaxSff

`func (o *CpuWithDefaults) HasMaxSff() bool`

HasMaxSff returns a boolean if a field has been set.

### GetMaxNve

`func (o *CpuWithDefaults) GetMaxNve() string`

GetMaxNve returns the MaxNve field if non-nil, zero value otherwise.

### GetMaxNveOk

`func (o *CpuWithDefaults) GetMaxNveOk() (*string, bool)`

GetMaxNveOk returns a tuple with the MaxNve field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxNve

`func (o *CpuWithDefaults) SetMaxNve(v string)`

SetMaxNve sets MaxNve field to given value.

### HasMaxNve

`func (o *CpuWithDefaults) HasMaxNve() bool`

HasMaxNve returns a boolean if a field has been set.

### GetVisible

`func (o *CpuWithDefaults) GetVisible() string`

GetVisible returns the Visible field if non-nil, zero value otherwise.

### GetVisibleOk

`func (o *CpuWithDefaults) GetVisibleOk() (*string, bool)`

GetVisibleOk returns a tuple with the Visible field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisible

`func (o *CpuWithDefaults) SetVisible(v string)`

SetVisible sets Visible field to given value.

### HasVisible

`func (o *CpuWithDefaults) HasVisible() bool`

HasVisible returns a boolean if a field has been set.

### GetActive

`func (o *CpuWithDefaults) GetActive() string`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *CpuWithDefaults) GetActiveOk() (*string, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *CpuWithDefaults) SetActive(v string)`

SetActive sets Active field to given value.

### HasActive

`func (o *CpuWithDefaults) HasActive() bool`

HasActive returns a boolean if a field has been set.

### GetMemoryDet

`func (o *CpuWithDefaults) GetMemoryDet() MemoryOption`

GetMemoryDet returns the MemoryDet field if non-nil, zero value otherwise.

### GetMemoryDetOk

`func (o *CpuWithDefaults) GetMemoryDetOk() (*MemoryOption, bool)`

GetMemoryDetOk returns a tuple with the MemoryDet field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemoryDet

`func (o *CpuWithDefaults) SetMemoryDet(v MemoryOption)`

SetMemoryDet sets MemoryDet field to given value.

### HasMemoryDet

`func (o *CpuWithDefaults) HasMemoryDet() bool`

HasMemoryDet returns a boolean if a field has been set.

### GetHdDet

`func (o *CpuWithDefaults) GetHdDet() HardDrive`

GetHdDet returns the HdDet field if non-nil, zero value otherwise.

### GetHdDetOk

`func (o *CpuWithDefaults) GetHdDetOk() (*HardDrive, bool)`

GetHdDetOk returns a tuple with the HdDet field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdDet

`func (o *CpuWithDefaults) SetHdDet(v HardDrive)`

SetHdDet sets HdDet field to given value.

### HasHdDet

`func (o *CpuWithDefaults) HasHdDet() bool`

HasHdDet returns a boolean if a field has been set.

### GetMonthlyFee

`func (o *CpuWithDefaults) GetMonthlyFee() string`

GetMonthlyFee returns the MonthlyFee field if non-nil, zero value otherwise.

### GetMonthlyFeeOk

`func (o *CpuWithDefaults) GetMonthlyFeeOk() (*string, bool)`

GetMonthlyFeeOk returns a tuple with the MonthlyFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyFee

`func (o *CpuWithDefaults) SetMonthlyFee(v string)`

SetMonthlyFee sets MonthlyFee field to given value.

### HasMonthlyFee

`func (o *CpuWithDefaults) HasMonthlyFee() bool`

HasMonthlyFee returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


