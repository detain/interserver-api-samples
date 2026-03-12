<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetAccountTfaSetup200Response
{
    /**
     * Base64-encoded secret key for TOTP setup.
     */
    #[DTA\Data(field: "2fa_google_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_key = null;

    /**
     * Human-readable formatted key (chunks of 4 characters).
     */
    #[DTA\Data(field: "2fa_google_split", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_split = null;

}
