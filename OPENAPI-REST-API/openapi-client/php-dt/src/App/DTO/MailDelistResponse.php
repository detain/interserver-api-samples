<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Blocklist status information for a mail service.
 */
class MailDelistResponse
{
    /**
     * Mail service ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    /**
     * Local blocklist entries.
     */
    #[DTA\Data(field: "local", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection62::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection62::class])]
    public \App\DTO\Collection62|null $local = null;

    /**
     * MailBaby trap block entries.
     */
    #[DTA\Data(field: "mbtrap", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection63::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection63::class])]
    public \App\DTO\Collection63|null $mbtrap = null;

    /**
     * Subject-based block entries.
     */
    #[DTA\Data(field: "subject", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection64::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection64::class])]
    public \App\DTO\Collection64|null $subject = null;

    /**
     * Manually blocked entries.
     */
    #[DTA\Data(field: "manual", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection65::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection65::class])]
    public \App\DTO\Collection65|null $manual = null;

}
