# MailTutorialsTable

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | Pointer to **string** | The title of the tutorials table. | [optional] 
**Rows** | Pointer to [**[]MailTutorialsTableRow**](MailTutorialsTableRow.md) | The rows of the tutorials table. | [optional] 

## Methods

### NewMailTutorialsTable

`func NewMailTutorialsTable() *MailTutorialsTable`

NewMailTutorialsTable instantiates a new MailTutorialsTable object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailTutorialsTableWithDefaults

`func NewMailTutorialsTableWithDefaults() *MailTutorialsTable`

NewMailTutorialsTableWithDefaults instantiates a new MailTutorialsTable object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *MailTutorialsTable) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *MailTutorialsTable) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *MailTutorialsTable) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *MailTutorialsTable) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetRows

`func (o *MailTutorialsTable) GetRows() []MailTutorialsTableRow`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *MailTutorialsTable) GetRowsOk() (*[]MailTutorialsTableRow, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *MailTutorialsTable) SetRows(v []MailTutorialsTableRow)`

SetRows sets Rows field to given value.

### HasRows

`func (o *MailTutorialsTable) HasRows() bool`

HasRows returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


