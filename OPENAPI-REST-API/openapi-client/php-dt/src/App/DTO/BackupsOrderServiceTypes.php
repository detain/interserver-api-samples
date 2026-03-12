<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BackupsOrderServiceTypes
{
    #[DTA\Data(field: "11006", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupsOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupsOrderServiceTypes::class])]
    public \App\DTO\BackupsOrderServiceTypes|null $_11006 = null;

}
