package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostWebsiteMigration200Response._

case class PostWebsiteMigration200Response (
  /* Confirmation message. */
  text: Option[String],
/* The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress. */
  ticket: Option[Integer])

object PostWebsiteMigration200Response {
  import DateTimeCodecs._

  implicit val PostWebsiteMigration200ResponseCodecJson: CodecJson[PostWebsiteMigration200Response] = CodecJson.derive[PostWebsiteMigration200Response]
  implicit val PostWebsiteMigration200ResponseDecoder: EntityDecoder[PostWebsiteMigration200Response] = jsonOf[PostWebsiteMigration200Response]
  implicit val PostWebsiteMigration200ResponseEncoder: EntityEncoder[PostWebsiteMigration200Response] = jsonEncoderOf[PostWebsiteMigration200Response]
}
