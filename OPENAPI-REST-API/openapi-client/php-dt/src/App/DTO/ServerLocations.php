<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerLocations
{
    #[DTA\Data(field: "1", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerLocation1::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerLocation1::class])]
    public \App\DTO\ServerLocation1|null $_1 = null;

}
