<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LoginSubmissionExampleGRecaptchaResponse
{
    #[DTA\Data(field: "__v_isShallow", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $__v_is_shallow = null;

    #[DTA\Data(field: "dep", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LoginSubmissionExampleGRecaptchaResponseDep::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LoginSubmissionExampleGRecaptchaResponseDep::class])]
    public \App\DTO\LoginSubmissionExampleGRecaptchaResponseDep|null $dep = null;

    #[DTA\Data(field: "__v_isRef", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $__v_is_ref = null;

    #[DTA\Data(field: "_rawValue", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_raw_value = null;

    #[DTA\Data(field: "_value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_value = null;

}
