

# ServerOrderGetResponse

Configuration options and pricing data returned when starting a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_values** | [**FormValues**](FormValues.md) |  | 
**config_ids** | [**ConfigIds**](ConfigIds.md) |  | 
**cpu** | **Int** |  | 
**cpu_li** | [**Map&lt;String, Cpu&gt;**](Cpu.md) |  | 
**config_li** | [**ConfigLists**](ConfigLists.md) |  | 
**frequency** | **Int** |  | 
**currency** | **String** |  | 
**country** | **String** |  | 
**step** | **String** |  | 
**field_label** | [**Map&lt;String, FieldLabel&gt;**](FieldLabel.md) |  |  [optional]
**cpu_cores** | **Map&lt;String, Map[String, CpuWithDefaults]&gt;** |  |  [optional]
**currencySymbol** | **String** |  |  [optional]
**custid** | **Int** |  |  [optional]
**ima** | **String** |  |  [optional]
**regions** | [**Seq&lt;Region&gt;**](Region.md) |  |  [optional]
**asset_servers** | [**Seq&lt;AssetServer&gt;**](AssetServer.md) |  |  [optional]
**buy_it_servers** | **Seq&lt;Any&gt;** |  |  [optional]
**display_showmore** | **String** |  |  [optional]
**cust_discount** | **BigDecimal** |  |  [optional]



