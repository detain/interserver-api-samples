
package org.openapitools.client.model


case class Region (
    _region_id: Option[Integer],
    _region_name: Option[String]
)
object Region {
    def toStringBody(var_region_id: Object, var_region_name: Object) =
        s"""
        | {
        | "region_id":$var_region_id,"region_name":$var_region_name
        | }
        """.stripMargin
}
