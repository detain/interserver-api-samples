<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsOrderTemplatesHypervWindows
{
    #[DTA\Data(field: "Windows2019Standard", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $windows2019_standard = null;

    #[DTA\Data(field: "Windows2022", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $windows2022 = null;

}
