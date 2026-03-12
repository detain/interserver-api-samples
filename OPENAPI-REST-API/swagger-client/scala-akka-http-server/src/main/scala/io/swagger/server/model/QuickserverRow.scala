package io.swagger.server.model


/**
 * = QuickserverRow =
 *
 * A result row from the `Quickservers` `GET` request.
 *
 * @param qs_id The id of the qs. for example: ''19504''
 * @param qs_name The name of the qs. for example: ''Quickserver199''
 * @param cost The cost of the qs. for example: ''65.00''
 * @param qs_hostname The hostname of the qs. for example: ''qs19504''
 * @param qs_status The status of the qs. for example: ''canceled''
 * @param qs_comment The comment of the qs.
 */
case class QuickserverRow (
  qs_id: String,
  qs_name: String,
  cost: String,
  qs_hostname: String,
  qs_status: String,
  qs_comment: String
)

