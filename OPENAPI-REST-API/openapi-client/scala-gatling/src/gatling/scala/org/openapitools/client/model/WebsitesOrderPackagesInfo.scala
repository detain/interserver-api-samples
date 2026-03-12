
package org.openapitools.client.model


case class WebsitesOrderPackagesInfo (
    /* The ID of the package. */
    _services_id: String,
    /* The name of the package. */
    _services_name: String,
    /* The cost of the package. */
    _services_cost: String,
    /* The category of the package. */
    _services_category: String,
    /* Indicates if the package is buyable (1 for yes, 0 for no). */
    _services_buyable: String,
    /* The type of the package. */
    _services_type: String,
    /* The module of the package. */
    _services_module: String,
    /* Description of the package. */
    _services_description: String,
    /* Additional field 1 for the package. */
    _services_field1: Option[String],
    /* Additional field 2 for the package. */
    _services_field2: Option[String],
    /* HTML content for the package. */
    _services_html: Option[String],
    /* URL for more information about the package. */
    _services_moreinfo_url: Option[String],
    /* Indicates if the package is hidden (1 for yes, 0 for no). */
    _services_hidden: Option[String]
)
object WebsitesOrderPackagesInfo {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_category: Object, var_services_buyable: Object, var_services_type: Object, var_services_module: Object, var_services_description: Object, var_services_field1: Object, var_services_field2: Object, var_services_html: Object, var_services_moreinfo_url: Object, var_services_hidden: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_category":$var_services_category,"services_buyable":$var_services_buyable,"services_type":$var_services_type,"services_module":$var_services_module,"services_description":$var_services_description,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_html":$var_services_html,"services_moreinfo_url":$var_services_moreinfo_url,"services_hidden":$var_services_hidden
        | }
        """.stripMargin
}
