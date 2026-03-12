<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LoginSubmissionExampleGRecaptchaResponseDep
{
    #[DTA\Data(field: "w", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $w = null;

    #[DTA\Data(field: "n", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $n = null;

}
