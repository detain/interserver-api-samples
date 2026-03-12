<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Usage Average Section
 */
class VpsTrafficUsageAverageResponse
{
    #[DTA\Data(field: "in")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficUsageAverageSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficUsageAverageSectionResponse::class])]
    public \App\DTO\VpsTrafficUsageAverageSectionResponse|null $in = null;

    #[DTA\Data(field: "out")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficUsageAverageSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficUsageAverageSectionResponse::class])]
    public \App\DTO\VpsTrafficUsageAverageSectionResponse|null $out = null;

}
