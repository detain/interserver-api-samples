# LicenseIpInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | Pointer to **string** | Table title | [optional] 
**Rows** | Pointer to [**[]LicenseIpInfoRow**](LicenseIpInfoRow.md) |  | [optional] 

## Methods

### NewLicenseIpInfo

`func NewLicenseIpInfo() *LicenseIpInfo`

NewLicenseIpInfo instantiates a new LicenseIpInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLicenseIpInfoWithDefaults

`func NewLicenseIpInfoWithDefaults() *LicenseIpInfo`

NewLicenseIpInfoWithDefaults instantiates a new LicenseIpInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *LicenseIpInfo) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *LicenseIpInfo) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *LicenseIpInfo) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *LicenseIpInfo) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetRows

`func (o *LicenseIpInfo) GetRows() []LicenseIpInfoRow`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *LicenseIpInfo) GetRowsOk() (*[]LicenseIpInfoRow, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *LicenseIpInfo) SetRows(v []LicenseIpInfoRow)`

SetRows sets Rows field to given value.

### HasRows

`func (o *LicenseIpInfo) HasRows() bool`

HasRows returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


