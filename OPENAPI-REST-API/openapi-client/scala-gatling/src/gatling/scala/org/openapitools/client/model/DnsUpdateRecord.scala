
package org.openapitools.client.model


case class DnsUpdateRecord (
    _name: Option[String],
    _type: Option[DnsRecordType],
    _content: Option[String],
    _ttl: Option[String],
    _prio: Option[String],
    _disabled: Option[String],
    _ordername: Option[String],
    _auth: Option[String]
)
object DnsUpdateRecord {
    def toStringBody(var_name: Object, var_type: Object, var_content: Object, var_ttl: Object, var_prio: Object, var_disabled: Object, var_ordername: Object, var_auth: Object) =
        s"""
        | {
        | "name":$var_name,"type":$var_type,"content":$var_content,"ttl":$var_ttl,"prio":$var_prio,"disabled":$var_disabled,"ordername":$var_ordername,"auth":$var_auth
        | }
        """.stripMargin
}
