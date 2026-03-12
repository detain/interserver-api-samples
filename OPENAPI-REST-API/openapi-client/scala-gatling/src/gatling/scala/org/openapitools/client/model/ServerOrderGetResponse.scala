
package org.openapitools.client.model


case class ServerOrderGetResponse (
    _form_values: FormValues,
    _config_ids: ConfigIds,
    _cpu: Integer,
    _cpu_li: Map[String, Cpu],
    _config_li: ConfigLists,
    _frequency: Integer,
    _currency: String,
    _country: String,
    _step: String,
    _field_label: Option[Map[String, FieldLabel]],
    _cpu_cores: Option[Map[String, Map[String, CpuWithDefaults]]],
    _currencySymbol: Option[String],
    _custid: Option[Integer],
    _ima: Option[String],
    _regions: Option[List[Region]],
    _asset_servers: Option[List[AssetServer]],
    _buy_it_servers: Option[List[Any]],
    _display_showmore: Option[String],
    _cust_discount: Option[Number]
)
object ServerOrderGetResponse {
    def toStringBody(var_form_values: Object, var_config_ids: Object, var_cpu: Object, var_cpu_li: Object, var_config_li: Object, var_frequency: Object, var_currency: Object, var_country: Object, var_step: Object, var_field_label: Object, var_cpu_cores: Object, var_currencySymbol: Object, var_custid: Object, var_ima: Object, var_regions: Object, var_asset_servers: Object, var_buy_it_servers: Object, var_display_showmore: Object, var_cust_discount: Object) =
        s"""
        | {
        | "form_values":$var_form_values,"config_ids":$var_config_ids,"cpu":$var_cpu,"cpu_li":$var_cpu_li,"config_li":$var_config_li,"frequency":$var_frequency,"currency":$var_currency,"country":$var_country,"step":$var_step,"field_label":$var_field_label,"cpu_cores":$var_cpu_cores,"currencySymbol":$var_currencySymbol,"custid":$var_custid,"ima":$var_ima,"regions":$var_regions,"asset_servers":$var_asset_servers,"buy_it_servers":$var_buy_it_servers,"display_showmore":$var_display_showmore,"cust_discount":$var_cust_discount
        | }
        """.stripMargin
}
