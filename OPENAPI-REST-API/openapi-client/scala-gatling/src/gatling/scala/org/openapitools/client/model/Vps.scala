
package org.openapitools.client.model


case class Vps (
    _serviceInfo: VpsServiceInfo,
    _client_links: List[VpsClientLink],
    _billingDetails: VpsBillingDetails,
    _custCurrency: String,
    _custCurrencySymbol: String,
    _serviceMaster: VpsServiceMaster,
    _package: String,
    _serviceExtra: VpsServiceExtra,
    _extraInfoTables: VpsExtraInfoTables,
    _module: String,
    _token: String,
    _da_link: Integer,
    _sr_link: Integer,
    _cp_data: VpsCPData,
    _da_data: VpsDAData,
    _plesk12_data: VpsPlesk12Data,
    _serviceAddons: VpsServiceAddons,
    _os_template: Option[String],
    _cpu_graph_data: Option[AnyType]
)
object Vps {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_serviceMaster: Object, var_package: Object, var_serviceExtra: Object, var_extraInfoTables: Object, var_module: Object, var_token: Object, var_da_link: Object, var_sr_link: Object, var_cp_data: Object, var_da_data: Object, var_plesk12_data: Object, var_serviceAddons: Object, var_os_template: Object, var_cpu_graph_data: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"serviceMaster":$var_serviceMaster,"package":$var_package,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables,"module":$var_module,"token":$var_token,"da_link":$var_da_link,"sr_link":$var_sr_link,"cp_data":$var_cp_data,"da_data":$var_da_data,"plesk12_data":$var_plesk12_data,"serviceAddons":$var_serviceAddons,"os_template":$var_os_template,"cpu_graph_data":$var_cpu_graph_data
        | }
        """.stripMargin
}
