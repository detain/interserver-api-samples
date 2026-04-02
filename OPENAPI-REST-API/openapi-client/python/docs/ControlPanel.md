# ControlPanel

A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 

## Example

```python
from openapi_client.models.control_panel import ControlPanel

# TODO update the JSON string below
json = "{}"
# create an instance of ControlPanel from a JSON string
control_panel_instance = ControlPanel.from_json(json)
# print the JSON string representation of the object
print(ControlPanel.to_json())

# convert the object into a dict
control_panel_dict = control_panel_instance.to_dict()
# create an instance of ControlPanel from a dict
control_panel_from_dict = ControlPanel.from_dict(control_panel_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


