
package org.openapitools.client.model


case class WebsiteServiceMaster (
    /* Website ID for the service master */
    _website_id: Option[String],
    /* Website name for the service master */
    _website_name: Option[String],
    /* IP address for the service master */
    _website_ip: Option[String],
    /* Website type for the service master */
    _website_type: Option[String],
    /* Availability status for the service master */
    _website_available: Option[String],
    /* Hard drive size for the service master */
    _website_hdsize: Option[String],
    /* Free hard drive space for the service master */
    _website_hdfree: Option[String],
    /* Load for the service master */
    _website_load: Option[String],
    /* Last update date for the service master */
    _website_last_update: Option[String],
    /* Maximum number of sites for the service master */
    _website_max_sites: Option[String],
    /* Order number for the service master */
    _website_order: Option[String],
    /* Partitions for the service master */
    _website_partitions: Option[String],
    /* DNS server 1 for the service master */
    _website_dns1: Option[String],
    /* DNS server 2 for the service master */
    _website_dns2: Option[String]
)
object WebsiteServiceMaster {
    def toStringBody(var_website_id: Object, var_website_name: Object, var_website_ip: Object, var_website_type: Object, var_website_available: Object, var_website_hdsize: Object, var_website_hdfree: Object, var_website_load: Object, var_website_last_update: Object, var_website_max_sites: Object, var_website_order: Object, var_website_partitions: Object, var_website_dns1: Object, var_website_dns2: Object) =
        s"""
        | {
        | "website_id":$var_website_id,"website_name":$var_website_name,"website_ip":$var_website_ip,"website_type":$var_website_type,"website_available":$var_website_available,"website_hdsize":$var_website_hdsize,"website_hdfree":$var_website_hdfree,"website_load":$var_website_load,"website_last_update":$var_website_last_update,"website_max_sites":$var_website_max_sites,"website_order":$var_website_order,"website_partitions":$var_website_partitions,"website_dns1":$var_website_dns1,"website_dns2":$var_website_dns2
        | }
        """.stripMargin
}
