# RaidOption

A RAID configuration option available for a dedicated server.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 

## Example

```python
from openapi_client.models.raid_option import RaidOption

# TODO update the JSON string below
json = "{}"
# create an instance of RaidOption from a JSON string
raid_option_instance = RaidOption.from_json(json)
# print the JSON string representation of the object
print(RaidOption.to_json())

# convert the object into a dict
raid_option_dict = raid_option_instance.to_dict()
# create an instance of RaidOption from a dict
raid_option_from_dict = RaidOption.from_dict(raid_option_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


