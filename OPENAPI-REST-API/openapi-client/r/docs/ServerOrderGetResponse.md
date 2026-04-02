# openapi::ServerOrderGetResponse

Configuration options and pricing data returned when starting a dedicated server order.

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_values** | [**FormValues**](FormValues.md) |  | 
**config_ids** | [**ConfigIds**](ConfigIds.md) |  | 
**cpu** | **integer** |  | 
**cpu_li** | [**map(Cpu)**](Cpu.md) |  | 
**config_li** | [**ConfigLists**](ConfigLists.md) |  | 
**field_label** | [**map(FieldLabel)**](FieldLabel.md) |  | [optional] 
**cpu_cores** | [**map(map(CpuWithDefaults))**](map.md) |  | [optional] 
**frequency** | **integer** |  | 
**currency** | **character** |  | 
**currencySymbol** | **character** |  | [optional] 
**country** | **character** |  | 
**custid** | **integer** |  | [optional] 
**ima** | **character** |  | [optional] 
**step** | **character** |  | 
**regions** | [**array[Region]**](Region.md) |  | [optional] 
**asset_servers** | [**array[AssetServer]**](AssetServer.md) |  | [optional] 
**buy_it_servers** | **array[object]** |  | [optional] 
**display_showmore** | **character** |  | [optional] 
**cust_discount** | **numeric** |  | [optional] 


