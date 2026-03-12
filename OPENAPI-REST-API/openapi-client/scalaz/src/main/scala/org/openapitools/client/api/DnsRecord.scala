package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsRecord._

case class DnsRecord (
  /* The ID of the DNS Record. */
  id: String,
/* The ID of the Domain this is a record of. */
  domain_id: String,
name: String,
`type`: DnsRecordType,
/* The content of the record, such as the IP address or hsotname. */
  content: String,
/* Time To Live (seconds) */
  ttl: String,
/* Priority */
  prio: String,
disabled: String,
/* Alternate name to use for sorting */
  ordername: String,
auth: String)

object DnsRecord {
  import DateTimeCodecs._

  implicit val DnsRecordCodecJson: CodecJson[DnsRecord] = CodecJson.derive[DnsRecord]
  implicit val DnsRecordDecoder: EntityDecoder[DnsRecord] = jsonOf[DnsRecord]
  implicit val DnsRecordEncoder: EntityEncoder[DnsRecord] = jsonEncoderOf[DnsRecord]
}
