
package org.openapitools.client.model


case class DomainBillingExtra (
    _order: Option[DomainOrderResponse],
    _order_id: Option[String],
    _domain_id: Option[String],
    _provProcessPending: Option[DomainProvProcessPending],
    _email: Option[String],
    _firstname: Option[String],
    _lastname: Option[String],
    _company: Option[String],
    _address: Option[String],
    _address2: Option[String],
    _address3: Option[String],
    _city: Option[String],
    _state: Option[String],
    _zip: Option[String],
    _country: Option[String],
    _phone: Option[String],
    _fax: Option[String]
)
object DomainBillingExtra {
    def toStringBody(var_order: Object, var_order_id: Object, var_domain_id: Object, var_provProcessPending: Object, var_email: Object, var_firstname: Object, var_lastname: Object, var_company: Object, var_address: Object, var_address2: Object, var_address3: Object, var_city: Object, var_state: Object, var_zip: Object, var_country: Object, var_phone: Object, var_fax: Object) =
        s"""
        | {
        | "order":$var_order,"order_id":$var_order_id,"domain_id":$var_domain_id,"provProcessPending":$var_provProcessPending,"email":$var_email,"firstname":$var_firstname,"lastname":$var_lastname,"company":$var_company,"address":$var_address,"address2":$var_address2,"address3":$var_address3,"city":$var_city,"state":$var_state,"zip":$var_zip,"country":$var_country,"phone":$var_phone,"fax":$var_fax
        | }
        """.stripMargin
}
