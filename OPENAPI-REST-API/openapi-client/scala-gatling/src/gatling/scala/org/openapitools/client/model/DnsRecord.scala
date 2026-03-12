
package org.openapitools.client.model


case class DnsRecord (
    /* The ID of the DNS Record. */
    _id: String,
    /* The ID of the Domain this is a record of. */
    _domain_id: String,
    _name: String,
    _type: DnsRecordType,
    /* The content of the record, such as the IP address or hsotname. */
    _content: String,
    /* Time To Live (seconds) */
    _ttl: String,
    /* Priority */
    _prio: String,
    _disabled: String,
    /* Alternate name to use for sorting */
    _ordername: String,
    _auth: String
)
object DnsRecord {
    def toStringBody(var_id: Object, var_domain_id: Object, var_name: Object, var_type: Object, var_content: Object, var_ttl: Object, var_prio: Object, var_disabled: Object, var_ordername: Object, var_auth: Object) =
        s"""
        | {
        | "id":$var_id,"domain_id":$var_domain_id,"name":$var_name,"type":$var_type,"content":$var_content,"ttl":$var_ttl,"prio":$var_prio,"disabled":$var_disabled,"ordername":$var_ordername,"auth":$var_auth
        | }
        """.stripMargin
}
