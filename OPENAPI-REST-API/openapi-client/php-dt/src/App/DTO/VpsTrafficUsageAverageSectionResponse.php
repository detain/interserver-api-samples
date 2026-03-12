<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Usage Average Section Response
 */
class VpsTrafficUsageAverageSectionResponse
{
    #[DTA\Data(field: "total")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $total = null;

    #[DTA\Data(field: "count")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

    #[DTA\Data(field: "value")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $value = null;

}
