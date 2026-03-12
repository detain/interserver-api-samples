package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetOrderDetail200ResponsePackageCosts._

case class GetOrderDetail200ResponsePackageCosts (
  package_id: Option[BigDecimal],
package_cost: Option[BigDecimal],
currency: Option[String],
currencySymbol: Option[String])

object GetOrderDetail200ResponsePackageCosts {
  import DateTimeCodecs._

  implicit val GetOrderDetail200ResponsePackageCostsCodecJson: CodecJson[GetOrderDetail200ResponsePackageCosts] = CodecJson.derive[GetOrderDetail200ResponsePackageCosts]
  implicit val GetOrderDetail200ResponsePackageCostsDecoder: EntityDecoder[GetOrderDetail200ResponsePackageCosts] = jsonOf[GetOrderDetail200ResponsePackageCosts]
  implicit val GetOrderDetail200ResponsePackageCostsEncoder: EntityEncoder[GetOrderDetail200ResponsePackageCosts] = jsonEncoderOf[GetOrderDetail200ResponsePackageCosts]
}
