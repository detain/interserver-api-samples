package io.swagger.server.model


/**
 * Lookup and suggestion results returned for a domain search.
 *
 * @param success Indicates whether the registrar search succeeded.
 * @param response_text Human-readable status text from the registrar.
 * @param response_time Response time as reported by the registrar.
 * @param lookup Availability lookup results for queried domains.
 * @param suggest Suggested alternative domains and availability data.
 * @param tlds TLDs evaluated during the search.
 */
case class DomainSearchResponse (
  success: Option[Boolean],
  response_text: Option[String],
  response_time: Option[String],
  lookup: Option[List[Object]],
  suggest: Option[List[Object]],
  tlds: Option[List[String]]
)

