<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Location Stock
 */
class VpsOrderLocationStock
{
    #[DTA\Data(field: "1", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderLocationStock1::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderLocationStock1::class])]
    public \App\DTO\VpsOrderLocationStock1|null $_1 = null;

}
