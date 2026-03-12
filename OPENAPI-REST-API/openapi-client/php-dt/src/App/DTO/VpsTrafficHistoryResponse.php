<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Data History Section
 */
class VpsTrafficHistoryResponse
{
    #[DTA\Data(field: "hour")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficHistorySectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficHistorySectionResponse::class])]
    public \App\DTO\VpsTrafficHistorySectionResponse|null $hour = null;

    #[DTA\Data(field: "day")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficHistorySectionResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficHistorySectionResponse::class])]
    public \App\DTO\VpsTrafficHistorySectionResponse|null $day = null;

}
