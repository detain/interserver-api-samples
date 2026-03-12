# GetOrderDetail200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PackageCosts** | Pointer to [**GetOrderDetail200ResponsePackageCosts**](GetOrderDetail200ResponsePackageCosts.md) |  | [optional] 
**ServiceTypes** | Pointer to [**[]GetOrderDetail200ResponseServiceTypesInner**](GetOrderDetail200ResponseServiceTypesInner.md) |  | [optional] 
**Ips** | Pointer to [**[]GetOrderDetail200ResponseIpsInner**](GetOrderDetail200ResponseIpsInner.md) |  | [optional] 

## Methods

### NewGetOrderDetail200Response

`func NewGetOrderDetail200Response() *GetOrderDetail200Response`

NewGetOrderDetail200Response instantiates a new GetOrderDetail200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewGetOrderDetail200ResponseWithDefaults

`func NewGetOrderDetail200ResponseWithDefaults() *GetOrderDetail200Response`

NewGetOrderDetail200ResponseWithDefaults instantiates a new GetOrderDetail200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPackageCosts

`func (o *GetOrderDetail200Response) GetPackageCosts() GetOrderDetail200ResponsePackageCosts`

GetPackageCosts returns the PackageCosts field if non-nil, zero value otherwise.

### GetPackageCostsOk

`func (o *GetOrderDetail200Response) GetPackageCostsOk() (*GetOrderDetail200ResponsePackageCosts, bool)`

GetPackageCostsOk returns a tuple with the PackageCosts field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackageCosts

`func (o *GetOrderDetail200Response) SetPackageCosts(v GetOrderDetail200ResponsePackageCosts)`

SetPackageCosts sets PackageCosts field to given value.

### HasPackageCosts

`func (o *GetOrderDetail200Response) HasPackageCosts() bool`

HasPackageCosts returns a boolean if a field has been set.

### GetServiceTypes

`func (o *GetOrderDetail200Response) GetServiceTypes() []GetOrderDetail200ResponseServiceTypesInner`

GetServiceTypes returns the ServiceTypes field if non-nil, zero value otherwise.

### GetServiceTypesOk

`func (o *GetOrderDetail200Response) GetServiceTypesOk() (*[]GetOrderDetail200ResponseServiceTypesInner, bool)`

GetServiceTypesOk returns a tuple with the ServiceTypes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceTypes

`func (o *GetOrderDetail200Response) SetServiceTypes(v []GetOrderDetail200ResponseServiceTypesInner)`

SetServiceTypes sets ServiceTypes field to given value.

### HasServiceTypes

`func (o *GetOrderDetail200Response) HasServiceTypes() bool`

HasServiceTypes returns a boolean if a field has been set.

### GetIps

`func (o *GetOrderDetail200Response) GetIps() []GetOrderDetail200ResponseIpsInner`

GetIps returns the Ips field if non-nil, zero value otherwise.

### GetIpsOk

`func (o *GetOrderDetail200Response) GetIpsOk() (*[]GetOrderDetail200ResponseIpsInner, bool)`

GetIpsOk returns a tuple with the Ips field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIps

`func (o *GetOrderDetail200Response) SetIps(v []GetOrderDetail200ResponseIpsInner)`

SetIps sets Ips field to given value.

### HasIps

`func (o *GetOrderDetail200Response) HasIps() bool`

HasIps returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


