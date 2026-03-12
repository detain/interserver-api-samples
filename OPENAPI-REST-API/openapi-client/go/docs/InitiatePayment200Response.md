# InitiatePayment200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | Pointer to **string** | The response type indicating how to handle the payment. Possible values: &#x60;redirect&#x60; (redirect user to a URL), &#x60;submit&#x60; (submit a form to a URL), &#x60;single&#x60; (immediate result). | [optional] 
**Redirect** | Pointer to **string** | URL to redirect the user to for payment (when type is &#x60;redirect&#x60;). | [optional] 
**Action** | Pointer to **string** | Form action URL (when type is &#x60;submit&#x60;). | [optional] 
**Method** | Pointer to **string** | HTTP method for the form submission (when type is &#x60;submit&#x60;). | [optional] 
**Items** | Pointer to **map[string]interface{}** | Form field name-value pairs to submit (when type is &#x60;submit&#x60;). | [optional] 
**Text** | Pointer to **string** | Status or result text. | [optional] 

## Methods

### NewInitiatePayment200Response

`func NewInitiatePayment200Response() *InitiatePayment200Response`

NewInitiatePayment200Response instantiates a new InitiatePayment200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewInitiatePayment200ResponseWithDefaults

`func NewInitiatePayment200ResponseWithDefaults() *InitiatePayment200Response`

NewInitiatePayment200ResponseWithDefaults instantiates a new InitiatePayment200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetType

`func (o *InitiatePayment200Response) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *InitiatePayment200Response) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *InitiatePayment200Response) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *InitiatePayment200Response) HasType() bool`

HasType returns a boolean if a field has been set.

### GetRedirect

`func (o *InitiatePayment200Response) GetRedirect() string`

GetRedirect returns the Redirect field if non-nil, zero value otherwise.

### GetRedirectOk

`func (o *InitiatePayment200Response) GetRedirectOk() (*string, bool)`

GetRedirectOk returns a tuple with the Redirect field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRedirect

`func (o *InitiatePayment200Response) SetRedirect(v string)`

SetRedirect sets Redirect field to given value.

### HasRedirect

`func (o *InitiatePayment200Response) HasRedirect() bool`

HasRedirect returns a boolean if a field has been set.

### GetAction

`func (o *InitiatePayment200Response) GetAction() string`

GetAction returns the Action field if non-nil, zero value otherwise.

### GetActionOk

`func (o *InitiatePayment200Response) GetActionOk() (*string, bool)`

GetActionOk returns a tuple with the Action field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAction

`func (o *InitiatePayment200Response) SetAction(v string)`

SetAction sets Action field to given value.

### HasAction

`func (o *InitiatePayment200Response) HasAction() bool`

HasAction returns a boolean if a field has been set.

### GetMethod

`func (o *InitiatePayment200Response) GetMethod() string`

GetMethod returns the Method field if non-nil, zero value otherwise.

### GetMethodOk

`func (o *InitiatePayment200Response) GetMethodOk() (*string, bool)`

GetMethodOk returns a tuple with the Method field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMethod

`func (o *InitiatePayment200Response) SetMethod(v string)`

SetMethod sets Method field to given value.

### HasMethod

`func (o *InitiatePayment200Response) HasMethod() bool`

HasMethod returns a boolean if a field has been set.

### GetItems

`func (o *InitiatePayment200Response) GetItems() map[string]interface{}`

GetItems returns the Items field if non-nil, zero value otherwise.

### GetItemsOk

`func (o *InitiatePayment200Response) GetItemsOk() (*map[string]interface{}, bool)`

GetItemsOk returns a tuple with the Items field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetItems

`func (o *InitiatePayment200Response) SetItems(v map[string]interface{})`

SetItems sets Items field to given value.

### HasItems

`func (o *InitiatePayment200Response) HasItems() bool`

HasItems returns a boolean if a field has been set.

### GetText

`func (o *InitiatePayment200Response) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *InitiatePayment200Response) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *InitiatePayment200Response) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *InitiatePayment200Response) HasText() bool`

HasText returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


