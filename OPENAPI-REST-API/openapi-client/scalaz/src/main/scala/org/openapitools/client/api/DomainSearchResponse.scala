package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainSearchResponse._

case class DomainSearchResponse (
  /* Indicates whether the registrar search succeeded. */
  success: Option[Boolean],
/* Human-readable status text from the registrar. */
  response_text: Option[String],
/* Response time as reported by the registrar. */
  response_time: Option[String],
/* Availability lookup results for queried domains. */
  lookup: Option[List[Any]],
/* Suggested alternative domains and availability data. */
  suggest: Option[List[Any]],
/* TLDs evaluated during the search. */
  tlds: Option[List[String]])

object DomainSearchResponse {
  import DateTimeCodecs._

  implicit val DomainSearchResponseCodecJson: CodecJson[DomainSearchResponse] = CodecJson.derive[DomainSearchResponse]
  implicit val DomainSearchResponseDecoder: EntityDecoder[DomainSearchResponse] = jsonOf[DomainSearchResponse]
  implicit val DomainSearchResponseEncoder: EntityEncoder[DomainSearchResponse] = jsonEncoderOf[DomainSearchResponse]
}
