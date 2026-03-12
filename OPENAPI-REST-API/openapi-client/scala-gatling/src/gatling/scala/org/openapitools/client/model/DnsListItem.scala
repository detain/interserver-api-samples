
package org.openapitools.client.model


case class DnsListItem (
    _id: Option[Integer],
    _name: Option[String],
    _content: Option[String]
)
object DnsListItem {
    def toStringBody(var_id: Object, var_name: Object, var_content: Object) =
        s"""
        | {
        | "id":$var_id,"name":$var_name,"content":$var_content
        | }
        """.stripMargin
}
