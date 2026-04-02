# Bandwidth

A bandwidth option available for a dedicated server configuration.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 
**monthly_price_display** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.bandwidth import Bandwidth

# TODO update the JSON string below
json = "{}"
# create an instance of Bandwidth from a JSON string
bandwidth_instance = Bandwidth.from_json(json)
# print the JSON string representation of the object
print(Bandwidth.to_json())

# convert the object into a dict
bandwidth_dict = bandwidth_instance.to_dict()
# create an instance of Bandwidth from a dict
bandwidth_from_dict = Bandwidth.from_dict(bandwidth_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


