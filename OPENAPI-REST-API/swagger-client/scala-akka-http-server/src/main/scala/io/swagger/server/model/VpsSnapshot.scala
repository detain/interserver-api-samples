package io.swagger.server.model


/**
 * A VPS snapshot (point-in-time backup) stored on the host node.
 *
 * @param name Snapshot name.
 * @param used Disk space used by this snapshot in bytes.
 * @param date Unix timestamp of when the snapshot was created.
 */
case class VpsSnapshot (
  name: Option[String],
  used: Option[Int],
  date: Option[Int]
)

