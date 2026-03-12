<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic History Hour and Day Sections
 */
class VpsTrafficHistorySectionResponse
{
    #[DTA\Data(field: "data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection123::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection123::class])]
    public \App\DTO\Collection123|null $data = null;

    #[DTA\Data(field: "times")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection124::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection124::class])]
    public \App\DTO\Collection124|null $times = null;

}
