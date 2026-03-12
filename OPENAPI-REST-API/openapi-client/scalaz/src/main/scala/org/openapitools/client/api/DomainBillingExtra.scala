package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainBillingExtra._

case class DomainBillingExtra (
  order: Option[DomainOrderResponse],
order_id: Option[String],
domain_id: Option[String],
provProcessPending: Option[DomainProvProcessPending],
email: Option[String],
firstname: Option[String],
lastname: Option[String],
company: Option[String],
address: Option[String],
address2: Option[String],
address3: Option[String],
city: Option[String],
state: Option[String],
zip: Option[String],
country: Option[String],
phone: Option[String],
fax: Option[String])

object DomainBillingExtra {
  import DateTimeCodecs._

  implicit val DomainBillingExtraCodecJson: CodecJson[DomainBillingExtra] = CodecJson.derive[DomainBillingExtra]
  implicit val DomainBillingExtraDecoder: EntityDecoder[DomainBillingExtra] = jsonOf[DomainBillingExtra]
  implicit val DomainBillingExtraEncoder: EntityEncoder[DomainBillingExtra] = jsonEncoderOf[DomainBillingExtra]
}
