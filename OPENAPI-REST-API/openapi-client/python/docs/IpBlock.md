# IpBlock

An IP address block option available for a dedicated server configuration.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**qty** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 

## Example

```python
from openapi_client.models.ip_block import IpBlock

# TODO update the JSON string below
json = "{}"
# create an instance of IpBlock from a JSON string
ip_block_instance = IpBlock.from_json(json)
# print the JSON string representation of the object
print(IpBlock.to_json())

# convert the object into a dict
ip_block_dict = ip_block_instance.to_dict()
# create an instance of IpBlock from a dict
ip_block_from_dict = IpBlock.from_dict(ip_block_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


