
package org.openapitools.client.model


case class DomainSearchResponse (
    /* Indicates whether the registrar search succeeded. */
    _success: Option[Boolean],
    /* Human-readable status text from the registrar. */
    _response_text: Option[String],
    /* Response time as reported by the registrar. */
    _response_time: Option[String],
    /* Availability lookup results for queried domains. */
    _lookup: Option[List[Any]],
    /* Suggested alternative domains and availability data. */
    _suggest: Option[List[Any]],
    /* TLDs evaluated during the search. */
    _tlds: Option[List[String]]
)
object DomainSearchResponse {
    def toStringBody(var_success: Object, var_response_text: Object, var_response_time: Object, var_lookup: Object, var_suggest: Object, var_tlds: Object) =
        s"""
        | {
        | "success":$var_success,"response_text":$var_response_text,"response_time":$var_response_time,"lookup":$var_lookup,"suggest":$var_suggest,"tlds":$var_tlds
        | }
        """.stripMargin
}
