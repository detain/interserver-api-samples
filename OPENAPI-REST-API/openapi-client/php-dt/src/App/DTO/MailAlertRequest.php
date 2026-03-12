<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for creating a mail alert.
 */
class MailAlertRequest
{
    /**
     * Alert type identifier.
     */
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * Alert value or threshold.
     */
    #[DTA\Data(field: "value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $value = null;

    /**
     * Email address to notify.
     */
    #[DTA\Data(field: "to", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $to = null;

    /**
     * Whether the alert is enabled.
     */
    #[DTA\Data(field: "enabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $enabled = null;

}
