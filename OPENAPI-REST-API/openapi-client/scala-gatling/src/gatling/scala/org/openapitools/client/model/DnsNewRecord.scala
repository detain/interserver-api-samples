
package org.openapitools.client.model


case class DnsNewRecord (
    /* Name part of record */
    _name: String,
    _type: DnsRecordType,
    /* Content of record */
    _content: String,
    /* Time-to-live */
    _ttl: Option[Integer],
    /* Priority */
    _prio: Option[Integer]
)
object DnsNewRecord {
    def toStringBody(var_name: Object, var_type: Object, var_content: Object, var_ttl: Object, var_prio: Object) =
        s"""
        | {
        | "name":$var_name,"type":$var_type,"content":$var_content,"ttl":$var_ttl,"prio":$var_prio
        | }
        """.stripMargin
}
