
package org.openapitools.client.model


case class DomainAdminContact (
    _status: Option[String],
    _state: Option[String],
    _org_name: Option[String],
    _country: Option[String],
    _postal_code: Option[String],
    _email: Option[String],
    _fax: Option[String],
    _address2: Option[String],
    _address3: Option[String],
    _address1: Option[String],
    _city: Option[String],
    _phone: Option[String],
    _first_name: Option[String],
    _last_name: Option[String]
)
object DomainAdminContact {
    def toStringBody(var_status: Object, var_state: Object, var_org_name: Object, var_country: Object, var_postal_code: Object, var_email: Object, var_fax: Object, var_address2: Object, var_address3: Object, var_address1: Object, var_city: Object, var_phone: Object, var_first_name: Object, var_last_name: Object) =
        s"""
        | {
        | "status":$var_status,"state":$var_state,"org_name":$var_org_name,"country":$var_country,"postal_code":$var_postal_code,"email":$var_email,"fax":$var_fax,"address2":$var_address2,"address3":$var_address3,"address1":$var_address1,"city":$var_city,"phone":$var_phone,"first_name":$var_first_name,"last_name":$var_last_name
        | }
        """.stripMargin
}
