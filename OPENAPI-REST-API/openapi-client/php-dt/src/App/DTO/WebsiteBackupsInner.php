<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsiteBackupsInner
{
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "size", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $size = null;

}
