# FieldLabel

A display label for a server order form field.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **str** |  | [optional] 
**active** | **int** |  | [optional] 

## Example

```python
from openapi_client.models.field_label import FieldLabel

# TODO update the JSON string below
json = "{}"
# create an instance of FieldLabel from a JSON string
field_label_instance = FieldLabel.from_json(json)
# print the JSON string representation of the object
print(FieldLabel.to_json())

# convert the object into a dict
field_label_dict = field_label_instance.to_dict()
# create an instance of FieldLabel from a dict
field_label_from_dict = FieldLabel.from_dict(field_label_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


