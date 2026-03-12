<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Totals Section
 */
class VpsTrafficTotalsResposne
{
    #[DTA\Data(field: "day")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $day = null;

    #[DTA\Data(field: "month")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $month = null;

    #[DTA\Data(field: "year")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $year = null;

    #[DTA\Data(field: "all")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsSectionResponse::class])]
    public \App\DTO\VpsTrafficTotalsSectionResponse|null $all = null;

}
