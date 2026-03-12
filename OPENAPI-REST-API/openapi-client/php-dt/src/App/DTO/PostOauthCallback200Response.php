<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostOauthCallback200Response
{
    /**
     * Whether the user was logged in to an existing account.
     */
    #[DTA\Data(field: "login", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $login = null;

    /**
     * Whether a new account was created.
     */
    #[DTA\Data(field: "signup", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $signup = null;

    /**
     * Whether the OAuth provider was linked to an existing account.
     */
    #[DTA\Data(field: "linked", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $linked = null;

    /**
     * The account ID associated with the OAuth login.
     */
    #[DTA\Data(field: "account_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $account_id = null;

    /**
     * Error code if additional verification is needed (e.g. &#x60;2fa_required&#x60;).
     */
    #[DTA\Data(field: "error_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $error_code = null;

}
