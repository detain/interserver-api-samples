<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class SslCancel200Response
{
    #[DTA\Data(field: "success")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

}
