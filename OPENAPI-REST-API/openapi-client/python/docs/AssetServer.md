# AssetServer

A pre-configured asset server available for immediate provisioning.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**region** | **str** |  | [optional] 
**price** | **str** |  | [optional] 
**cpu** | [**List[AssetServerCPUInner]**](AssetServerCPUInner.md) |  | [optional] 
**memory** | [**List[AssetServerCPUInner]**](AssetServerCPUInner.md) |  | [optional] 
**bandwidth** | [**List[AssetServerCPUInner]**](AssetServerCPUInner.md) |  | [optional] 
**ips** | [**List[AssetServerCPUInner]**](AssetServerCPUInner.md) |  | [optional] 
**hd** | **Dict[str, str]** |  | [optional] 

## Example

```python
from openapi_client.models.asset_server import AssetServer

# TODO update the JSON string below
json = "{}"
# create an instance of AssetServer from a JSON string
asset_server_instance = AssetServer.from_json(json)
# print the JSON string representation of the object
print(AssetServer.to_json())

# convert the object into a dict
asset_server_dict = asset_server_instance.to_dict()
# create an instance of AssetServer from a dict
asset_server_from_dict = AssetServer.from_dict(asset_server_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


