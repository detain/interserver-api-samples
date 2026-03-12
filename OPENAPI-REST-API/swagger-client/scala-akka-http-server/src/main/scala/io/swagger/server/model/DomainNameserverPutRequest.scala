package io.swagger.server.model


/**
 * Payload for replacing the assigned nameserver list for a domain.
 *
 * @param nameserver 
 */
case class DomainNameserverPutRequest (
  nameserver: List[String]
)

