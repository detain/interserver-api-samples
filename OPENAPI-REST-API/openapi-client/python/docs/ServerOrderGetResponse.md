# ServerOrderGetResponse

Configuration options and pricing data returned when starting a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_values** | [**FormValues**](FormValues.md) |  | 
**config_ids** | [**ConfigIds**](ConfigIds.md) |  | 
**cpu** | **int** |  | 
**cpu_li** | [**Dict[str, Cpu]**](Cpu.md) |  | 
**config_li** | [**ConfigLists**](ConfigLists.md) |  | 
**field_label** | [**Dict[str, FieldLabel]**](FieldLabel.md) |  | [optional] 
**cpu_cores** | **Dict[str, Dict[str, CpuWithDefaults]]** |  | [optional] 
**frequency** | **int** |  | 
**currency** | **str** |  | 
**currency_symbol** | **str** |  | [optional] 
**country** | **str** |  | 
**custid** | **int** |  | [optional] 
**ima** | **str** |  | [optional] 
**step** | **str** |  | 
**regions** | [**List[Region]**](Region.md) |  | [optional] 
**asset_servers** | [**List[AssetServer]**](AssetServer.md) |  | [optional] 
**buy_it_servers** | **List[object]** |  | [optional] 
**display_showmore** | **str** |  | [optional] 
**cust_discount** | **float** |  | [optional] 

## Example

```python
from openapi_client.models.server_order_get_response import ServerOrderGetResponse

# TODO update the JSON string below
json = "{}"
# create an instance of ServerOrderGetResponse from a JSON string
server_order_get_response_instance = ServerOrderGetResponse.from_json(json)
# print the JSON string representation of the object
print(ServerOrderGetResponse.to_json())

# convert the object into a dict
server_order_get_response_dict = server_order_get_response_instance.to_dict()
# create an instance of ServerOrderGetResponse from a dict
server_order_get_response_from_dict = ServerOrderGetResponse.from_dict(server_order_get_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


