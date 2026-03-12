
package org.openapitools.client.model


case class DomainAllInfoAttributes (
    _contact_set: Option[DomainAllInfoAttributesContactSet],
    _registry_createdate: Option[String],
    _registry_expiredate: Option[String],
    _tld_data: Option[String],
    _let_expire: Option[String],
    _auto_renew: Option[String],
    _sponsoring_rsp: Option[String],
    _gdpr_consent_status: Option[String],
    _nameserver_list: Option[List[DomainNameServer]],
    _registry_updatedate: Option[String],
    _affiliate_id: Option[String],
    _expiredate: Option[String]
)
object DomainAllInfoAttributes {
    def toStringBody(var_contact_set: Object, var_registry_createdate: Object, var_registry_expiredate: Object, var_tld_data: Object, var_let_expire: Object, var_auto_renew: Object, var_sponsoring_rsp: Object, var_gdpr_consent_status: Object, var_nameserver_list: Object, var_registry_updatedate: Object, var_affiliate_id: Object, var_expiredate: Object) =
        s"""
        | {
        | "contact_set":$var_contact_set,"registry_createdate":$var_registry_createdate,"registry_expiredate":$var_registry_expiredate,"tld_data":$var_tld_data,"let_expire":$var_let_expire,"auto_renew":$var_auto_renew,"sponsoring_rsp":$var_sponsoring_rsp,"gdpr_consent_status":$var_gdpr_consent_status,"nameserver_list":$var_nameserver_list,"registry_updatedate":$var_registry_updatedate,"affiliate_id":$var_affiliate_id,"expiredate":$var_expiredate
        | }
        """.stripMargin
}
