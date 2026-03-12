package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesVps._

case class HomeDetailsModulesVps (
  /* The icon for VPS. */
  icon: Option[String],
/* Link to view VPS. */
  view_link: Option[String],
/* Heading for VPS. */
  heading: Option[String],
/* Link to order VPS. */
  buy_link: Option[String],
/* Link to view VPS list. */
  list_link: Option[String])

object HomeDetailsModulesVps {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesVpsCodecJson: CodecJson[HomeDetailsModulesVps] = CodecJson.derive[HomeDetailsModulesVps]
  implicit val HomeDetailsModulesVpsDecoder: EntityDecoder[HomeDetailsModulesVps] = jsonOf[HomeDetailsModulesVps]
  implicit val HomeDetailsModulesVpsEncoder: EntityEncoder[HomeDetailsModulesVps] = jsonEncoderOf[HomeDetailsModulesVps]
}
