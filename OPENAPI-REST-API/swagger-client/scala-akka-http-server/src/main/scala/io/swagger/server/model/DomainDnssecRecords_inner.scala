package io.swagger.server.model


/**
 * @param algorithm 
 * @param digest_type 
 * @param digest 
 * @param key_tag 
 */
case class DomainDnssecRecords_inner (
  algorithm: Option[String],
  digest_type: Option[String],
  digest: Option[String],
  key_tag: Option[String]
)

