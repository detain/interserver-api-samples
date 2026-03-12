package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BillingAddCcRequest._

case class BillingAddCcRequest (
  name: Option[String],
address: Option[String],
city: Option[String],
state: Option[String],
country: Option[String],
zip: Option[String],
cc: Option[String],
cc_exp: Option[String],
cc_ccv2: Option[String])

object BillingAddCcRequest {
  import DateTimeCodecs._

  implicit val BillingAddCcRequestCodecJson: CodecJson[BillingAddCcRequest] = CodecJson.derive[BillingAddCcRequest]
  implicit val BillingAddCcRequestDecoder: EntityDecoder[BillingAddCcRequest] = jsonOf[BillingAddCcRequest]
  implicit val BillingAddCcRequestEncoder: EntityEncoder[BillingAddCcRequest] = jsonEncoderOf[BillingAddCcRequest]
}
