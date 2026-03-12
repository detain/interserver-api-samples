<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetAccountInfo401Response
{
    #[DTA\Data(field: "code")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $code = null;

    #[DTA\Data(field: "message")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message = null;

}
