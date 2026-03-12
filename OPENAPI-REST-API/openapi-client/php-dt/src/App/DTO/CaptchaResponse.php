<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A base-64 encoded captcha image.
 */
class CaptchaResponse
{
    /**
     * The base64 encoded captcha image.
     */
    #[DTA\Data(field: "captcha")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $captcha = null;

}
