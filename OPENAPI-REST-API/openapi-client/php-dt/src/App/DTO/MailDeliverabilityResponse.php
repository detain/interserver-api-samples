<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Deliverability statistics for a mail service.
 */
class MailDeliverabilityResponse
{
    /**
     * Delivered and bounced counts.
     */
    #[DTA\Data(field: "stat", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $stat = null;

    /**
     * Bounce percentage.
     */
    #[DTA\Data(field: "percent", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $percent = null;

    /**
     * Detailed deliverability breakdown by sender or domain.
     */
    #[DTA\Data(field: "table_data", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection67::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection67::class])]
    public \App\DTO\Collection67|null $table_data = null;

}
