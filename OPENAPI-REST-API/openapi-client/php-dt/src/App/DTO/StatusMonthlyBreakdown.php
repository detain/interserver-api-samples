<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Monthly mail delivery status breakdown, showing counts per status category.
 */
class StatusMonthlyBreakdown
{
    #[DTA\Data(field: "default")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $default = null;

    #[DTA\Data(field: "failed")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $failed = null;

    #[DTA\Data(field: "rejected")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $rejected = null;

    #[DTA\Data(field: "pending")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $pending = null;

    #[DTA\Data(field: "locked")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $locked = null;

    #[DTA\Data(field: "paid")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MonthlyCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MonthlyCounts::class])]
    public \App\DTO\MonthlyCounts|null $paid = null;

}
