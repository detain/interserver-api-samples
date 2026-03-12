<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailAlertsResponseInner
{
    #[DTA\Data(field: "alert_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $alert_id = null;

    #[DTA\Data(field: "alert_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $alert_type = null;

    #[DTA\Data(field: "alert_value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $alert_value = null;

    #[DTA\Data(field: "alert_to", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $alert_to = null;

    #[DTA\Data(field: "alert_enabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $alert_enabled = null;

}
