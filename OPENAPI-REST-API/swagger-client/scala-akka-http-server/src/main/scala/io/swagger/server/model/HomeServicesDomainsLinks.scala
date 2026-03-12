package io.swagger.server.model


/**
 * Map of domain service IDs to their hostnames for the account dashboard.
 *
 * @param 376114 Link to a domain. for example: ''pimpmy.website''
 * @param 376503 Link to a domain. for example: ''hostingenuity.com''
 * @param 592337 Link to a domain. for example: ''detain.dev''
 */
case class HomeServicesDomainsLinks (
  376114: Option[String],
  376503: Option[String],
  592337: Option[String]
)

