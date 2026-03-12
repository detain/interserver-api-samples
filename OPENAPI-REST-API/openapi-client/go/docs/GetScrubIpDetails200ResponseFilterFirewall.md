# GetScrubIpDetails200ResponseFilterFirewall

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Rules** | Pointer to [**[]GetScrubIpDetails200ResponseFilterFirewallRulesInner**](GetScrubIpDetails200ResponseFilterFirewallRulesInner.md) |  | [optional] 
**Filters** | Pointer to [**[]GetScrubIpDetails200ResponseFilterFirewallFiltersInner**](GetScrubIpDetails200ResponseFilterFirewallFiltersInner.md) |  | [optional] 
**ScrubEnabled** | Pointer to **int32** |  | [optional] 

## Methods

### NewGetScrubIpDetails200ResponseFilterFirewall

`func NewGetScrubIpDetails200ResponseFilterFirewall() *GetScrubIpDetails200ResponseFilterFirewall`

NewGetScrubIpDetails200ResponseFilterFirewall instantiates a new GetScrubIpDetails200ResponseFilterFirewall object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewGetScrubIpDetails200ResponseFilterFirewallWithDefaults

`func NewGetScrubIpDetails200ResponseFilterFirewallWithDefaults() *GetScrubIpDetails200ResponseFilterFirewall`

NewGetScrubIpDetails200ResponseFilterFirewallWithDefaults instantiates a new GetScrubIpDetails200ResponseFilterFirewall object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRules

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetRules() []GetScrubIpDetails200ResponseFilterFirewallRulesInner`

GetRules returns the Rules field if non-nil, zero value otherwise.

### GetRulesOk

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetRulesOk() (*[]GetScrubIpDetails200ResponseFilterFirewallRulesInner, bool)`

GetRulesOk returns a tuple with the Rules field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRules

`func (o *GetScrubIpDetails200ResponseFilterFirewall) SetRules(v []GetScrubIpDetails200ResponseFilterFirewallRulesInner)`

SetRules sets Rules field to given value.

### HasRules

`func (o *GetScrubIpDetails200ResponseFilterFirewall) HasRules() bool`

HasRules returns a boolean if a field has been set.

### GetFilters

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetFilters() []GetScrubIpDetails200ResponseFilterFirewallFiltersInner`

GetFilters returns the Filters field if non-nil, zero value otherwise.

### GetFiltersOk

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetFiltersOk() (*[]GetScrubIpDetails200ResponseFilterFirewallFiltersInner, bool)`

GetFiltersOk returns a tuple with the Filters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilters

`func (o *GetScrubIpDetails200ResponseFilterFirewall) SetFilters(v []GetScrubIpDetails200ResponseFilterFirewallFiltersInner)`

SetFilters sets Filters field to given value.

### HasFilters

`func (o *GetScrubIpDetails200ResponseFilterFirewall) HasFilters() bool`

HasFilters returns a boolean if a field has been set.

### GetScrubEnabled

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetScrubEnabled() int32`

GetScrubEnabled returns the ScrubEnabled field if non-nil, zero value otherwise.

### GetScrubEnabledOk

`func (o *GetScrubIpDetails200ResponseFilterFirewall) GetScrubEnabledOk() (*int32, bool)`

GetScrubEnabledOk returns a tuple with the ScrubEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScrubEnabled

`func (o *GetScrubIpDetails200ResponseFilterFirewall) SetScrubEnabled(v int32)`

SetScrubEnabled sets ScrubEnabled field to given value.

### HasScrubEnabled

`func (o *GetScrubIpDetails200ResponseFilterFirewall) HasScrubEnabled() bool`

HasScrubEnabled returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


