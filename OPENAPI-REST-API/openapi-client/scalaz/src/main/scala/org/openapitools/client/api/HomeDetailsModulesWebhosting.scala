package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesWebhosting._

case class HomeDetailsModulesWebhosting (
  /* The icon for web hosting. */
  icon: Option[String],
/* Link to view website. */
  view_link: Option[String],
/* Heading for web hosting. */
  heading: Option[String],
/* Link to order website. */
  buy_link: Option[String],
/* Link to view websites list. */
  list_link: Option[String])

object HomeDetailsModulesWebhosting {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesWebhostingCodecJson: CodecJson[HomeDetailsModulesWebhosting] = CodecJson.derive[HomeDetailsModulesWebhosting]
  implicit val HomeDetailsModulesWebhostingDecoder: EntityDecoder[HomeDetailsModulesWebhosting] = jsonOf[HomeDetailsModulesWebhosting]
  implicit val HomeDetailsModulesWebhostingEncoder: EntityEncoder[HomeDetailsModulesWebhosting] = jsonEncoderOf[HomeDetailsModulesWebhosting]
}
