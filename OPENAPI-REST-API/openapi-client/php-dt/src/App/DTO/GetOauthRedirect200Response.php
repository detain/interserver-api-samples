<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetOauthRedirect200Response
{
    /**
     * The URL to redirect the user to for OAuth authentication.
     */
    #[DTA\Data(field: "redirect_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $redirect_url = null;

}
