# Tickets

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Ima** | **string** |  | 
**Custid** | **string** |  | 
**View** | **string** |  | 
**CurrentPage** | **int32** |  | 
**Limit** | **int32** |  | 
**Sortcol** | **int32** |  | 
**Sortdir** | **int32** |  | 
**RowsOffset** | **int32** |  | 
**Tickets** | [**[]TicketsRow**](TicketsRow.md) |  | 
**Pages** | **int32** |  | 
**RowsTotal** | **int32** |  | 
**InboxCount** | **int32** |  | 
**CountArray** | [**TicketsCountArray**](TicketsCountArray.md) |  | 
**ViewText** | **string** |  | 

## Methods

### NewTickets

`func NewTickets(ima string, custid string, view string, currentPage int32, limit int32, sortcol int32, sortdir int32, rowsOffset int32, tickets []TicketsRow, pages int32, rowsTotal int32, inboxCount int32, countArray TicketsCountArray, viewText string, ) *Tickets`

NewTickets instantiates a new Tickets object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTicketsWithDefaults

`func NewTicketsWithDefaults() *Tickets`

NewTicketsWithDefaults instantiates a new Tickets object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIma

`func (o *Tickets) GetIma() string`

GetIma returns the Ima field if non-nil, zero value otherwise.

### GetImaOk

`func (o *Tickets) GetImaOk() (*string, bool)`

GetImaOk returns a tuple with the Ima field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIma

`func (o *Tickets) SetIma(v string)`

SetIma sets Ima field to given value.


### GetCustid

`func (o *Tickets) GetCustid() string`

GetCustid returns the Custid field if non-nil, zero value otherwise.

### GetCustidOk

`func (o *Tickets) GetCustidOk() (*string, bool)`

GetCustidOk returns a tuple with the Custid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustid

`func (o *Tickets) SetCustid(v string)`

SetCustid sets Custid field to given value.


### GetView

`func (o *Tickets) GetView() string`

GetView returns the View field if non-nil, zero value otherwise.

### GetViewOk

`func (o *Tickets) GetViewOk() (*string, bool)`

GetViewOk returns a tuple with the View field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetView

`func (o *Tickets) SetView(v string)`

SetView sets View field to given value.


### GetCurrentPage

`func (o *Tickets) GetCurrentPage() int32`

GetCurrentPage returns the CurrentPage field if non-nil, zero value otherwise.

### GetCurrentPageOk

`func (o *Tickets) GetCurrentPageOk() (*int32, bool)`

GetCurrentPageOk returns a tuple with the CurrentPage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrentPage

`func (o *Tickets) SetCurrentPage(v int32)`

SetCurrentPage sets CurrentPage field to given value.


### GetLimit

`func (o *Tickets) GetLimit() int32`

GetLimit returns the Limit field if non-nil, zero value otherwise.

### GetLimitOk

`func (o *Tickets) GetLimitOk() (*int32, bool)`

GetLimitOk returns a tuple with the Limit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLimit

`func (o *Tickets) SetLimit(v int32)`

SetLimit sets Limit field to given value.


### GetSortcol

`func (o *Tickets) GetSortcol() int32`

GetSortcol returns the Sortcol field if non-nil, zero value otherwise.

### GetSortcolOk

`func (o *Tickets) GetSortcolOk() (*int32, bool)`

GetSortcolOk returns a tuple with the Sortcol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSortcol

`func (o *Tickets) SetSortcol(v int32)`

SetSortcol sets Sortcol field to given value.


### GetSortdir

`func (o *Tickets) GetSortdir() int32`

GetSortdir returns the Sortdir field if non-nil, zero value otherwise.

### GetSortdirOk

`func (o *Tickets) GetSortdirOk() (*int32, bool)`

GetSortdirOk returns a tuple with the Sortdir field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSortdir

`func (o *Tickets) SetSortdir(v int32)`

SetSortdir sets Sortdir field to given value.


### GetRowsOffset

`func (o *Tickets) GetRowsOffset() int32`

GetRowsOffset returns the RowsOffset field if non-nil, zero value otherwise.

### GetRowsOffsetOk

`func (o *Tickets) GetRowsOffsetOk() (*int32, bool)`

GetRowsOffsetOk returns a tuple with the RowsOffset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRowsOffset

`func (o *Tickets) SetRowsOffset(v int32)`

SetRowsOffset sets RowsOffset field to given value.


### GetTickets

`func (o *Tickets) GetTickets() []TicketsRow`

GetTickets returns the Tickets field if non-nil, zero value otherwise.

### GetTicketsOk

`func (o *Tickets) GetTicketsOk() (*[]TicketsRow, bool)`

GetTicketsOk returns a tuple with the Tickets field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTickets

`func (o *Tickets) SetTickets(v []TicketsRow)`

SetTickets sets Tickets field to given value.


### GetPages

`func (o *Tickets) GetPages() int32`

GetPages returns the Pages field if non-nil, zero value otherwise.

### GetPagesOk

`func (o *Tickets) GetPagesOk() (*int32, bool)`

GetPagesOk returns a tuple with the Pages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPages

`func (o *Tickets) SetPages(v int32)`

SetPages sets Pages field to given value.


### GetRowsTotal

`func (o *Tickets) GetRowsTotal() int32`

GetRowsTotal returns the RowsTotal field if non-nil, zero value otherwise.

### GetRowsTotalOk

`func (o *Tickets) GetRowsTotalOk() (*int32, bool)`

GetRowsTotalOk returns a tuple with the RowsTotal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRowsTotal

`func (o *Tickets) SetRowsTotal(v int32)`

SetRowsTotal sets RowsTotal field to given value.


### GetInboxCount

`func (o *Tickets) GetInboxCount() int32`

GetInboxCount returns the InboxCount field if non-nil, zero value otherwise.

### GetInboxCountOk

`func (o *Tickets) GetInboxCountOk() (*int32, bool)`

GetInboxCountOk returns a tuple with the InboxCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInboxCount

`func (o *Tickets) SetInboxCount(v int32)`

SetInboxCount sets InboxCount field to given value.


### GetCountArray

`func (o *Tickets) GetCountArray() TicketsCountArray`

GetCountArray returns the CountArray field if non-nil, zero value otherwise.

### GetCountArrayOk

`func (o *Tickets) GetCountArrayOk() (*TicketsCountArray, bool)`

GetCountArrayOk returns a tuple with the CountArray field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountArray

`func (o *Tickets) SetCountArray(v TicketsCountArray)`

SetCountArray sets CountArray field to given value.


### GetViewText

`func (o *Tickets) GetViewText() string`

GetViewText returns the ViewText field if non-nil, zero value otherwise.

### GetViewTextOk

`func (o *Tickets) GetViewTextOk() (*string, bool)`

GetViewTextOk returns a tuple with the ViewText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetViewText

`func (o *Tickets) SetViewText(v string)`

SetViewText sets ViewText field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


