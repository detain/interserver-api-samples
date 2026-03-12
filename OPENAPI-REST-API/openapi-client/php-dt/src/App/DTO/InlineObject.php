<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class InlineObject
{
    #[DTA\Data(field: "code")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $code = null;

    #[DTA\Data(field: "message")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message = null;

}
