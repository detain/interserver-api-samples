# FormValues

Currently selected configuration option IDs for a server order form.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**memory** | **int** | Selected memory option ID. | [optional] 
**bandwidth** | **int** | Selected bandwidth option ID. | [optional] 
**ips** | **int** | Selected IP block option ID. | [optional] 
**os** | **int** | Selected operating system option ID. | [optional] 
**cp** | **int** | Selected control panel option ID. | [optional] 
**raid** | **int** | Selected RAID option ID. | [optional] 
**hd** | **int** | Selected hard drive option ID. | [optional] 
**region** | **int** | Selected datacenter region ID. | [optional] 

## Example

```python
from openapi_client.models.form_values import FormValues

# TODO update the JSON string below
json = "{}"
# create an instance of FormValues from a JSON string
form_values_instance = FormValues.from_json(json)
# print the JSON string representation of the object
print(FormValues.to_json())

# convert the object into a dict
form_values_dict = form_values_instance.to_dict()
# create an instance of FormValues from a dict
form_values_from_dict = FormValues.from_dict(form_values_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


