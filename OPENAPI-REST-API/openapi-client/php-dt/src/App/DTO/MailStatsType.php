<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 */
class MailStatsType
{
    #[DTA\Data(field: "time", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $time = null;

    #[DTA\Data(field: "usage", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $usage = null;

    #[DTA\Data(field: "currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    #[DTA\Data(field: "currencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $cost = null;

    #[DTA\Data(field: "received", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $received = null;

    #[DTA\Data(field: "sent", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $sent = null;

    #[DTA\Data(field: "volume", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailStatsTypeVolume::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailStatsTypeVolume::class])]
    public \App\DTO\MailStatsTypeVolume|null $volume = null;

}
