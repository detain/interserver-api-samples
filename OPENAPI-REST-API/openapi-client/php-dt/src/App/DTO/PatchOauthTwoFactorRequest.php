<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PatchOauthTwoFactorRequest
{
    /**
     * The account ID returned from the POST callback.
     */
    #[DTA\Data(field: "account_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $account_id = null;

    /**
     * The 6-digit two-factor authentication code.
     */
    #[DTA\Data(field: "code")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $code = null;

}
