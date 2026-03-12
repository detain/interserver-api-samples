<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * An email record
 */
class MailLogEntry
{
    /**
     * internal db id
     */
    #[DTA\Data(field: "_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_id = null;

    /**
     * mail id
     */
    #[DTA\Data(field: "id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * from address
     */
    #[DTA\Data(field: "from")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $from = null;

    /**
     * to address
     */
    #[DTA\Data(field: "to")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $to = null;

    /**
     * email subject
     */
    #[DTA\Data(field: "subject")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

    /**
     * creation date
     */
    #[DTA\Data(field: "created")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $created = null;

    /**
     * creation timestamp
     */
    #[DTA\Data(field: "time")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $time = null;

    /**
     * user account
     */
    #[DTA\Data(field: "user")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $user = null;

    /**
     * transaction type
     */
    #[DTA\Data(field: "transtype")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $transtype = null;

    /**
     * origin ip
     */
    #[DTA\Data(field: "origin")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $origin = null;

    /**
     * interface name
     */
    #[DTA\Data(field: "interface")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $interface = null;

    /**
     * sending zone
     */
    #[DTA\Data(field: "sendingZone")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sending_zone = null;

    /**
     * email body size in bytes
     */
    #[DTA\Data(field: "bodySize")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $body_size = null;

    /**
     * index of email in the to adderess list
     */
    #[DTA\Data(field: "seq")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $seq = null;

    /**
     * to address this email is being sent to
     */
    #[DTA\Data(field: "recipient")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $recipient = null;

    /**
     * to address domain
     */
    #[DTA\Data(field: "domain")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain = null;

    /**
     * locked status
     */
    #[DTA\Data(field: "locked")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $locked = null;

    /**
     * lock timestamp
     */
    #[DTA\Data(field: "lockTime")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $lock_time = null;

    /**
     * assigned server
     */
    #[DTA\Data(field: "assigned")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $assigned = null;

    /**
     * queued timestamp
     */
    #[DTA\Data(field: "queued")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $queued = null;

    /**
     * mx hostname
     */
    #[DTA\Data(field: "mxHostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mx_hostname = null;

    /**
     * mail delivery response
     */
    #[DTA\Data(field: "response")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $response = null;

    /**
     * message id
     */
    #[DTA\Data(field: "messageId", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message_id = null;

}
