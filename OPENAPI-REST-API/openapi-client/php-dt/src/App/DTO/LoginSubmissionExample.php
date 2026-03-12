<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The data to submit in the login request.
 */
class LoginSubmissionExample
{
    #[DTA\Data(field: "login")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $login = null;

    #[DTA\Data(field: "passwd")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $passwd = null;

    #[DTA\Data(field: "remember", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $remember = null;

    #[DTA\Data(field: "g-recaptcha-response", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LoginSubmissionExampleGRecaptchaResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LoginSubmissionExampleGRecaptchaResponse::class])]
    public \App\DTO\LoginSubmissionExampleGRecaptchaResponse|null $g_recaptcha_response = null;

    /**
     * Two Factor Authentication Response.
     */
    #[DTA\Data(field: "tfa", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $tfa = null;

}
