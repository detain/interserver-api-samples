<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Data Section Response
 */
class VpsTrafficDataSectionResponse
{
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection127::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection127::class])]
    public \App\DTO\Collection127|null $data = null;

}
