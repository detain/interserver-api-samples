package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Service._

case class Service (
  services_id: Integer,
services_name: String,
services_cost: BigDecimal,
services_currency: String,
services_category: Integer,
services_buyable: Boolean,
services_type: Integer,
services_field1: String,
services_field2: String,
services_module: String)

object Service {
  import DateTimeCodecs._

  implicit val ServiceCodecJson: CodecJson[Service] = CodecJson.derive[Service]
  implicit val ServiceDecoder: EntityDecoder[Service] = jsonOf[Service]
  implicit val ServiceEncoder: EntityEncoder[Service] = jsonEncoderOf[Service]
}
