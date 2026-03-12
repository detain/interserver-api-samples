
package org.openapitools.client.model


case class Quickserver (
    _serviceInfo: QuickserverServiceInfo,
    _client_links: List[QuickserverClientLink],
    _billingDetails: QuickserverBillingDetails,
    /* Currency of the customer */
    _custCurrency: String,
    /* Currency symbol of the customer */
    _custCurrencySymbol: String,
    _serviceMaster: QuickserverServiceMaster,
    /* Package name */
    _package: String,
    /* Operating system template */
    _os_template: String,
    _serviceExtra: QuickserverServiceExtra,
    _extraInfoTables: QuickserverExtraInfoTables,
    /* CPU graph data */
    _cpu_graph_data: String,
    /* Bandwidth x-axis data */
    _bandwidth_xaxis: String,
    /* Bandwidth y-axis data */
    _bandwidth_yaxis: String,
    /* Module information */
    _module: String,
    /* Authentication token */
    _token: String,
    /* Used disk space */
    _service_disk_used: String,
    /* Total disk space */
    _service_disk_total: String,
    /* Disk usage percentage */
    _disk_percentage: Number,
    /* Memory information */
    _memory: String,
    /* HDD information */
    _hdd: String,
    _service_overview_extra: List[String]
)
object Quickserver {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_serviceMaster: Object, var_package: Object, var_os_template: Object, var_serviceExtra: Object, var_extraInfoTables: Object, var_cpu_graph_data: Object, var_bandwidth_xaxis: Object, var_bandwidth_yaxis: Object, var_module: Object, var_token: Object, var_service_disk_used: Object, var_service_disk_total: Object, var_disk_percentage: Object, var_memory: Object, var_hdd: Object, var_service_overview_extra: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"serviceMaster":$var_serviceMaster,"package":$var_package,"os_template":$var_os_template,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables,"cpu_graph_data":$var_cpu_graph_data,"bandwidth_xaxis":$var_bandwidth_xaxis,"bandwidth_yaxis":$var_bandwidth_yaxis,"module":$var_module,"token":$var_token,"service_disk_used":$var_service_disk_used,"service_disk_total":$var_service_disk_total,"disk_percentage":$var_disk_percentage,"memory":$var_memory,"hdd":$var_hdd,"service_overview_extra":$var_service_overview_extra
        | }
        """.stripMargin
}
