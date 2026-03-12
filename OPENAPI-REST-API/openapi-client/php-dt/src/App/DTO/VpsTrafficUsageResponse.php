<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Usage Section
 */
class VpsTrafficUsageResponse
{
    #[DTA\Data(field: "current")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $current = null;

    #[DTA\Data(field: "peak")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $peak = null;

    #[DTA\Data(field: "average")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficUsageAverageResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficUsageAverageResponse::class])]
    public \App\DTO\VpsTrafficUsageAverageResponse|null $average = null;

}
