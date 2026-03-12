# PostWebsiteMigration200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Text** | Pointer to **string** | Confirmation message. | [optional] 
**Ticket** | Pointer to **int32** | The support ticket ID created for tracking the migration. Use this with &#x60;/tickets/{id}&#x60; to check migration progress. | [optional] 

## Methods

### NewPostWebsiteMigration200Response

`func NewPostWebsiteMigration200Response() *PostWebsiteMigration200Response`

NewPostWebsiteMigration200Response instantiates a new PostWebsiteMigration200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPostWebsiteMigration200ResponseWithDefaults

`func NewPostWebsiteMigration200ResponseWithDefaults() *PostWebsiteMigration200Response`

NewPostWebsiteMigration200ResponseWithDefaults instantiates a new PostWebsiteMigration200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetText

`func (o *PostWebsiteMigration200Response) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *PostWebsiteMigration200Response) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *PostWebsiteMigration200Response) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *PostWebsiteMigration200Response) HasText() bool`

HasText returns a boolean if a field has been set.

### GetTicket

`func (o *PostWebsiteMigration200Response) GetTicket() int32`

GetTicket returns the Ticket field if non-nil, zero value otherwise.

### GetTicketOk

`func (o *PostWebsiteMigration200Response) GetTicketOk() (*int32, bool)`

GetTicketOk returns a tuple with the Ticket field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicket

`func (o *PostWebsiteMigration200Response) SetTicket(v int32)`

SetTicket sets Ticket field to given value.

### HasTicket

`func (o *PostWebsiteMigration200Response) HasTicket() bool`

HasTicket returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


