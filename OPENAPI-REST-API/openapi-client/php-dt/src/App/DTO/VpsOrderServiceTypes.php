<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Service Types
 */
class VpsOrderServiceTypes
{
    #[DTA\Data(field: "32", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderServiceTypes32::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderServiceTypes32::class])]
    public \App\DTO\VpsOrderServiceTypes32|null $_32 = null;

}
