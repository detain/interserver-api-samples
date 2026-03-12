package io.swagger.server.model


/**
 * @param post_id 
 * @param date 
 * @param contents 
 * @param creator 
 * @param creator_email 
 * @param creator_name 
 * @param hasattachments 
 * @param attachment_download 
 */
case class TicketPostDetails_inner (
  post_id: Option[Int],
  date: Option[String],
  contents: Option[String],
  creator: Option[String],
  creator_email: Option[String],
  creator_name: Option[String],
  hasattachments: Option[Int],
  attachment_download: Option[String]
)

