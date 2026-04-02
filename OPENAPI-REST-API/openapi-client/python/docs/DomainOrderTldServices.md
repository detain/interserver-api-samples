# DomainOrderTldServices

Example map of TLDs to service IDs for domain ordering.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asia** | **int** | Service ID for .asia TLD | [optional] 
**be** | **int** | Service ID for .be TLD | [optional] 
**biz** | **int** | Service ID for .biz TLD | [optional] 
**ca** | **int** | Service ID for .ca TLD | [optional] 

## Example

```python
from openapi_client.models.domain_order_tld_services import DomainOrderTldServices

# TODO update the JSON string below
json = "{}"
# create an instance of DomainOrderTldServices from a JSON string
domain_order_tld_services_instance = DomainOrderTldServices.from_json(json)
# print the JSON string representation of the object
print(DomainOrderTldServices.to_json())

# convert the object into a dict
domain_order_tld_services_dict = domain_order_tld_services_instance.to_dict()
# create an instance of DomainOrderTldServices from a dict
domain_order_tld_services_from_dict = DomainOrderTldServices.from_dict(domain_order_tld_services_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


