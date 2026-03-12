<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS OS Template Request
 */
class TemplateRequest
{
    /**
     * OS Template Filename
     */
    #[DTA\Data(field: "template")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template = null;

    /**
     * Password for this account.
     */
    #[DTA\Data(field: "localPassword")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $local_password = null;

    /**
     * Password for Root / Administrator Account.
     */
    #[DTA\Data(field: "password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    #[DTA\Validator("Length", ["min" => 6])]
    public string|null $password = null;

}
