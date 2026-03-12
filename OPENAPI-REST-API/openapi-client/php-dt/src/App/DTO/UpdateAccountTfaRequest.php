<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class UpdateAccountTfaRequest
{
    /**
     * The 6-digit verification code from your authenticator app.
     */
    #[DTA\Data(field: "2fa_google_code")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_code = null;

}
