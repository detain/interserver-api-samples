<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Basic information useful for rendering a login page.
 */
class LoginInfo
{
    /**
     * A base64 encoded image to use for rendering the alternateive captcha.
     */
    #[DTA\Data(field: "captcha")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $captcha = null;

    #[DTA\Data(field: "counts")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LoginServiceCounts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LoginServiceCounts::class])]
    public \App\DTO\LoginServiceCounts|null $counts = null;

    /**
     * A logo image url.
     */
    #[DTA\Data(field: "logo", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $logo = null;

    /**
     * The desired langauge to render the site with.
     */
    #[DTA\Data(field: "language", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $language = null;

}
