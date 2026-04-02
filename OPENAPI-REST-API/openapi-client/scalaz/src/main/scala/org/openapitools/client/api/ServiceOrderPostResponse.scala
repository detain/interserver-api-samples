package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServiceOrderPostResponse._

case class ServiceOrderPostResponse (
  /* Whether the order was accepted and can proceed to payment. */
  continue: Option[Boolean],
/* List of validation errors (empty on success). */
  errors: Option[List[String]],
/* Total cost of the order. */
  total_cost: Option[String],
/* Primary invoice ID for payment. */
  iid: Option[String],
/* All invoice identifiers associated with the order. */
  iids: Option[List[String]],
/* Numeric invoice IDs for use with billing endpoints. */
  real_iids: Option[List[String]],
/* The new service ID created by the order. */
  serviceId: Option[Integer],
/* Human-readable description of the invoice. */
  invoice_description: Option[String])

object ServiceOrderPostResponse {
  import DateTimeCodecs._

  implicit val ServiceOrderPostResponseCodecJson: CodecJson[ServiceOrderPostResponse] = CodecJson.derive[ServiceOrderPostResponse]
  implicit val ServiceOrderPostResponseDecoder: EntityDecoder[ServiceOrderPostResponse] = jsonOf[ServiceOrderPostResponse]
  implicit val ServiceOrderPostResponseEncoder: EntityEncoder[ServiceOrderPostResponse] = jsonEncoderOf[ServiceOrderPostResponse]
}
