package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainDnssecRequest._

case class DomainDnssecRequest (
  /* List of DNSSEC algorithm IDs for each record. */
  algorithm: Option[List[Integer]],
/* List of digest type IDs for each record. */
  digest_type: Option[List[Integer]],
/* List of hex digests for each record. */
  digest: Option[List[String]],
/* List of key tag values corresponding to each record. */
  key_tag: Option[List[Integer]])

object DomainDnssecRequest {
  import DateTimeCodecs._

  implicit val DomainDnssecRequestCodecJson: CodecJson[DomainDnssecRequest] = CodecJson.derive[DomainDnssecRequest]
  implicit val DomainDnssecRequestDecoder: EntityDecoder[DomainDnssecRequest] = jsonOf[DomainDnssecRequest]
  implicit val DomainDnssecRequestEncoder: EntityEncoder[DomainDnssecRequest] = jsonEncoderOf[DomainDnssecRequest]
}
