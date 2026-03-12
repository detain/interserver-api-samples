<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsPleskLicense
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "sub_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sub_name = null;

    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cost = null;

}
