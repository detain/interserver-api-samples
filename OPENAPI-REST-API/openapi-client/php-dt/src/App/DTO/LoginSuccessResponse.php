<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The response from a successful login.
 */
class LoginSuccessResponse
{
    #[DTA\Data(field: "sessionId", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $session_id = null;

    #[DTA\Data(field: "account_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $account_id = null;

    #[DTA\Data(field: "account_lid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $account_lid = null;

    #[DTA\Data(field: "ima", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ima = null;

    #[DTA\Data(field: "gravatar", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $gravatar = null;

}
