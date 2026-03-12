
package org.openapitools.client.model


case class ScrubIpFilterTypesFiltersValue (
    _name: Option[String],
    _desc: Option[String]
)
object ScrubIpFilterTypesFiltersValue {
    def toStringBody(var_name: Object, var_desc: Object) =
        s"""
        | {
        | "name":$var_name,"desc":$var_desc
        | }
        """.stripMargin
}
