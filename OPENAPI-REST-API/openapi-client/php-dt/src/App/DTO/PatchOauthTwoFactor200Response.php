<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PatchOauthTwoFactor200Response
{
    /**
     * Whether the 2FA verification succeeded and the user is now logged in.
     */
    #[DTA\Data(field: "login", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $login = null;

}
