package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServiceCategory._

case class ServiceCategory (
  category_id: Integer,
category_name: String,
category_tag: String,
category_module: String)

object ServiceCategory {
  import DateTimeCodecs._

  implicit val ServiceCategoryCodecJson: CodecJson[ServiceCategory] = CodecJson.derive[ServiceCategory]
  implicit val ServiceCategoryDecoder: EntityDecoder[ServiceCategory] = jsonOf[ServiceCategory]
  implicit val ServiceCategoryEncoder: EntityEncoder[ServiceCategory] = jsonEncoderOf[ServiceCategory]
}
