# OpenAPIClient::Object::ServerOrderGetResponse

## Load the model package
```perl
use OpenAPIClient::Object::ServerOrderGetResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_values** | [**FormValues**](FormValues.md) |  | 
**config_ids** | [**ConfigIds**](ConfigIds.md) |  | 
**cpu** | **int** |  | 
**cpu_li** | [**HASH[string,Cpu]**](Cpu.md) |  | 
**config_li** | [**ConfigLists**](ConfigLists.md) |  | 
**field_label** | [**HASH[string,FieldLabel]**](FieldLabel.md) |  | [optional] 
**cpu_cores** | **HASH[string,HASH[string,CpuWithDefaults]]** |  | [optional] 
**frequency** | **int** |  | 
**currency** | **string** |  | 
**currency_symbol** | **string** |  | [optional] 
**country** | **string** |  | 
**custid** | **int** |  | [optional] 
**ima** | **string** |  | [optional] 
**step** | **string** |  | 
**regions** | [**ARRAY[Region]**](Region.md) |  | [optional] 
**asset_servers** | [**ARRAY[AssetServer]**](AssetServer.md) |  | [optional] 
**buy_it_servers** | **ARRAY[object]** |  | [optional] 
**display_showmore** | **string** |  | [optional] 
**cust_discount** | **double** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


