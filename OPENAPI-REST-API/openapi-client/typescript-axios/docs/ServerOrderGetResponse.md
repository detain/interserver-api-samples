# ServerOrderGetResponse

Configuration options and pricing data returned when starting a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_values** | [**FormValues**](FormValues.md) |  | [default to undefined]
**config_ids** | [**ConfigIds**](ConfigIds.md) |  | [default to undefined]
**cpu** | **number** |  | [default to undefined]
**cpu_li** | [**{ [key: string]: Cpu; }**](Cpu.md) |  | [default to undefined]
**config_li** | [**ConfigLists**](ConfigLists.md) |  | [default to undefined]
**frequency** | **number** |  | [default to undefined]
**currency** | **string** |  | [default to undefined]
**country** | **string** |  | [default to undefined]
**step** | **string** |  | [default to undefined]
**field_label** | [**{ [key: string]: FieldLabel; }**](FieldLabel.md) |  | [optional] [default to undefined]
**cpu_cores** | **{ [key: string]: { [key: string]: CpuWithDefaults; }; }** |  | [optional] [default to undefined]
**currencySymbol** | **string** |  | [optional] [default to undefined]
**custid** | **number** |  | [optional] [default to undefined]
**ima** | **string** |  | [optional] [default to undefined]
**regions** | [**Array&lt;Region&gt;**](Region.md) |  | [optional] [default to undefined]
**asset_servers** | [**Array&lt;AssetServer&gt;**](AssetServer.md) |  | [optional] [default to undefined]
**buy_it_servers** | **Array&lt;object&gt;** |  | [optional] [default to undefined]
**display_showmore** | **string** |  | [optional] [default to undefined]
**cust_discount** | **number** |  | [optional] [default to undefined]

## Example

```typescript
import { ServerOrderGetResponse } from './api';

const instance: ServerOrderGetResponse = {
    form_values,
    config_ids,
    cpu,
    cpu_li,
    config_li,
    frequency,
    currency,
    country,
    step,
    field_label,
    cpu_cores,
    currencySymbol,
    custid,
    ima,
    regions,
    asset_servers,
    buy_it_servers,
    display_showmore,
    cust_discount,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
