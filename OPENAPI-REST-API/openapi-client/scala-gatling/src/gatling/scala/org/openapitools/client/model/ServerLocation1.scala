
package org.openapitools.client.model


case class ServerLocation1 (
    _location_id: Integer,
    _location_name: String,
    _location_lat: String,
    _location_long: String,
    _location_description: Option[String],
    _location_ipmi_group: Option[Integer]
)
object ServerLocation1 {
    def toStringBody(var_location_id: Object, var_location_name: Object, var_location_lat: Object, var_location_long: Object, var_location_description: Object, var_location_ipmi_group: Object) =
        s"""
        | {
        | "location_id":$var_location_id,"location_name":$var_location_name,"location_lat":$var_location_lat,"location_long":$var_location_long,"location_description":$var_location_description,"location_ipmi_group":$var_location_ipmi_group
        | }
        """.stripMargin
}
