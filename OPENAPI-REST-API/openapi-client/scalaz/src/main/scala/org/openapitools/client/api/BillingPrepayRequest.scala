package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BillingPrepayRequest._

case class BillingPrepayRequest (
  /* Module the prepay should be applied to (for example `default`). */
  module: Option[String],
/* Amount to add to prepay balance. Minimum is $10. */
  amount: Option[BigDecimal],
/* Whether the prepay balance should be used automatically. */
  automatic_use: Option[String])

object BillingPrepayRequest {
  import DateTimeCodecs._

  implicit val BillingPrepayRequestCodecJson: CodecJson[BillingPrepayRequest] = CodecJson.derive[BillingPrepayRequest]
  implicit val BillingPrepayRequestDecoder: EntityDecoder[BillingPrepayRequest] = jsonOf[BillingPrepayRequest]
  implicit val BillingPrepayRequestEncoder: EntityEncoder[BillingPrepayRequest] = jsonEncoderOf[BillingPrepayRequest]
}
