package io.swagger.server.model


/**
 * Request payload for adding DNSSEC DS records to a domain.
 *
 * @param algorithm List of DNSSEC algorithm IDs for each record.
 * @param digest_type List of digest type IDs for each record.
 * @param digest List of hex digests for each record.
 * @param key_tag List of key tag values corresponding to each record.
 */
case class DomainDnssecRequest (
  algorithm: Option[List[Int]],
  digest_type: Option[List[Int]],
  digest: Option[List[String]],
  key_tag: Option[List[Int]]
)

