# DomainSearchResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | Pointer to **bool** | Indicates whether the registrar search succeeded. | [optional] 
**ResponseText** | Pointer to **string** | Human-readable status text from the registrar. | [optional] 
**ResponseTime** | Pointer to **string** | Response time as reported by the registrar. | [optional] 
**Lookup** | Pointer to **[]map[string]interface{}** | Availability lookup results for queried domains. | [optional] 
**Suggest** | Pointer to **[]map[string]interface{}** | Suggested alternative domains and availability data. | [optional] 
**Tlds** | Pointer to **[]string** | TLDs evaluated during the search. | [optional] 

## Methods

### NewDomainSearchResponse

`func NewDomainSearchResponse() *DomainSearchResponse`

NewDomainSearchResponse instantiates a new DomainSearchResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainSearchResponseWithDefaults

`func NewDomainSearchResponseWithDefaults() *DomainSearchResponse`

NewDomainSearchResponseWithDefaults instantiates a new DomainSearchResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *DomainSearchResponse) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *DomainSearchResponse) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *DomainSearchResponse) SetSuccess(v bool)`

SetSuccess sets Success field to given value.

### HasSuccess

`func (o *DomainSearchResponse) HasSuccess() bool`

HasSuccess returns a boolean if a field has been set.

### GetResponseText

`func (o *DomainSearchResponse) GetResponseText() string`

GetResponseText returns the ResponseText field if non-nil, zero value otherwise.

### GetResponseTextOk

`func (o *DomainSearchResponse) GetResponseTextOk() (*string, bool)`

GetResponseTextOk returns a tuple with the ResponseText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResponseText

`func (o *DomainSearchResponse) SetResponseText(v string)`

SetResponseText sets ResponseText field to given value.

### HasResponseText

`func (o *DomainSearchResponse) HasResponseText() bool`

HasResponseText returns a boolean if a field has been set.

### GetResponseTime

`func (o *DomainSearchResponse) GetResponseTime() string`

GetResponseTime returns the ResponseTime field if non-nil, zero value otherwise.

### GetResponseTimeOk

`func (o *DomainSearchResponse) GetResponseTimeOk() (*string, bool)`

GetResponseTimeOk returns a tuple with the ResponseTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResponseTime

`func (o *DomainSearchResponse) SetResponseTime(v string)`

SetResponseTime sets ResponseTime field to given value.

### HasResponseTime

`func (o *DomainSearchResponse) HasResponseTime() bool`

HasResponseTime returns a boolean if a field has been set.

### GetLookup

`func (o *DomainSearchResponse) GetLookup() []map[string]interface{}`

GetLookup returns the Lookup field if non-nil, zero value otherwise.

### GetLookupOk

`func (o *DomainSearchResponse) GetLookupOk() (*[]map[string]interface{}, bool)`

GetLookupOk returns a tuple with the Lookup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLookup

`func (o *DomainSearchResponse) SetLookup(v []map[string]interface{})`

SetLookup sets Lookup field to given value.

### HasLookup

`func (o *DomainSearchResponse) HasLookup() bool`

HasLookup returns a boolean if a field has been set.

### GetSuggest

`func (o *DomainSearchResponse) GetSuggest() []map[string]interface{}`

GetSuggest returns the Suggest field if non-nil, zero value otherwise.

### GetSuggestOk

`func (o *DomainSearchResponse) GetSuggestOk() (*[]map[string]interface{}, bool)`

GetSuggestOk returns a tuple with the Suggest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuggest

`func (o *DomainSearchResponse) SetSuggest(v []map[string]interface{})`

SetSuggest sets Suggest field to given value.

### HasSuggest

`func (o *DomainSearchResponse) HasSuggest() bool`

HasSuggest returns a boolean if a field has been set.

### GetTlds

`func (o *DomainSearchResponse) GetTlds() []string`

GetTlds returns the Tlds field if non-nil, zero value otherwise.

### GetTldsOk

`func (o *DomainSearchResponse) GetTldsOk() (*[]string, bool)`

GetTldsOk returns a tuple with the Tlds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTlds

`func (o *DomainSearchResponse) SetTlds(v []string)`

SetTlds sets Tlds field to given value.

### HasTlds

`func (o *DomainSearchResponse) HasTlds() bool`

HasTlds returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


