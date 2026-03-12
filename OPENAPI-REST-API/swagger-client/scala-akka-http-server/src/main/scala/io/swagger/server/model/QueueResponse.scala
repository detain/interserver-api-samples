package io.swagger.server.model


/**
 * = QueueResponse =
 *
 * Response after sending an action queue to a service.
 *
 * @param text Response text for example: ''Action has been sent to the server. Please allow up to 2 minutes for action to be completed.''
 * @param queueId The Queue ID attached to the action. for example: ''14670065''
 */
case class QueueResponse (
  text: String,
  queueId: Int
)

